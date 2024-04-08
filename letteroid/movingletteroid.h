#ifndef _MOVINGLETTEROID_H_
#define _MOVINGLETTEROID_H_

#include "letteroid.h"

class MovingLetteroid :public Letteroid {
 public:
    MovingLetteroid(int rowMax, int colMax, bool movesHorizontal);
    void move();
  
 private:
    int m_rowMax;
    int m_colMax;
    bool m_horizontal;
  
};




#endif
