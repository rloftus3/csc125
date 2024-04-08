#include "jumpingletteroid.h"

void JumpingLetteroid::jump() {
    erase();
    myX = rand() % rowMax;
    myY = rand() % colMax;
    draw();
}
