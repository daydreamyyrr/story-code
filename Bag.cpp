#include"Bag.h"
bool isInputValid() //检测数据类型是否输入错误
{
	if (std::cin.fail()) { // 检查输入是否失败
		std::cin.clear(); // 清除错误状态标记
		cin.ignore(1024, '\n'); // 忽略缓冲区中的无效字符
		return false; // 输入无效
	}
	return true; // 输入有效
}
void Bag::Look(int i)
{
	cout << goods[i].getname() <<' ' << goods[i].getintrodcue() << endl;
}
/*装备：
1.铜钱剑：由108枚铜钱穿好加上法力加成所炼成的法器，在除妖伏魔方面有着极大的威力（攻击加成80）450铜钱
2.桃木剑：茅山道士常用的剑，能够辟邪，杀僵尸，日常的防身武器（攻击加成65）300铜钱
3.七星剑：能发挥出七种不同属性的法器，斩妖除魔、辟邪驱鬼（攻击加成50，防御加成30）500铜钱
4.金刚杵：一件能破除万物的法器，打破一切魔障（攻击加成60，防御加成10）450铜钱
5.混沌钟：出马仙的强力法器，极大地提高了防御能力（攻击加成20，防御加成60）500铜钱
6.黄铜镜：道士随身携带的法器，可照出世间一切鬼怪（攻击加成10，防御加成10，减少怪物40点防御）400铜钱
7.赶尸鞭：赶尸四大法器之一，操控僵尸的必备法器，镇邪辟灾（攻击加成50）250铜钱
8.摄魂铃：赶尸四大法器之一，震慑鬼怪神魄，可以有效控制鬼怪（攻击加成10，减少怪物50点防御）350铜钱
9.引魂锣：赶尸四大法器之一，招引魂魄，扰乱鬼怪行动（攻击加成40，减少怪物30点防御）400铜钱
10.白色道袍：初级道士常用服装，可增强法力和防御（法力加成10，防御加成10）100铜钱
11.黄色道袍：二级道袍，代表更高的修为（法力加成20，防御加成20）200铜钱
12.红色道袍：三级道袍，法力和修为达到了一定境界（法力加成40，防御加成30）350铜钱
13.紫色道袍：四级道袍，代表有着高超的道法和修行功夫（法力加成70，防御加成40）500铜钱
14.金色道袍：最高级道袍，超凡人物穿戴的服饰，法力和修为已入无人之境（法力加成100，防御加成60）700铜钱
道具：
15.黄符：威力不大，茅山道士必备法器，(直接造成30点伤害, 对怪物伤害提高20）30铜钱
	16.墨斗线：通过鸡血和墨汁调制，控制住僵尸（减少僵尸50点防御）80铜钱
	17.糯米：家中很普通的糯米，对僵尸却是很好的道具（对怪物造成20点伤害，减少怪物20点防御）20铜钱
	18.招魂幡：赶尸四大法器之一，用以镇魂的符(减少怪物30点防御)20铜钱
	19.五毒粉：由五种剧毒混合制成，极具攻击性(对怪物造成60点伤害，减少10点防御)120铜钱
	20.一级灵丹，可提升道行（全属性 + 10，限购一枚）100铜钱
	21.人参果：由百年人参熬制而成，可以恢复生命（生命回复40）30铜钱
	22.丹心丸：采集各种中草药磨碎炼化而成，可以恢复法力（法力回复30）30铜钱
	string name;//名字
	int id;//编号
	int HpRegen;//回血
	int MpRegen;//回法
	int Defense;//加防御
	int Defense_reduce;//敌人减防御
	int harm;//直接伤害
	int Power_up;//伤害提升

	name = "铜钱剑";
		HpRegen = 0, MpRegen = 0, Defense = 0, Defense_reduce = 0, harm = 0, Power_up = 0;
	*/
