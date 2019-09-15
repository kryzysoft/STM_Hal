#ifndef STEMWIN_WINDOW_MANAGER_H
#define STEMWIN_WINDOW_MANAGER_H

#include "IWindowManager.h"
#include "WM.h"

class STemWinWindowManager: public IWindowManager
{
private:
  static void eventHandler(WM_MESSAGE * pMsg);
public:
  virtual int32_t CreateWindow(int32_t x, int32_t y, int32_t width, int32_t height);
  virtual int32_t CreateText(int32_t parent, int32_t x, int32_t y, int32_t width, int32_t height, const char *text);
  virtual int32_t CreateButton(int32_t parent, int32_t x, int32_t y, int32_t width, int32_t height, const char *text);
  virtual void Touch(int32_t x, int32_t y);
  virtual void Untouch();
  virtual void Execute();
};

#endif
