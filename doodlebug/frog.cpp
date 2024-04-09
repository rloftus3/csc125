#include "frog.h"

string Frog::getImageName()
{
  switch (rand() % 3)
  {
     case 0:   return "frog1.jpg";
     case 1:   return "frog2.jpg";
     case 2:   return "frog3.jpg";
     default:  return "frog.jpg";
  }
}
