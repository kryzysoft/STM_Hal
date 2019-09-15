#include "STemWinWindowManager.h"
#include "strings.h"
#include "dialog.h"


int32_t STemWinWindowManager::CreateWindow(int32_t x, int32_t y, int32_t width, int32_t height)
{
  return WINDOW_CreateEx(x,y,width,height,0,WM_CF_SHOW,0,GUI_ID_USER,&eventHandler);
}

int32_t STemWinWindowManager::CreateText(int32_t parent, int32_t x, int32_t y, int32_t width, int32_t height, const char *text)
{
  return TEXT_CreateEx(x,y,width,height,parent,WM_CF_SHOW,TEXT_CF_HCENTER|TEXT_CF_VCENTER,GUI_ID_TEXT0,text);
}

void STemWinWindowManager::Execute()
{
//  WM_Exec();
  GUI_Exec();
  GUI_Delay(1);
}

int32_t STemWinWindowManager::CreateButton(int32_t parent, int32_t x, int32_t y, int32_t width, int32_t height, const char *text)
{
  BUTTON_Handle hButton = BUTTON_CreateEx(x, y, width, height, parent, WM_CF_SHOW, 0, GUI_ID_BUTTON0);
  BUTTON_SetText(hButton, text);
  return hButton;
}

void STemWinWindowManager::Touch(int32_t x, int32_t y)
{
  GUI_TOUCH_StoreState(x, y);
}

void STemWinWindowManager::Untouch()
{
  GUI_TOUCH_StoreState(-1, -1);
}

void STemWinWindowManager::eventHandler(WM_MESSAGE * pMsg)
{
  WM_DefaultProc(pMsg);
}


