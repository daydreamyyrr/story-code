#include<iostream>
#include<cstring>
#include"store.h"
using namespace std;

class Good
{
public:
	Good(int i);
	string Getname();
protected:
	string name;//名字
	string introduce;
	int id;//编号
	int HpRegen;//回血
	int MpRegen;//回法
	int Defense;//加防御
	int Defense_reduce;//敌人减防御
	int harm;//直接伤害
	int Power_up;//伤害提升
};
class Bag :protected store
{
public:
	Bag();
	bool purchase(int id);//购买

private:
	Good goods[22] = { 0, 1, 2, 3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21 };;
	int amount[22] = { 0 };
};
