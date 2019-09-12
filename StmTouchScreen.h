#ifndef STM_TOUCH_SCREEN_H
#define STM_TOUCH_SCREEN_H

#include "IHalTouchScreen.h"

class StmTouchScreen: public IHalTouchScreen
{
  public:
  	StmTouchScreen();
    virtual TouchPosition GetTouchPosition();
    virtual bool IsTouched();
};

#endif
