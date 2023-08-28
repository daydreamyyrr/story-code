#include"enemy.h"
class enemy(){
  public:
  enemy(char name,int hp,int atk,int def,int money,int exp,int item):enemy_Name(name),Hp(hp),Atk(atk),Def(def),Money_drop(money),Exp_drop(exp){}
  string getname(){}
  void setname(string m_name){}
  int getHp(){}
  void setHp(int m_hp){}
  int getAtk(){}
  void setAtk(int m_atk){}
  int getDef(){}
  void setDef(int m_stk){}
  int getmoneyNums(){}
  void setmoneyNums(int m_money){}
  int getexpNums(){}
  void setexpNums(int m_exp){}
  int getitem(){}
  void setitem(int m_item){}
  private:
  string enemy_Name;
  int Hp;
  int Atk;
  int Def;
  int Money_drop;
  int Exp_drop;
  int Items_drop;
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
