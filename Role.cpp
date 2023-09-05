#include"Role.h"
Role::Role(int choice) :id(choice)
{
	if (choice == 1)
	{
		cout << "你选择成为了出马弟子" << endl;
		p = new Role_1Skill;
	}
	else if (choice == 2)
	{
		cout << "你选择成为了茅山道士" << endl;
		p = new Role_2Skill;
	}
	else if (choice == 3)
	{
		cout << "你选择成为了赶尸人" << endl;
		p = new Role_3Skill;
	}
}
void Role::Role_panel()
{
	cout << name << ' ' <<"等级:"<<level<< "经验：" << experience_points_new << '/' << experience_points << endl;
	cout <<"生命值:"<< hit_points_new << '/' << hit_points;
	cout << "攻击力:" << atk << "   防御力:" << defensive_power << " 敏捷度:" << agility << endl;
}
int Role::Atk() { return atk; }
int Role::get_hit_points() { return hit_points; }
int Role::getLevel(int whichSkill) { return p->addLevel(whichSkill); }
bool Role::addLevel(int whichSkill) { return p->addLevel(whichSkill); }//技能升级
int Role::getLevelMax(int whichSkill) { return p->getLevelMax(whichSkill); }//得到最高等级（设置为7级）
string Role::skillName(int whichSkill) { return p->skillName(whichSkill); }//得到技能名称
string Role::skillText(int whichSkill) { return p->skillText(whichSkill); }//技能描述
int Role::getNeedMp(int whichSkill) { return p->getNeedMp(whichSkill); }//技能法力值消耗
double Role::getAddAtk(int whichSkill) { return p->getAddAtk(whichSkill); }//技能攻击力加成
int Role::getRecHp(int whichSkill) { return p->getRecHp(whichSkill); }//技能回复生命
int Role::getBuff(int whichSkill) { return p->getBuff(whichSkill); }//技能加成防御
