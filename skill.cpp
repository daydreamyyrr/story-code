#include <iostream>
#include "Skill.h"

using namespace std;

Skill::Skill() {

	skillLevel_1 = 0;
	skillLevel_2 = 0;
	skillLevel_3 = 0;
	skillLevel_4 = 0;

	skillLevel_Max_1 = 7;		//每个技能的最高等级,待定
	skillLevel_Max_2 = 7;
	skillLevel_Max_3 = 7;
	skillLevel_Max_4 = 6;

}

int Role_1Skill::getLevel(int whichSkill)
{
	if (whichSkill == 1)
		return skillLevel_1;
	if (whichSkill == 2)
		return skillLevel_2;
	if (whichSkill == 3)
		return skillLevel_3;
	if (whichSkill == 4)
		return skillLevel_4;
}
int Role_1Skill::getLevelMax(int whichSkill)
{
	if (whichSkill == 1)
		return skillLevel_Max_1;
	if (whichSkill == 2)
		return skillLevel_Max_2;
	if (whichSkill == 3)
		return skillLevel_Max_3;
	if (whichSkill == 4)
		return skillLevel_Max_4;
}
string Role_1Skill::skillName(int whichSkill)
{
	if (whichSkill == 1)
		return skill_1Name="三昧真火";
	if (whichSkill == 2)
		return skill_2Name="摘星换斗";
	if (whichSkill == 3)
		return skill_3Name="清音绽放";
	if (whichSkill == 4)
		return skill_4Name="护身金刚";
}
string Role_1Skill::skillText(int whichSkill)
{
	if (whichSkill == 1)
		return skill_1Text="“心者君火，亦称神火也，其名曰上昧；肾者臣火，亦称精火也，其名曰中昧；膀胱，即脐下气海者，民火也，其名曰下昧。”此为三昧真火。";
	if (whichSkill == 2)
		return skill_2Text="“只手擎天掌覆头，更从掌内注双眸。鼻端吸气频调息，用力收回左右手。”以摘星换斗之势发出势如鸿日的一击";
	if (whichSkill == 3)
		return skill_3Text="“众生皆烦恼，烦恼皆苦。 烦恼皆不生不灭，不垢不净，不增不减。 有形者，生于无形，无能生有，有归于无。 境由心生。”以清音而清心，心若止水";
	if (whichSkill == 4)
		return skill_4Text="“天护身，地护身，十二元辰护我身，灵官老爷护满身，年护身，月护身，日护身，时护身，金甲层层护满身，谨请北斗七星，南斗六郎急护我身，吾奉太上老君急急如律令。”";
}
int Role_1Skill::getNeedMp(int whichSkill)//法力消耗待定
{
	if (whichSkill == 1)
		return skill_1NeedMp=0;
	if (whichSkill == 2)
		return skill_2NeedMp=0;
	if (whichSkill == 3)
		return skill_3NeedMp=0;
	if (whichSkill == 4)
		return skill_4NeedMp=0;
}
double Role_1Skill::getAddAtk(int whichSkill)//攻击力加成暂定
{
	if (whichSkill == 1)
		return skill_1AddAtk=0;
	if (whichSkill == 2)
		return skill_2AddAtk=0;
	if (whichSkill == 3)
		return skill_3AddAtk=0;
	if (whichSkill == 4)
		return skill_4AddAtk=0;
}
int Role_1Skill::getRecHp(int whichSkill)//回血量暂定
{
	if (whichSkill == 1)
		return  skill_1recoverHp = 0;
	if (whichSkill == 2)
		return  skill_1recoverHp = 0;
	if (whichSkill == 3)
		return  skill_1recoverHp = 0;
	if (whichSkill == 4)
		return  skill_1recoverHp = 0;
}
int Role_1Skill::getBuff(int whichSkill)//防御力加成暂定
{
	if (whichSkill == 1)
		return skill_1Buff = 0;
	if (whichSkill == 2)
		return skill_1Buff = 0;
	if (whichSkill == 3)
		return skill_1Buff = 0;
	if (whichSkill == 4)
		return skill_1Buff = 0;
}
bool Role_1Skill::addLevel(int whichSkill)
{
	if (getLevel(whichSkill) >= getLevelMax(whichSkill))
	{
		cout << "技能等级已满，无法加点。" << endl;
		return false;
	}
	else
	{
		if (whichSkill == 1)
			skillLevel_1++;
		if (whichSkill == 2)
			skillLevel_2++;
		if (whichSkill == 3)
			skillLevel_3++;
		if (whichSkill == 4)
			skillLevel_4++;
		cout << "成功升1级！" << endl;
		return true;
	}
}


