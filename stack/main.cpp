#include <iostream>
#include "htmlform.h"
#include <stack>

using namespace std;

  bool isOpen(char o) {
    bool rv = false;
    if (o == '(' || o == '{' || o == '[') {
      rv = true;
    }
    return rv;
  }
  bool isClose(char c) {
    bool rv = false;
    if (c == ')' || c == '}' || c == ']') {
      rv = true;
    }
    return rv;
  }
  bool isMatch(char o, char c) {
    bool rv = false;
    string pair;
    pair += o;
    pair += c;
    if (pair == "()" || pair == "{}" || pair == "[]") {
      rv = true;
    }
    return rv;
  }

int main() {

  stack<char> s;

  string inputText;
  HTMLform textarea;

  /// complete the http header
  cout << "Content-type: text/html\n\n";

  /// build a form object

  textarea.getPostData(); /// reads the form and inits the object

  /// Show the debugging (optional)
  //textarea.debug();

  /// the output ('name' is in the html form that started this)
  inputText = textarea.getField("text");
  //cout << inputText;
  for(int i = 0; i < inputText.length(); i++) {
    //cout << inputText[i] << endl;
    char ch = inputText[i];
    if (isOpen(ch)) {
      s.push(ch);
      //cout << ch << " is open.<br/>";
    }
    else if (isClose(ch)) {
      //cout << ch << " is closed.<br/>";
      char prev = s.top();
      if(s.empty()) {
        cout << "ItSA ME LUIGI,,, FUCKA YOU :D<br/>";
        break;
      }
      if(isMatch(prev, ch)) {
        cout << "MATCH!!!!! " << prev << ch << "<br/>";
        s.pop();
      }
      else {
        cout << "ItSA ME MARIO,,, FUCKA YOU :( " << prev << ch << "<br/>";
        break;
      }
    }
  }
  if(s.empty()) {
    cout << "ItSA ME PEACH,,,, CAKE!<br/>";
  }
  else {
    cout << "CHECK YOUR WATCHES, BOWSER TIME!!!<br/>";
  }
  return 0;
}