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
	cout << "请添加您的名字" << endl;
	cin >> name;
	cout << "您的名字为" << name << endl;
	 hit_points = 300;//(生命值)
	 hit_points_new = 300;//(当前生命值)
		mana=100;//（法力值）
	 mana_new=100;//当前法力值
		atk=100; //（攻击力）
	 defensive_power=0; //(防御力)
	 experience_points_new = experience_points[0];//（经验点数）//（当前经验点数）
	 level =1;// （等级）
	 money=0;//（铜钱数）
	 strike_damage=0;//（撞击伤害，玩家角色的攻击给予敌人的伤害，受攻击力的影响）、
	 damage_absorption=0;//（伤害吸收，受到防御属性的影响）
	 storyflag = 0;
	 skill_point = 0;
}
void Role::Role_panel()
{
	cout << name << ' ' << "等级:" << level << "经验：" << experience_points_new << '/' << experience_points[level-1] << endl;
	cout << "生命值:" << hit_points_new << '/' << hit_points;
	cout << "攻击力:" << atk <<"法力值"<< mana_new<<'/'<<mana << "   防御力:" << defensive_power << endl;
}
int Role::getstoryflag() { return storyflag; }
int Role::Def() { return defensive_power; }
int Role::Atk() { return atk; }
int Role::MP() { return mana; }
int Role::getMP_new() { return mana_new; }
void Role::setmana(int ne) { mana_new = ne; }
int Role::get_hit_points() { return hit_points; }
int Role::getgoods_amount(int i) { return  Bag::amount[i]; }
int Role::getLevel(int whichSkill) { return p->addLevel(whichSkill); }
bool Role::addLevel(int whichSkill) { return p->addLevel(whichSkill); }//技能升级
int Role::getLevelMax(int whichSkill) { return p->getLevelMax(whichSkill); }//得到最高等级（设置为6级）
void Role::skillName(int whichSkill) { p->skillName(whichSkill); }//得到技能名称
void Role::skillText(int whichSkill) { p->skillText(whichSkill); }//技能描述
int Role::getNeedMp(int whichSkill) { return p->getNeedMp(whichSkill); }//技能法力值消耗
double Role::getAddAtk(int whichSkill) { return p->getAddAtk(whichSkill); }//技能攻击力加成
int Role::getRecHp(int whichSkill) { return p->getRecHp(whichSkill); }//技能回复生命
int Role::getBuff(int whichSkill) { return p->getBuff(whichSkill); }//技能加成防御
void Role::setStoryflag() { storyflag++; }
int Role::setmoney(int mon) { money += mon; return mon; }
int* Role::getequipment() { return equipment; }
int Role::getmoney() { return money; }
void Role::seteuip(int i) { if (i <= 8)equipment[0] = i; else equipment[1] = i; }
void Role::sethp(int i) { hit_points_new = i; }
int Role::setexp(int i) { experience_points_new += i; setLevel(); return i; }
int Role::setamount(int i, int change) { amount[i] += change; return i; }
int Role::get_hit_points_new() { return hit_points_new; }
void Role::skill()
{
	cout << "你目前的技能有" << endl;
	cout << p->getLevel(1) << "/6"; p->skillName(1);
	cout << ' ', p->skillText(1), cout<< endl;
	cout << p->getLevel(2) << "/6"; p->skillName(2);
	cout << ' ', p->skillText(2), cout << endl;
	cout << p->getLevel(3) << "/6"; p->skillName(3);
	cout << ' ', p->skillText(3), cout << endl;
	cout << p->getLevel(4) << "/6"; p->skillName(4);
	cout << ' ', p->skillText(4), cout << endl;
	cout << "你目前的技能点数为" << skill_point;
	if (skill_point)
	{
		cout << "你想升级技能吗？(Y/N)";
		char t;
		bool flag =false;
		while(!flag)
		{
			cin >> t;
			flag = isInputValid();
			if (flag)//输入没问题再继续判断
			{
				flag = false;
				if (t == 'Y')flag = true;
				else if (t == 'N')return;
				else cout << "输入错误，请重新输入" << endl;
			}
			else
			{
				cout << "输入错误，请重新输入" << endl;
			}
		}
		cout << "请选择你要升级的技能(技能一到四，输入编号即可)" << endl;
		int k;
		flag = false;
		while (!flag)
		{
			cin >> k;
			flag = isInputValid();
			if (flag)//输入没问题再继续判断
			{
				flag = false;
				if (k <= 4 && k >= 1)
				{
					flag =addLevel(k);
					if (flag == true)skill_point--;
					return;
				}
				else cout << "输入错误，请重新输入" << endl;
			}
			else cout << "输入错误，请重新输入" << endl;
		}
	}
		
	
}
void Role::getbuff(int i)
{
	if (hit_points_new + goods[i].get_here() > hit_points)hit_points_new = hit_points;
	else hit_points_new += goods[i].get_here();
	if (mana_new + goods[i].get_mpre() > mana)mana_new = mana;
	else mana_new += goods[i].get_mpre();
	if (defensive_power + goods[i].get_defense() > 200)defensive_power = 200;
	else defensive_power += goods[i].get_defense();
}
void Role::getdebuff(int i,int* ak, int* defe, int* en_hit_new)
{
	*ak += goods[i].get_Power_up();
	*defe -= goods[i].get_defense_reduce();
	if (*defe < 0)defe = 0;
	en_hit_new -= goods[i].get_harm();
}
void Role::equip()
{
	Lookbag(getequipment());
	cout << "你目前拥有的武器有:" << endl;
	for (int i = 0; i <= 8; i++)
	{
		if (amount[i])
		{
			cout <<i<< goods[i].getname() <<' '<< goods[i].getintrodcue() << endl;
		}
	}
	cout << "防具有:" << endl;
	for (int i = 9; i <= 14; i++)
	{
		if (amount[i])
		{
			cout <<i<< goods[i].getname() << goods[i].getintrodcue() << endl;
		}
	}
	cout << "道具有" << endl;
	for (int i = 15; i <= 21; i++)
	{
		if (amount[i])
		{
			cout << i << goods[i].getname() << goods[i].getintrodcue() << endl;
		}
	}
	cout << "你要更换武器或者防具吗或者使用道具吗" << endl;
	cout << "-1退出，要使用相应的物品则输入编号即可" << endl;
	bool flag = false;
	int k = 0;
	while (!flag)
	{
		cin >> k;
		flag = isInputValid();
		if (flag)//输入没问题再继续判断
		{
			flag = false;
			if (k == -1)return;
			if (k <= 13 && k >= 0)
			{
				if (amount[k])//有装备
				{
					flag = true;
					seteuip(k);
				}
				else cout << "你还没有这个装备" << endl;
			}
			else if (k <= 19)
			{
				cout << "这个道具只能在战斗时用" << endl;
				flag = true;
			}
			else if(k <= 21)
			{
				getbuff(k);
				setamount(k, -1);
				flag = true;
			}
			else cout << "输入错误，请重新输入" << endl;
		}
		else
		{
			cout << "输入错误，请重新输入" << endl;
		}
	}
}
void Role::setLevel()
{
	while (experience_points_new >= experience_points[level - 1])
	{
		experience_points_new -= experience_points[level - 1];
		level++;
		skill_point++;
	}
}
