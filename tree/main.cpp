/* to use this, 
     - write a form that calls this program with 'action=' in the <form> tag
     - call getPostData() 
     - use getField(string) to access form information 

*/
#include <iostream>
#include "htmlform.h"
#include "tree.h"
#include "node.h"

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
  cout << "Tree Lab" << endl;
  steps.debug();

  

  /// the entire programs
  string program = steps.getField("program");
  
  printProgram(program);
  cout << "<hr/>";
  
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

void parseProgram(string program)
{
  /// a single line
  string line;
  /// for counting the lines
  int count = 0;
  /// where the newline is (for peeling off a line)
  int pos;
  int sep;
  string token;
  string loc;
  string cmd;
  int locint;
  Tree tree;

  //cout << "<table>";

  while ( string::npos != (pos = program.find("\n") ) )
    {
      line = program.substr(0, pos);    /// before the newline
      program = program.substr(pos+1);  /// after the newline
      /// there might newline characters at the end of line
      if (line[pos] < '0') line.erase(pos-1);
      
      
      /// here's where you need to process 'line'
      sep = line.find(" ");
      cmd = line.substr(0, sep);

      //cout << "<tr>";
      //cout << "<td>" << cmd << "</td>";

      if(cmd == "INSERT") {
        line = line.substr(sep+1);
        sep = line.find(",");
        loc = line.substr(0, sep);
        locint = stoi(loc);
        token = line.substr(sep+1);
        //cout << "<td>" << locint << "</td>";
        //cout << "<td>" << token << "</td>";
        tree.insert(locint, token);
      }
      else if(cmd == "PREORDER") {
        tree.preorder();
      }
      else if(cmd == "POSTORDER") {
        tree.postorder();
      }
      else if(cmd == "INORDER") {
        tree.inorder();
      }
      //cout << "</tr>";
      
      
      
      /// this routine just prints it.
      //cout << ++count << ": [" << line << "] len=" << line.size() 
           //<< "<br />" << endl;
    }
     //cout << "</table>";

}
