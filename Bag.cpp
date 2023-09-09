#include"Bag.h"

Good::Good(int i): id(i)
{
	switch (id)
	{
	case 1:name = "铜钱剑";
		HpRegen = 0, MpRegen = 0, Defense = 0, Defense_reduce = 0, harm = 0;Power_up = 80;
		introduce = "由108枚铜钱穿好加上法力加成所炼成的法器，在除妖伏魔方面有着极大的威力（攻击加成80）";
			break;
	case 2:name = "桃木剑";
		HpRegen = 0, MpRegen = 0, Defense = 0, Defense_reduce = 0, harm = 0,Power_up = 65;
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
	case 16:	name = "招魂幡";
		introduce = "招魂幡：赶尸四大法器之一，用以镇魂的符(减少怪物30点防御)";
		HpRegen = 0, MpRegen = 0, Defense = 0, Defense_reduce = 30, harm = 0, Power_up = 0;
		break;
	case 17:	name = "五毒粉";
		introduce = "五毒粉：由五种剧毒混合制成，极具攻击性(对怪物造成60点伤害，减少10点防御)";
		HpRegen = 0, MpRegen = 0, Defense = 0, Defense_reduce = 10, harm = 60, Power_up = 0;
		break;
	case 18:	name = "一级灵丹";
		introduce = "一级灵丹，可提升道行（全属性 + 10，限购一枚）";
		HpRegen = 10, MpRegen = 10, Defense = 10, Defense_reduce = 10, harm = 10, Power_up = 10;
		break;
	case 19:	name = "人参果";
		introduce = "人参果：由百年人参熬制而成，可以恢复生命（生命回复40）";
		HpRegen = 40, MpRegen = 0, Defense = 0, Defense_reduce = 0, harm = 0, Power_up = 0;
		break;
	case 20:	name = "丹心丸";
		introduce = "丹心丸：采集各种中草药磨碎炼化而成，可以恢复法力（法力回复30）";
		HpRegen = 0, MpRegen = 30, Defense = 0, Defense_reduce = 0, harm = 0, Power_up = 0;
		break;
	}
}
string Good::Getname() { return name; }
Bag::Bag()
{

}
bool Bag::purchase(int id)
{
	if (st[id] == false)
	{
		st[id] = true;
		cout << "您已购买" << goods[id].Getname() << endl;
		return true;
	}
	else
	{
		cout << "购买失败,您已购买过此商品" << endl;
		return false;
	}
}
