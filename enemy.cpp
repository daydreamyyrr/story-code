#include"enemy.h"
enemy::enemy(int flag){
  switch(flag){
    case 1:enemy()


  
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
