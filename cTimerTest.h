#pragma once
#include "cMyTimer.h"

class cTimerTest:public cMyTimer
{
public:
	cTimerTest();
	virtual ~cTimerTest();
public:
	virtual unsigned OnTimer(unsigned timerID,int iParam,string strParam);
};