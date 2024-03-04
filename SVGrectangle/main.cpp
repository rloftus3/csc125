#include <iostream>
#include <sstream>
#include "SVGrectangle.h"

using namespace std;

int main()
{
   cout << "Content-type: text/html" << endl << endl;
   
   SVGrectangle redtangle("200", "150", "300", "100", "255", "0", "0");
   SVGrectangle greentangle("800", "100", "300", "100", "0", "255", "0");
   SVGrectangle bluetangle("0", "0", "300", "100", "0", "0", "255");

   // start the svg canvas
   cout << "<svg width='1000' height='400'>" << endl;

   redtangle.printHTML();
   greentangle.printHTML();
   bluetangle.printHTML();

   // end the svg canvas
   cout << "</svg>" << endl;

   return 0;
}
   
