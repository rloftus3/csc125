#include "movingletteroid.h"
#include <cstdlib>

MovingLetteroid::MovingLetteroid(int rowMax, int colMax, bool movesHorizontal) {
    m_rowMax = rowMax;
    m_colMax = colMax;
    m_horizontal = movesHorizontal;
}

void MovingLetteroid::move() {
    erase();
    if(m_horizontal) {
        myX = ((myX++ % m_colMax) + 1);
    }
    else {
        myY = ((myY++ % m_rowMax) + 1);
    }
    draw();
}