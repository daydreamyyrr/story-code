#include"enemy.h"
enemy::enemy(int flag) :id(flag)
{
	switch (flag)
	{//hp100-1000 atk20-100 def20-100 money10-70 exp10-50 item0
	case 1:
		this->enemy::enemy("缢死鬼", 400, 24, 30, 30, 60, 18); break;
	case 2:
		this->enemy::enemy("水鬼", 250, 30, 40, 50, 70, 0); break;\\云中池敌人
	case 3:
		this->enemy::enemy("拘魂鬼", 300, 35, 40, 40, 60, 18); break;
	case 4:
		this->enemy::enemy("狰狞鬼", 300, 20, 45, 30, 50, 19); break;
	case 5:
		this->enemy::enemy("厉鬼", 500, 50, 40, 50, 100, 18); break;
	case 6:
		this->enemy::enemy("伥鬼", 450, 35, 35, 70, 60, 0); break;\\三风山敌人
	case 7:
		this->enemy::enemy("疟疾鬼", 700, 50, 70, 50, 150, 0); break;\\弘阳镇敌人
	case 8:
		this->enemy::enemy("王大爷（妖魔缠身）",300,30,20,50,50,18);break;\\清风镇敌人
	case 9:
		this->enemy::enemy("巫婆（炼蛊之人）",250,45,25,50,90,0);break;\\陷土沼泽敌人
	case 10:
		this->enemy::enemy("高大强壮的怪物",300,40,40,30,100,0);break;\\阴邪敌人
	case 11:
		this->enemy::enemy("骷髅",400,50,40,50,120,0);break;\\阴邪敌人
	case 12:
		this->enemy::enemy("山魈",500,55,55,100,130,0);break;\\奇龙镇敌人
	case 13:
		this->enemy::enemy("魑、魅、魍魉",600,65,50,200,200,0);break;\\迷雾森林
	case 14:
		this->enemy::enemy("饕餮",1000,70,75,300,300,0);break;\\云龙峰
	case 15:
		this->enemy::enemy("行僵",300,30,40,40,80,18);break;
	case 16:
		this->enemy::enemy("魁拔",600,50,50,80,100,18);break;
	case 17:
		this->enemy::enemy("罗刹",500,60,50,80,120,19);break;
	case 18:
		this->enemy::enemy("夔牛",800,30,60,70,100,18);break;
	case 19:
		this->enemy::enemy("穷奇",400,70,30,80,130,18);break;
	}
}
enemy::enemy(string name, int hp, int atk, int def, int money, int exp, int item) : enemy_Name(name), Hp(hp), Atk(atk), Def(def), Money_drop(money), Exp_drop(exp){}
string enemy::getname() {
	return enemy_Name;
}
void enemy::setname(string m_name) {
	enemy_Name = m_name;
}
int enemy::getHp() {
	return Hp;
}
void enemy::setHp(int m_hp) {
	Hp = m_hp;
}
int enemy::getAtk() {
	return Atk;
}
void enemy::setAtk(int m_atk) {
	Atk = m_atk;
}
int enemy::getDef() {
	return Def;
}
void enemy::setDef(int m_def) {
	Def = m_def;
}
int enemy::getmoneyNums() {
	return Money_drop;
}
void enemy::setmoneyNums(int m_money) {
	Money_drop = m_money;
}
int enemy::enemy::getexpNums() {
	return Exp_drop;
}
void enemy::setexpNums(int m_exp) {
	Exp_drop = m_exp;
}
int enemy::getitem() {
	return Items_drop;
}
void enemy::setitem(int m_item) {
	Items_drop = m_item;
}
