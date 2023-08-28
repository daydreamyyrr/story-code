#include<iostream>
using namespace std;

class Role
{
public:
	Role(int choice) :flag(choice)
	{
		if (choice == 1)
		{
			cout << "你选择成为了出马弟子" << endl;

		}
		else if (choice == 2)
		{
			cout << "你选择成为了茅山道士" << endl;
		}
		else if (choice == 3)
		{
			cout << "你选择成为了赶尸人" << endl;
		}
	}
private:
	int hit_points;//(生命值)
	int	mana;//（法力值）
	int	atk; //（攻击力）
	int defensive_power; //(防御力)
	double agility; //（敏捷）、
	double accuracy;//（准确度）
	int experience_points;//（经验点数）
	int level;// （等级）
	int money;//（铜钱数）、
	int regeneration_amount;//(重生数量）
	int strike_damage;//（撞击伤害，玩家角色的攻击给予敌人的伤害，受攻击力的影响）、
	int damage_absorption;//（伤害吸收，受到防御属性的影响）
	int flag;//职业编号
	Bag bag;
};