Good::Good(int i) : id(i)
{
	switch (id+1)
	{
	case 1:name = "铜钱剑";
		HpRegen = 0, MpRegen = 0, Defense = 0, Defense_reduce = 0, harm = 0; Power_up = 80;
		introduce = "由108枚铜钱穿好加上法力加成所炼成的法器，在除妖伏魔方面有着极大的威力（攻击加成80）";
		break;
	case 2:name = "桃木剑";
		HpRegen = 0, MpRegen = 0, Defense = 0, Defense_reduce = 0, harm = 0, Power_up = 65;
		introduce = "茅山道士常用的剑，能够辟邪，杀僵尸，日常的防身武器（攻击加成65）";
		break;
	case 3:name = "七星剑";
		introduce = "能发挥出七种不同属性的法器，斩妖除魔、辟邪驱鬼（攻击加成50，防御加成30）";
		HpRegen = 0, MpRegen = 0, Defense = 10, Defense_reduce = 0, harm = 0, Power_up = 60;
		break;
	case 4:name = "金刚杵";
		introduce = "一件能破除万物的法器，打破一切魔障（攻击加成60，防御加成10）";
		HpRegen = 0, MpRegen = 0, Defense = 0, Defense_reduce = 0, harm = 0, Power_up = 65;
		break;
	case 5:name = "混沌钟";
		introduce = "出马仙的强力法器，极大地提高了防御能力（攻击加成20，防御加成60）";
		HpRegen = 0, MpRegen = 0, Defense = 60, Defense_reduce = 0, harm = 0, Power_up = 20;
		break;
	case 6:name = "黄铜镜";
		introduce = "道士随身携带的法器，可照出世间一切鬼怪（攻击加成10，防御加成10，减少怪物40点防御）";
		HpRegen = 0, MpRegen = 0, Defense = 10, Defense_reduce = 40, harm = 10;
		Power_up = 80;
		break;
	case 7:name = "赶尸鞭";
		introduce = "赶尸四大法器之一，操控僵尸的必备法器，镇邪辟灾（攻击加成50）";
		HpRegen = 0, MpRegen = 0, Defense = 0, Defense_reduce = 0, harm = 0, Power_up = 50;
		break;
	case 8:	name = "摄魂铃";
		introduce = "赶尸四大法器之一，震慑鬼怪神魄，可以有效控制鬼怪（攻击加成10，减少怪物50点防御）";
		HpRegen = 0, MpRegen = 0, Defense = 0, Defense_reduce = 50, harm = 0, Power_up = 10;
		break;
	case 9:	name = "引魂锣";
		introduce = "赶尸四大法器之一，招引魂魄，扰乱鬼怪行动（攻击加成40，减少怪物30点防御）";
		HpRegen = 0, MpRegen = 0, Defense = 0, Defense_reduce = 30, harm = 0, Power_up = 40;
		break;
	case 10:	name = "白色道袍";
		introduce = "初级道士常用服装，可增强法力和防御（法力加成10，防御加成10）";
		HpRegen = 0, MpRegen = 10, Defense = 10, Defense_reduce = 0, harm = 0, Power_up = 0;
		break;
	case 11:	name = "黄色道袍";
		introduce = "二级道袍，代表更高的修为（法力加成20，防御加成20）";
		HpRegen = 0, MpRegen = 20, Defense = 20, Defense_reduce = 0, harm = 0, Power_up = 0;
		break;
	case 12:	name = "红色道袍";
		introduce = "三级道袍，法力和修为达到了一定境界（法力加成40，防御加成30）";
		HpRegen = 0, MpRegen = 40, Defense = 30, Defense_reduce = 0, harm = 0, Power_up = 0;
		break;
	case 13:	name = "紫色道袍";
		introduce = "紫色道袍：四级道袍，代表有着高超的道法和修行功夫（法力加成70，防御加成40）";
		HpRegen = 0, MpRegen = 70, Defense = 40, Defense_reduce = 0, harm = 0, Power_up = 0;
		break;
	case 14:	name = "金色道袍";
		introduce = "最高级道袍，超凡人物穿戴的服饰，法力和修为已入无人之境（法力加成100，防御加成60）";
		HpRegen = 0, MpRegen = 100, Defense = 60, Defense_reduce = 0, harm = 0, Power_up = 0;
		break;
	case 15:	name = "黄符";
		introduce = "威力不大，茅山道士必备法器，(直接造成30点伤害, 对怪物伤害提高20）";
		HpRegen = 0, MpRegen = 0, Defense = 0, Defense_reduce = 0, harm = 30, Power_up = 20;
		break;
	case 16:	name = "墨斗线";
		introduce = "通过鸡血和墨汁调制，控制住僵尸（减少僵尸50点防御）";
		HpRegen = 0, MpRegen = 0, Defense = 0, Defense_reduce = 50, harm = 0, Power_up = 0;
		break;
	case 17:	name = "糯米";
		introduce = "家中很普通的糯米，对僵尸却是很好的道具（对怪物造成20点伤害，减少怪物20点防御）";
		HpRegen = 0, MpRegen = 0, Defense = 0, Defense_reduce = 20, harm = 20, Power_up = 0;
		break;
	case 18:	name = "招魂幡";
		introduce = "招魂幡：赶尸四大法器之一，用以镇魂的符(减少怪物30点防御)";
		HpRegen = 0, MpRegen = 0, Defense = 0, Defense_reduce = 30, harm = 0, Power_up = 0;
		break;
	case 19:	name = "五毒粉";
		introduce = "五毒粉：由五种剧毒混合制成，极具攻击性(对怪物造成60点伤害，减少10点防御)";
		HpRegen = 0, MpRegen = 0, Defense = 0, Defense_reduce = 10, harm = 60, Power_up = 0;
		break;
	case 20:	name = "一级灵丹";
		introduce = "一级灵丹，可提升道行（全属性 + 10，限购一枚）";
		HpRegen = 10, MpRegen = 10, Defense = 10, Defense_reduce = 10, harm = 10, Power_up = 10;
		break;
	case 21:	name = "人参果";
		introduce = "人参果：由百年人参熬制而成，可以恢复生命（生命回复100）";
		HpRegen = 100, MpRegen = 0, Defense = 0, Defense_reduce = 0, harm = 0, Power_up = 0;
		break;
	case 22:	name = "丹心丸";
		introduce = "丹心丸：采集各种中草药磨碎炼化而成，可以恢复法力（法力回复60）";
		HpRegen = 0, MpRegen = 60, Defense = 0, Defense_reduce = 0, harm = 0, Power_up = 0;
		break;
	}
}
Bag::Bag()
{

}

