#include"fight.h"
Fight::Fight(Role& role, int enem,int i)
{
	enemy en(enem);
	bool flag = Combat_condition(role, en,i);
}
bool Fight::Combat_condition(Role& role, enemy& en,bool run)
{
	int def = role.Def();
	int mp = role.getMP_new(); // 获得当前法力值
	int* eq = role.getequipment();
	int t = 0;
	if(eq[0]!=-1)t = goods[eq[0]].get_harm();//获取装备攻击力
	int ak = (role.Atk() +t) * (1 - en.getDef() * 0.005);//普通攻击为角色攻击力加武器攻击力的和乘防御系数
	int enak = en.getAtk() * (1 - role.Def() * 0.005);//怪物攻击力
	int en_hp_new = en.getHp();//怪物当前生命值
	int ro_hp_new = role.get_hit_points_new();//角色当前生命值
	int hit_points = role.get_hit_points();//角色最大生命值
	int ma_max = role.MP();
	int endef = en.getDef();
	int flag = 0;
	bool tempflag = false;//判断物品能不能用
	int k = 0;//选择物品使用时的参量
	bool whether = false;//判断角色是否做出行动
	do
	{
		whether = false;
		en.setHp(en_hp_new), role.setmana(mp),role.sethp(ro_hp_new);
		en.enemy_panel(), role.Role_panel();//面板
		cout << "发动栏:1.普通攻击  2.技能1  3.技能2  4.技能3  5技能四  6使用物品  7逃跑" << endl;
		cin >> flag;
		switch (flag)
		{
		case 1: cout << "你对怪物进行了普通攻击,造成伤害" << ak << endl;
			en_hp_new -= ak;
			whether = true;
			break;
		case 2:if (mp >= role.getNeedMp(1))
		{
			cout << "你对怪物发动了技能一" << endl;
			role.skillName(1);
			whether = true;
			mp -= role.getNeedMp(1);
			en_hp_new -= ak * role.getAddAtk(1);
			cout << "造成伤害" << ak * role.getAddAtk(1);
		}
			  else	cout << "你的法力值不够，不能发动技能" << endl;
			break;
		case 3:
			if (mp >= role.getNeedMp(2))
			{
				whether = true;
				cout << "你对怪物发动了技能二" << endl;
				role.skillName(2);
				int t = ak * role.getAddAtk(2);
				cout << "造成伤害" << t << endl;
				en_hp_new -= t;
				mp -= role.getNeedMp(3);
			}
			else cout << "你没有足够的法力值施展技能" << endl;
			break;
		case 4:
			if (mp >= role.getNeedMp(3))
			{
				cout << "你发动了技能三" << endl;
				role.skillName(3);
				int t = role.getRecHp(3);
				cout << "恢复生命" << t << endl;
				if (ro_hp_new + t >= hit_points)ro_hp_new = hit_points;
				else ro_hp_new += t;
				mp -= role.getNeedMp(3);
			}
			else cout << "你没有足够的法力值施展技能" << endl;
			break;
		case 5:
			if (mp >= role.getNeedMp(4))
			{
				cout << "你对怪物发动了技能四" << endl;
				role.skillName(4);
				cout << "增加防御" << role.getBuff(4) << endl;
				def += role.getBuff(4);
				mp -= role.getNeedMp(4);
				whether = true;
			}
			else cout << "你没有足够的法力值施展技能" << endl;
			break;
		case 6:
			cout << "请问你要使用什么物品" << endl;
			for (int i = 15; i <= 21; i++)
			{
				cout << goods[i].getname() << " 拥有数量" << role.getgoods_amount(i) << endl;
				cout << goods[i].getintrodcue() << endl;
			}
			cin >> k;
			tempflag = isInputValid();
			if (tempflag)
				if (k >= 15 && k <= 21)
				{
					cout << "你选择了" << goods[k].getname() << endl;
					if (role.getgoods_amount(k))
					{
						cout << "效果" << endl;
						role.getbuff(k);//给人物的加成
						role.getdebuff(k, &ak, &endef, &en_hp_new);
						//记得加效果
						whether = true;
					}
					else cout << "没有此物品" << endl;
				}
				else cout << "你选择错误" << endl;
			break;
		case 7:
			if (run)
			{
				cout << "由于处于主线剧情中。您不能逃跑!" << endl;
				continue;
			}
			cout << "你选择了逃跑" << endl;
			return false;
		default:cout << "选择错误，请重新选择" << endl;
		}
		if (whether)
			if (en_hp_new <= 0)
			{
				cout << en.getname() << "已经被您击败," << "您获得了" << endl;
				//获得的东西还没写，记得写;
				cout<<"铜币:"<<role.setmoney(en.getmoneyNums())<<' ';
				cout << "经验:" <<  role.setexp(en.getexpNums())<<' ';
				cout << "物品:"; role.Look(role.setamount(en.getdrop(), 1));
				return true;
			}
			else if (ro_hp_new > enak)
			{
				cout << "怪物对你造成了" << enak << "伤害" << endl;
				ro_hp_new -= enak;
			}
			else
			{
				cout << "很遗憾，你的战斗永远的结束了，世界陷入了妖魔的手中" << endl;
				exit(0);
			}
	} while (flag != 0 && en_hp_new > 0);

}
bool Fight::endbattle()
{
	return true;
}
bool Fight::runaway()
{
	return true;
}
int Fight::monster_attack()
{
	return true;
}
bool Fight::death()
{
	return true;
}