int Role_2Skill::getLevel(int whichSkill)
{
	if (whichSkill == 1)
		return skillLevel_1;
	if (whichSkill == 2)
		return skillLevel_2;
	if (whichSkill == 3)
		return skillLevel_3;
	if (whichSkill == 4)
		return skillLevel_4;
}
int Role_2Skill::getLevelMax(int whichSkill)
{
	if (whichSkill == 1)
		return skillLevel_Max_1;
	if (whichSkill == 2)
		return skillLevel_Max_2;
	if (whichSkill == 3)
		return skillLevel_Max_3;
	if (whichSkill == 4)
		return skillLevel_Max_4;
}
string Role_2Skill::skillName(int whichSkill)
{
	if (whichSkill == 1)
		return skill_1Name = "狐仙•青丘狐";
	if (whichSkill == 2)
		return skill_2Name = "柳仙•烛九阴";
	if (whichSkill == 3)
		return skill_3Name = "白仙•犭戾";
	if (whichSkill == 4)
		return skill_4Name = "黄仙•狌猩";
}
string Role_2Skill::skillText(int whichSkill)
{
	if (whichSkill == 1)
		return skill_1Text = "“青丘之山，有兽焉，其状如狐而九尾，其音如婴儿，能食人，食者不蛊。”";
	if (whichSkill == 2)
		return skill_2Text = "西北海之外，赤水之北，有章尾山。有神，人面蛇身而赤，……是烛九阴，是谓烛龙。”";
	if (whichSkill == 3)
		return skill_3Text = "“又东南二十里，曰乐马之山。有兽焉，其状如彙（hui，四声，刺猬），赤如丹火，其名曰 ，见则其国大疫”";
	if (whichSkill == 4)
		return skill_4Text = "“狌猩之状，形乍如兽。厥性识往，为物警辨。以酒招灾，自贻缨罥。”";
}
int Role_2Skill::getNeedMp(int whichSkill)//法力消耗待定
{
	if (whichSkill == 1)
		return skill_1NeedMp = 0;
	if (whichSkill == 2)
		return skill_2NeedMp = 0;
	if (whichSkill == 3)
		return skill_3NeedMp = 0;
	if (whichSkill == 4)
		return skill_4NeedMp = 0;
}
double Role_2Skill::getAddAtk(int whichSkill)//攻击力加成暂定
{
	if (whichSkill == 1)
		return skill_1AddAtk = 0;
	if (whichSkill == 2)
		return skill_2AddAtk = 0;
	if (whichSkill == 3)
		return skill_3AddAtk = 0;
	if (whichSkill == 4)
		return skill_4AddAtk = 0;
}
int Role_2Skill::getRecHp(int whichSkill)//回血量暂定
{
	if (whichSkill == 1)
		return  skill_1recoverHp = 0;
	if (whichSkill == 2)
		return  skill_1recoverHp = 0;
	if (whichSkill == 3)
		return  skill_1recoverHp = 0;
	if (whichSkill == 4)
		return  skill_1recoverHp = 0;
}
int Role_2Skill::getBuff(int whichSkill)//防御力加成暂定
{
	if (whichSkill == 1)
		return skill_1Buff = 0;
	if (whichSkill == 2)
		return skill_1Buff = 0;
	if (whichSkill == 3)
		return skill_1Buff = 0;
	if (whichSkill == 4)
		return skill_1Buff = 0;
}
bool Role_2Skill::addLevel(int whichSkill)
{
	if (getLevel(whichSkill) >= getLevelMax(whichSkill))
	{
		cout << "技能等级已满，无法升级。" << endl;
		return false;
	}
	else
	{
		if (whichSkill == 1)
			skillLevel_1++;
		if (whichSkill == 2)
			skillLevel_2++;
		if (whichSkill == 3)
			skillLevel_3++;
		if (whichSkill == 4)
			skillLevel_4++;
		cout << "灰仙已成功帮你升级技能" << endl;
		return true;
	}
}



