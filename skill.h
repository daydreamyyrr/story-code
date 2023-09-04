#ifndef SKILL_H
#define SKILL_H


#include<iostream>
#include"enemy.h"

using namespace std;

class Skill
{
public:
	Skill();
	~Skill() {};
	virtual int getLevel(int whichSkill) = 0;//得到技能等级
	virtual bool addLevel(int whichSkill) = 0;//技能升级
	virtual int getLevelMax(int whichSkill) = 0;//得到最高等级（设置为3级）
	virtual string skillName(int whichSkill) = 0;//得到技能名称
	virtual string skillText(int whichSkill) = 0;//技能描述
	virtual int getNeedMp(int whichSkill) = 0;//技能法力值消耗
	virtual double getAddAtk(int whichSkill) = 0;//技能攻击力加成
	virtual int getRecHp(int whichSkill) = 0;//技能回复生命
	virtual int getBuff(int whichSkill) = 0;//技能加成防御
protected:
	string skill_1Name;//攻击类
	string skill_2Name;//攻击类
	string skill_3Name;//恢复类
	string skill_4Name;//加防类

	string skill_1Text;
	string skill_2Text;
	string skill_3Text;
	string skill_4Text;

	int skillLevel_1;			//在基类构造函数里初始化
	int skillLevel_2;
	int skillLevel_3;
	int skillLevel_4;

	int skillLevel_Max_1;		//每个技能的最高等级
	int skillLevel_Max_2;		//在基类构造函数里初始化
	int skillLevel_Max_3;
	int skillLevel_Max_4;

	int skill_1NeedMp;
	int skill_2NeedMp;
	int skill_3NeedMp;
	int skill_4NeedMp;

	double skill_1AddAtk;
	double skill_2AddAtk;
	double skill_3AddAtk;
	double skill_4AddAtk;

	int skill_1recoverHp;
	int skill_2recoverHp;
	int skill_3recoverHp;
	int skill_4recoverHp;

	int skill_1Buff;
	int skill_2Buff;
	int skill_3Buff;
	int skill_4Buff;

};
class Role_1Skill :public Skill
{
public:
	int getLevel(int whichSkill);//得到技能等级
	bool addLevel(int whichSkill);//技能升级
	int getLevelMax(int whichSkill);//得到最高等级（设置为7级）
	string skillName(int whichSkill);//得到技能名称
	string skillText(int whichSkill);//技能描述
	int getNeedMp(int whichSkill);//技能法力值消耗
	double getAddAtk(int whichSkill);//技能攻击力加成
	int getRecHp(int whichSkill);//技能回复生命
	int getBuff(int whichSkill);//技能加成防御
};

class Role_2Skill :public Skill
{
public:
	int getLevel(int whichSkill);//得到技能等级
	bool addLevel(int whichSkill);//技能升级
	int getLevelMax(int whichSkill);//得到最高等级（设置为7级）
	string skillName(int whichSkill);//得到技能名称
	string skillText(int whichSkill);//技能描述
	int getNeedMp(int whichSkill);//技能法力值消耗
	double getAddAtk(int whichSkill);//技能攻击力加成
	int getRecHp(int whichSkill);//技能回复生命
	int getBuff(int whichSkill);//技能加成防御
};

class Role_3Skill :public Skill
{
public:
	int getLevel(int whichSkill);//得到技能等级
	bool addLevel(int whichSkill);//技能升级
	int getLevelMax(int whichSkill);//得到最高等级（设置为7级）
	string skillName(int whichSkill);//得到技能名称
	string skillText(int whichSkill);//技能描述
	int getNeedMp(int whichSkill);//技能法力值消耗
	double getAddAtk(int whichSkill);//技能攻击力加成
	int getRecHp(int whichSkill);//技能回复生命
	int getBuff(int whichSkill);//技能加成防御
};
#endif
