#include "frog.h"

string Frog::getImageName()
{
  switch (rand() % 3)
  {
     case 0:   return "frog1.jpeg";
     case 1:   return "frog2.jpeg";
     case 2:   return "frog3.jpeg";
     default:  return "frog.jpeg";
  }
}
