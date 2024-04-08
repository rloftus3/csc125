#include <ncurses.h>
#include "letteroid.h"
#include "blinkingletteroid.h"
#include "jumpingletteroid.h"
#include "movingletteroid.h"
#include "letteroidfield.h"
#include <sys/time.h>
#include <cstdlib>

int main()
{

  srand(time(0));

  LetteroidField screen;
  screen.start();
  screen.setTitle("Rachel's super awesome big huge gigantic successful great terrfic fantastic bombdiggity. Press 'x' to quit");

  
  BlinkingLetteroid one(true);
  BlinkingLetteroid two(false);
  one.setLetter('!');
  one.setCoords(5, 60); /// 5 down, 60 across (upper right)
  two.setLetter('h');
  two.setCoords(19, 9); /// 19 down, 9 across (lower left)

  // Use the blinking letteroids to make a word:
  BlinkingLetteroid word[5];
  word[0].setLetter('H');
  word[1].setLetter('e');
  word[2].setLetter('l');
  word[3].setLetter('l');
  word[4].setLetter('o');
  word[0].setCoords(10, 38);
  word[1].setCoords(10, word[0].getCol()+1 );
  word[2].setCoords(word[1].getRow(), 40);
  word[3].setCoords(10, word[2].getCol()+1 );
  word[4].setCoords(word[3].getRow(), 42);
  
  // declare and initialize your letteroids here

  JumpingLetteroid jumper(20,80);
  jumper.setLetter('J');

  MovingLetteroid mover(20, 80, true);
  mover.setLetter('M');
  mover.setCoords(10, 1);

  MovingLetteroid shaker(20, 80, false);
  shaker.setLetter('S');
  shaker.setCoords(10, 1);

  while ( screen.waitForKeyPress() ) /// keep going until 'x' is pressed
    {
      /// individual blinking letteroids
      one.blink();
      two.blink();

      // the whole array of blinking letteroids
      for (int i=0;i<5;i++)
	      word[i].blink();
      // add any other letteroids here

      jumper.jump();

      mover.move();
      shaker.move();

    }


  screen.end();
  return 0;
}
