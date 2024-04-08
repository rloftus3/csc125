#include "jumpingletteroid.h"
#include <sys/time.h>

JumpingLetteroid::JumpingLetteroid(int rowMax, int colMax) {
    m_rowMax = rowMax;
    m_colMax = colMax;
    srand(time(0)); 
}

void JumpingLetteroid::jump() {
    erase();
    myX = rand() % rowMax;
    myY = rand() % colMax;
    draw();
}
