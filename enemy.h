#include<iostream>
#include<cstring>
using namespace std;
class enemy
{
public:
	enemy(int flag);
	string getname();//获得名字
	void set(int id);
	void setenemy(string name, int hp, int atk, int def, int money, int exp, int item);
	void setname(string m_name);//修改名字
	int getHp();
	void setHp(int m_hp);
	int getAtk();
	void setAtk(int m_atk);
	int getDef();
	void setDef(int m_stk);
	int getmoneyNums();//获得掉落金钱数目
	void setmoneyNums(int m_money);//修改掉落金钱数目
	int getexpNums();
	void setexpNums(int m_exp);
	int getitem();
	void setitem(int m_item);
	void enemy_panel();
	int getdrop();
	void defdebuff(int);
private:
	string enemy_Name;//敌人名字
	int Hp;//血量
	int Hp_new;
	int Atk;//攻击力
	int Def;//防御力
	int Money_drop;//击败掉落金钱
	int Exp_drop;//掉落经验
	int Items_drop;//掉落物品
	int id;//怪物编号
};