int Role_3Skill::getLevel(int whichSkill)
{
	if (whichSkill == 1)
		return skillLevel_1;
	if (whichSkill == 2)
		return skillLevel_2;
	if (whichSkill == 3)
		return skillLevel_3;
	if (whichSkill == 4)
		return skillLevel_4;
}
int Role_3Skill::getLevelMax(int whichSkill)
{
	if (whichSkill == 1)
		return skillLevel_Max_1;
	if (whichSkill == 2)
		return skillLevel_Max_2;
	if (whichSkill == 3)
		return skillLevel_Max_3;
	if (whichSkill == 4)
		return skillLevel_Max_4;
}
string Role_3Skill::skillName(int whichSkill)
{
	if (whichSkill == 1)
		return skill_1Name = "兽魃，十万伏特";
	if (whichSkill == 2)
		return skill_2Name = "飞僵，乌鸦坐飞机";
	if (whichSkill == 3)
		return skill_3Name = "旱魃，春风十里";
	if (whichSkill == 4)
		return skill_4Name = "伏尸，岩身加护";
}
string Role_3Skill::skillText(int whichSkill)
{
	if (whichSkill == 1)
		return skill_1Text = "“有魃，似野之狙，被发，辄以一足趻踔而行，善以雷射人也。”";
	if (whichSkill == 2)
		return skill_2Text = "“僵尸久之即飞，毛长尺，入化为飞天夜叉，惟雷震可击杀。”";
	if (whichSkill == 3)
		return skill_3Text = "“有人衣青衣，名曰黄帝女魃，旱魃不为患，又有灾后之新生。”";
	if (whichSkill == 4)
		return skill_4Text = "“千年不朽，时伏地不徙，为衾尸以御之。”";
}
int Role_3Skill::getNeedMp(int whichSkill)//法力消耗待定
{
	if (whichSkill == 1)
		return skill_1NeedMp = 0;
	if (whichSkill == 2)
		return skill_2NeedMp = 0;
	if (whichSkill == 3)
		return skill_3NeedMp = 0;
	if (whichSkill == 4)
		return skill_4NeedMp = 0;
}
double Role_3Skill::getAddAtk(int whichSkill)//攻击力加成暂定
{
	if (whichSkill == 1)
		return skill_1AddAtk = 0;
	if (whichSkill == 2)
		return skill_2AddAtk = 0;
	if (whichSkill == 3)
		return skill_3AddAtk = 0;
	if (whichSkill == 4)
		return skill_4AddAtk = 0;
}
int Role_3Skill::getRecHp(int whichSkill)//回血量暂定
{
	if (whichSkill == 1)
		return  skill_1recoverHp = 0;
	if (whichSkill == 2)
		return  skill_1recoverHp = 0;
	if (whichSkill == 3)
		return  skill_1recoverHp = 0;
	if (whichSkill == 4)
		return  skill_1recoverHp = 0;
}
int Role_3Skill::getBuff(int whichSkill)//防御力加成暂定
{
	if (whichSkill == 1)
		return skill_1Buff = 0;
	if (whichSkill == 2)
		return skill_1Buff = 0;
	if (whichSkill == 3)
		return skill_1Buff = 0;
	if (whichSkill == 4)
		return skill_1Buff = 0;
}
bool Role_3Skill::addLevel(int whichSkill)
{
	if (getLevel(whichSkill) >= getLevelMax(whichSkill))
	{
		cout << "技能等级已满，无法加点。" << endl;
		return false;
	}
	else
	{
		if (whichSkill == 1)
			skillLevel_1++;
		if (whichSkill == 2)
			skillLevel_2++;
		if (whichSkill == 3)
			skillLevel_3++;
		if (whichSkill == 4)
			skillLevel_4++;
		cout << "成功升1级！" << endl;
		return true;
	}
}
