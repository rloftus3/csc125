#include <iostream>
#include <sstream>
#include "SVGrectangle.h"

using namespace std;

int main()
{
   cout << "Content-type: text/html" << endl << endl;
   
   SVGrectangle redtangle("0", "0", "300", "100", "255", "0", "0");
   


   // start the svg canvas
   cout << "<svg width='1000' height='400'>" << endl;

   redtangle.printHTML();

   // end the svg canvas
   cout << "</svg>" << endl;

   return 0;
}
   
