#include"enemy.h"
enemy::enemy(int flag) :id(flag)
{
	set(flag);
}
void enemy::set(int id)
{
	switch (id)
	{//hp100-1000 atk20-100 def20-100 money10-70 exp10-50 item0
	case 1:setenemy("缢死鬼", 400, 24, 30, 15, 20, 20); break;

	case 2:setenemy("狰狞鬼", 300, 20, 45, 15, 15, 20); break;

	case 3:setenemy("拘魂鬼", 300, 35, 40, 40, 30, 20); break;

	case 4:setenemy("厉鬼", 500, 50, 40, 40, 40, 20); break;
	case 5:setenemy("行僵", 300, 30, 40, 40, 80, 20); break;
	case 6:setenemy("魁拔", 600, 50, 50, 80, 100, 20); break;
	case 7:setenemy("罗刹", 500, 60, 50, 80, 120, 20); break;
	case 8:setenemy("夔牛", 800, 30, 60, 70, 100, 20); break;
	case 9:setenemy("穷奇", 400, 70, 30, 80, 130, 20); break;
	case 19:setenemy("王大爷（妖魔缠身）", 300, 30, 20, 50, 20, 20); break;//清风镇敌人1	
	case 10:setenemy("水鬼", 250, 20, 40, 20, 20, 9); break;//云中池3
	case 11:setenemy("巫婆（炼蛊之人）", 250, 45, 25, 50, 25, 16); break; //陷土沼泽敌人4
		
	case 12:setenemy("高大强壮的怪物", 300, 35, 40, 30, 20, 18); break; //阴邪敌人5
		
	case 13:setenemy("疟疾鬼", 700, 60, 70, 70, 45, 17); break;//弘阳镇6
		
	case 14:setenemy("山魈", 500, 50, 55, 100, 60, 0); break; //奇龙镇敌人7
		
	case 15:setenemy("魑、魅、魍魉", 200, 50, 50, 200, 60, 17); break; //迷雾森林8
		
	case 16:setenemy("饕餮", 1000, 70, 75, 1000, 100, 13); break; //云龙峰

	case 17:setenemy("骷髅", 400, 40, 40, 50, 40, 18); break; //阴邪敌人5
		
	case 18:setenemy("伥鬼", 450, 35, 35, 35, 25, 17); break;//三凤山2
	}
}
void enemy::setenemy(string name, int hp, int atk, int def, int money, int exp, int item) 
{ 
	Hp_new = Hp; 
	enemy_Name = name;
	Hp = hp;
	Atk = atk;
	Def = def;
	Money_drop = money;
	Exp_drop = exp;
	Items_drop = item;
}
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
void enemy::enemy_panel()
{
	cout << enemy_Name << "  生命值：" << Hp << "  攻击力:" << Atk << " 防御力:" << Def << endl;
}
int enemy::getdrop() { return Items_drop; }
void enemy::defdebuff(int de) { Def = de; }
