#ifndef _JUMPINGLETTEROID_H_
#define _JUMPINGLETTEROID_H_

#include "letteroid.h"

class JumpingLetteroid :public Letteroid {
 public:
    JumpingLetteroid(int rowMax, int colMax);
    void jump();
  
 private:
    int m_rowMax;
    int m_colMax;
  
};




#endif
