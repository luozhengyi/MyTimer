// MyTimer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "cTimerTest.h"
int _tmain(int argc, _TCHAR* argv[])
{
	cTimerTest* my_timer=new cTimerTest();
	Sleep(4000);
	int del_timeId=3;
	my_timer->DeletTimer(del_timeId);
	while(1)
	{
		Sleep(1000);//主线程间隔性的休眠，让定时器线程不停的跑。
	}
	return 0;
}

