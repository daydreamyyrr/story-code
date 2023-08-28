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
  int getmoney(){}
  void setmoney(int m_money){}
  int getexp(){}
  void setexp(int m_exp){}
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
void enemy::setHp(m_hp){
  Hp=m_hp;
}
