#include <iostream>
#include "htmlform.h"
#include <stack>

using namespace std;

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
  int i = -1;
  while(i < inputText::npos) {
    i++;
    cout << inputText[i];
  }

  return 0;
}