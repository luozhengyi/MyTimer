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
		Sleep(1000);//���̼߳���Ե����ߣ��ö�ʱ���̲߳�ͣ���ܡ�
	}
	return 0;
}

