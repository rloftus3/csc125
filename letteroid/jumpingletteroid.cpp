#include "jumpingletteroid.h"
#include <cstdlib>

JumpingLetteroid::JumpingLetteroid(int rowMax, int colMax) {
    m_rowMax = rowMax;
    m_colMax = colMax;
}

void JumpingLetteroid::jump() {
    erase();
    myX = rand() % rowMax;
    myY = rand() % colMax;
    draw();
}
