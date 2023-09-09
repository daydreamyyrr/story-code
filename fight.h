#include"Role.h"
#include"enemy.h"
class Fight
{
public:
	Fight(Role& role,int enem,int);//传的是角色和怪物的编号还有就是能不能逃跑的问题
	bool Combat_condition(Role& role, enemy& en,bool);//战斗界面,bool决定其能不能逃跑
	bool endbattle();//战斗结束
	bool runaway();//逃跑
	int monster_attack();//怪物攻击
	bool death();//角色死亡，退出
private:
	Good goods[22] = { 0, 1, 2, 3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21 };
};
