#include<iostream>
#include<cstring>
using namespace std;

class Good
{
public:
	Good(int i);
private:
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
class Bag
{
public:
	Bag();
private:
	Good goods[22]={ 0, 1, 2, 3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21 };;
	int amount[30] = {450,300,500,450,500,400,250,350,400,100,200,350,500,700,30,80,20,20,120,100,30,30};
};
