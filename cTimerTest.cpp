#include "stdafx.h"
#include "cTimerTest.h"

cTimerTest::cTimerTest()
{
	AddTimer(1,1000);						//timerID=1;timeElapse=1000ms;
	AddTimer(2,2000);						//timerID=2;timeElapse=2000ms;
	AddTimer(3,3000);						//timerID=3;timeElapse=3000ms;
	AddTimer(4,4000,4,"this is timer 4");	//timerID=3;timeElapse=4000ms;
}
cTimerTest::~cTimerTest()
{

}
unsigned cTimerTest::OnTimer(unsigned timerID,int iParam=0,string strParam="")
{
	switch(timerID)
	{
	case 1:
		std::cout<<"timeID="<<timerID<<endl;
		break;
	case 2:
		std::cout<<"timeID="<<timerID<<endl;
		return 0;
		break;
	case 3:
		std::cout<<"timeID="<<timerID<<endl;
		break;
	case 4:
		std::cout<<"timeID="<<iParam<<strParam.c_str()<<endl;
		return 3000;		//将4号定时器间隔改为3000ms
		break;
	default:
		break;
	}
	return 1;	//如果返回0的话表示执行完后本次后销毁改定时器
}
