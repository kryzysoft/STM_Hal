#include "StmTouchScreen.h"
#include "stm32746g_discovery_ts.h"

StmTouchScreen::StmTouchScreen()
{
	BSP_TS_Init(480,272);
}

TouchPosition StmTouchScreen::GetTouchPosition()
{
	TouchPosition tp;
	tp.x = 0;
	tp.y = 0;
	return tp;
}

bool StmTouchScreen::IsTouched()
{
	TS_StateTypeDef ts;

	BSP_TS_GetState(&ts);
	if(ts.touchDetected>0) return true;
	else return false;
}