string Good::getname() { return name; }
string Good::getintrodcue() { return introduce; }
int Good::get_here() { return HpRegen; }
int Good::get_mpre() { return MpRegen; }
int Good::get_defense() { return Defense; }
int Good::get_defense_reduce() { return Defense_reduce; }
int Good::get_harm() { return harm; }
int Good::get_Power_up() { return Power_up; }
void Bag::Lookbag(const int* p)
{
	if (p[0] == -1)cout << "武器未装备" << endl;
	else
	{
		cout << "武器为:" << goods[p[0]].getname() << endl;
	}
	if (p[1] == -1)cout << "防具未装备" << endl;
	else
	{
		cout << "防具为:" << goods[p[1]].getname() << endl;
	}
	cout << endl;
}
int Bag::Lookstore(int rolemoney)
{
	system("cls");
	for (int i = 0; i <= 21; i++)
	{
		if (st[i] == false)
		{
			cout << i << '.' << goods[i].getname() << "  需要金钱" << get_needmoney(i);
			cout << goods[i].getintrodcue() << endl;
		}
	}
	cout << "请问你想购买道具吗?（输入-1为不想，输入其他则对应购买对应编号的道具）" << endl;
	int ordernum = 0;//选择购买的序号
	bool flag = false;
	while (!flag)
	{
		cin >> ordernum;
		flag = isInputValid();
		if (flag)//输入没问题再继续判断
		{
			flag = false;
			if (ordernum == -1)return true;
			if (ordernum <= 22 && ordernum >= 1)flag = true;
			else cout << "输入错误，请重新输入" << endl;
		}
		else
		{
			cout << "输入错误，请重新输入" << endl;
		}
	}
	if (st[ordernum] == false && needmoney[ordernum] <=rolemoney )
	{
		st[ordernum] = true;
		cout << "您已购买" << goods[ordernum].getname() << endl;
		amount[ordernum]++;
		return needmoney[ordernum];
	}
	else if(st[ordernum] == true)
	{
		cout << "购买失败,您已购买过此商品" << endl;
		return 0;
	}
	else
	{
		cout << "你身上的铜币不够" << endl;
		return 0;
	}
}
