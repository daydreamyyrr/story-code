#include<cstring>
#include"store.h"
#include<Windows.h>
using namespace std;
bool isInputValid();
class Good
{
public:
	Good(int i);
	string getname();
	string getintrodcue();
	int get_here();
	int get_mpre();
	int get_defense();
	int get_defense_reduce();
	int get_harm();
	int get_Power_up();
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
class Bag :public store
{
public:
	Bag();
	void Lookbag(const int* p);//查看角色装备情况
	int Lookstore(int);//查看商店
	void Look(int);//查看单件装备
protected:
	Good goods[22] = { 0, 1, 2, 3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21 };
	int id_new;//正在装备的武器id
	int amount[22] = { 0 };//背包容量
};

