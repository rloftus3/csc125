#ifndef _LETTEROID_H_
#define _LETTEROID_H_

/*
version 2: added getRow() and getCol() since getX() and getY() are incorrect

-Ken Urban
*/
#include <curses.h>

class Letteroid
{

 public:

  void setCoords(int, int);// set the position(down, across) 
  void setLetter(char);    // set the character

  // these two functions are reversed and need fixed/removed during break - ken
  int getX();              // get the position down [broken - ken]
  int getY();              // get the position across [broken - ken]

  // replacements 
  int getRow();    // get the number of rows from the top
  int getCol();    // get the number of columns from the left

  void erase();            // erase the letteroid from the screen
  void draw();             // draw the letteroid to the screen  
  
 private:
  // These should be better named (during break) as m_Row & m_Col - ken
  int myX;
  int myY;
  char myLetter;

};

#endif
