#include"enemy.h"
enemy::enemy(int flag) {
	switch (flag)
	{//hp100-1000 atk20-100 def20-100 money10-70 exp10-50 item0
	case 1:
		enemy("缢死鬼", 400, 24, 30, 15, 20, 0); break;
	case 2:
		enemy("水鬼", 250, 20, 40, 20, 20, 0); break;
	case 3:
		enemy("拘魂鬼", 300, 35, 40, 40, 30, 0); break;
	case 4:
		enemy("狰狞鬼", 300, 20, 45, 15, 15, 0); break;
	case 5:
		enemy("厉鬼", 500, 50, 40, 40, 40, 0); break;
	case 6:
		enemy("伥鬼", 450, 35, 35, 35, 25, 0); break;
	case 7:
		enemy("疟疾鬼", 700, 60, 70, 70, 45, 0); break;
	}
}
string enemy::getname(){
  return enemy_Name;
}
void enemy::setname(string m_name){
  enemy_Name=m_name;
}
int enmey::getHp(){
  return Hp;
}
void enemy::setHp(int m_hp){
  Hp=m_hp;
}
int enemy::getAtk(){
  return Atk;
}
void enemy::setAtk(int m_atk){
  Atk=m_atk;
}
int enemy::getDef(){
  return Def;
}
void enemy::setDef(int m_def){
  Def=m_def;
}
int enemy::getmoneyNums(){
  return Money_drop
}
void enemy::setmoneyNums(int m_money){
  Money_drop=m_money;
}
int enemy::enemy::getexpNums(){
  return Exp_drop;
}
void enemy::setexpNums(int m_exp){
  Exp_drop=m_exp;
}
int enemy::getitem(){
  return Item_drop;
}
void enemy::setitem(int m_item){
  Item_drop=m_item;
}
