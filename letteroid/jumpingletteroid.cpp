#include "jumpingletteroid.h"
#include <sys/time.h>

void JumpingLetteroid::jump() {
    erase();
    myX = rand() % rowMax;
    myY = rand() % colMax;
    draw();
}
