#include<iostream>
#include"Bag.h"
#include"skill.h"
using namespace std;

class Role:protected Bag 
{
public:
	Role(int choice);
	void Role_panel();//角色面板
	int Atk();
	int get_hit_points();
	int getLevel(int whichSkill);
	int getLevel(int whichSkill);//得到技能等级
	bool addLevel(int whichSkill);//技能升级
	int getLevelMax(int whichSkill);//得到最高等级（设置为7级）
	string skillName(int whichSkill);//得到技能名称
	string skillText(int whichSkill);//技能描述
	int getNeedMp(int whichSkill);//技能法力值消耗
	double getAddAtk(int whichSkill);//技能攻击力加成
	int getRecHp(int whichSkill);//技能回复生命
	int getBuff(int whichSkill);//技能加成防御
        void setLevel();//计算人物等级
protected:
	string name;
	int hit_points;//(生命值)
	int hit_points_new;//(当前生命值)
	int	mana;//（法力值）
	int mana_new;//当前法力值
	int	atk; //（攻击力）
	int defensive_power; //(防御力)
	const int experience_points[24] = {60,63,66,70,75,81,88,98,110,125,143,166,195,232,277,334,405,494,605,743,917,1134,1405,1744};//升级经验点数
	int experience_points_new;//（当前经验点数）
	int level;// （等级）
	int money;//（铜钱数）
	int regeneration_amount;//(重生数量）
	int strike_damage;//（撞击伤害，玩家角色的攻击给予敌人的伤害，受攻击力的影响）、
	int damage_absorption;//（伤害吸收，受到防御属性的影响）
	int id;//职业编号
	int equipment;
	int StoryFlag;//故事结点，结点到了才能触发故事。
	Skill* p;
};
