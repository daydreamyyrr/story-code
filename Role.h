#include"Bag.h"
#include"skill.h"
using namespace std;

class Role :public Bag
{
public:
	Role(int choice);
	void Role_panel();//角色面板
	int* getequipment();
	int Atk();
	int Def();
	int MP();
	int getMP_new();
	void setmana(int);
	int get_hit_points();int get_hit_points_new();
	int getgoods_amount(int);
	int getLevel(int whichSkill);//得到技能等级
	bool addLevel(int whichSkill);//技能升级
	int getLevelMax(int whichSkill);//得到最高等级（设置为7级）
	void skillName(int whichSkill);//得到技能名称
	void skillText(int whichSkill);//技能描述
	int getNeedMp(int whichSkill);//技能法力值消耗
	double getAddAtk(int whichSkill);//技能攻击力加成
	int getRecHp(int whichSkill);//技能回复生命
	int getBuff(int whichSkill);//技能加成防御
	int getstoryflag();
	void setStoryflag();
	int setmoney(int mon);
	int getmoney();//获得角色当前的金钱
	void equip();//装备情况
	void seteuip(int);//装备上装备
	void sethp(int);
	int setexp(int);
	int setamount(int,int);//获得道具时改变
	void setLevel();//升级用
	void getbuff(int i);
	void getdebuff(int i,int* ak,int* defe, int* en_hit_new);//给怪物上debuff
	void skill();//与技能相关的操作
protected:
	string name;
	int hit_points;//(生命值)
	int hit_points_new;//(当前生命值)
	int	mana;//（法力值）
	int mana_new;//当前法力值
	int	atk; //（攻击力）
	int defensive_power; //(防御力)
	int experience_points_new;//（当前经验点数）
	int level;// （等级）
	int money;//（铜钱数）
	int strike_damage;//（撞击伤害，玩家角色的攻击给予敌人的伤害，受攻击力的影响）、
	int damage_absorption;//（伤害吸收，受到防御属性的影响）
	int id;//职业编号
	int equipment[2] = { -1,- 1 };//装备
	int experience_points[24] = { 60,63,66,70,75,81,88,98,110,125,143,166,195,232,277,334,405,494,605,743,917,1134,1405,1744 };//升级经验点数
	Skill* p;
	int skill_point;
	int storyflag;
};
