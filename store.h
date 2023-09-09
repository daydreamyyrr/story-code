#include<iostream>
using namespace std;
class store
{
public: int get_needmoney(int);//获取需要的价钱
protected:
	int needmoney[22] = { 450,300,500,450,500,400,250,350,400,100,200,350,500,700,30,80,20,20,120,100,30,30 };
	bool st[22] = { 0 };
};
