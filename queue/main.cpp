/* to use this, 
     - write a form that calls this program with 'action=' in the <form> tag
     - call getPostData() 
     - use getField(string) to access form information 

*/
#include <iostream>
#include <queue>
#include <map>
#include "htmlform.h"

void printProgram(string);   /// print the program in HTML
void parseProgram(string);

using namespace std;

int main()
{
  /// complete the http header
  cout << "Content-type: text/html\n\n";

  /// build a form object
  HTMLform steps;
  steps.getPostData();

  /// Show the debugging
  cout << "Queue Parser Lab startup" << endl;
  steps.debug();

  /// the entire programs
  string program = steps.getField("program");
  
  printProgram(program);
  
  //The next line is for you to complete
  parseProgram(program);

  return 0;
}

void printProgram(string program)
{
  /// a single line
  string line;
  /// for counting the lines
  int count = 0;
  /// where the newline is (for peeling off a line)
  int pos;

  while ( string::npos != (pos = program.find("\n") ) )
    {
      line = program.substr(0, pos);    /// before the newline
      program = program.substr(pos+1);  /// after the newline
      /// there might newline characters at the end of line
      if (line[pos] < '0') line.erase(pos-1);
      
      
      /// here's where you need to process 'line'
      /// this routine just prints it.
      cout << ++count << ": [" << line << "] len=" << line.size() 
           << "<br />" << endl;
    }

}

void parseProgram(string program) {
  /// a single line
  string line;
  /// for counting the lines
  int count = 0;
  /// where the newline is (for peeling off a line)
  int pos;
  int sep;
  string token;
  string priostr;
  string cmd;
  int prio;
  priority_queue<int> pq;
  map<int, string> m;
  map<int, string>::iterator itr;

  while ( string::npos != (pos = program.find("\n") ) )
    {
      line = program.substr(0, pos);    /// before the newline
      program = program.substr(pos+1);  /// after the newline
      /// there might newline characters at the end of line
      if (line[pos] < '0') line.erase(pos-1);
      
      /// here's where you need to process 'line'
      sep = line.find(" ");
      cmd = line.substr(0, sep);

      if(cmd == "PUSH") {
        line = line.substr(sep+1);
        sep = line.find(",");
        priostr = line.substr(0, sep);
        prio = stoi(priostr);
        token = line.substr(sep+1);
        pq.push(prio);
        m.insert({prio, token});
      }
      else if(cmd == "TOP") {
        prio = pq.top();
        cout << prio << ", " << token << endl;
        itr = m.find(prio);
        if (itr == m.end()) {
          //handle the error
          cout << "ERROR: element " << prio << "not found" << endl;
        } 
        else {
            token = itr->second;
            cout << prio << ", " << token << endl;
        }
      }
      else if(cmd == "DUMP") {
        if (!pq.empty()) {
          while (!pq.empty()) {
            prio = pq.top();
            itr = m.find(prio);
            if (itr == m.end()) {
              //handle the error
              cout << "ERROR: element " << prio << "not found" << endl;
            } 
            else {
              token = itr->second;
              cout << prio << ", " << token << endl;
            }
            pq.pop();
          }
        }
        else {
          cout << "EMPTY";
        }
      }
      else if(cmd == "NAME") {
        cout << "Rachel Loftus" << endl;
      }
}
}