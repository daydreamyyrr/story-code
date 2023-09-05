#include"enemy.h"
enemy::enemy(int flag) :id(flag)
{
	switch (flag)
	{//hp100-1000 atk20-100 def20-100 money10-70 exp10-50 item0
	case 1:
		this->enemy::enemy("缢死鬼", 400, 24, 30, 15, 80, 0); break;
	case 2:
		this->enemy::enemy("水鬼", 250, 20, 40, 20, 20, 0); break;
	case 3:
		this->enemy::enemy("拘魂鬼", 300, 35, 40, 40, 30, 0); break;
	case 4:
		this->enemy::enemy("狰狞鬼", 300, 20, 45, 15, 15, 0); break;
	case 5:
		this->enemy::enemy("厉鬼", 500, 50, 40, 40, 40, 0); break;
	case 6:
		this->enemy::enemy("伥鬼", 450, 35, 35, 35, 25, 0); break;
	case 7:
		this->enemy::enemy("疟疾鬼", 700, 60, 70, 70, 45, 0); break;
	case 8:
		this->enemy::enemy("僵尸", 1000, 40 ,40 ,30 , 50 ,0);break;
	case 9:
		this->enemy::enemy("丧失",800,60,30,50,60,0);break;
	case 10:
		
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
