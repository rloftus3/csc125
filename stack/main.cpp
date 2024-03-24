#include <iostream>
#include "htmlform.h"
#include <stack>

using namespace std;

  bool isOpen(char o) {
    bool rv = false;
    if (o == '(' || '{' || '[') {
      rv = true;
    }
    return rv;
  }
  /*bool isClose(char c) {

  }
  bool isMatch() {

  }*/

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
      cout << ch << " is open.<br/>";
    }
  }

  return 0;
}