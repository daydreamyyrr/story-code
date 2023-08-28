#include<iostream>
#ifndef MAP_H
#define MAP_H

#include <string>
#include "Enemy.h"
#include"Role.h"
#include "Npc.h"

using namespace std;

class Map
{
public:
	Map();//初始位置为地图0
	Map(int pos); //由参数pos为所在位置
	~Map();
	void ShowMap();			//显示大地图
	void showRoom();		//显示身处的地方的信息，（有什么人可以交谈或者战斗）
	void Store();
	void Move(char order);
	bool isThereChat();
	bool isThereFight();
	int getPosition();

	string getNpcName();		//得到当前npc名字
	void setNpc(Npc newNpc);
	Role chatToNpc(Role player);
	int getNpcGoodsId();
	int getNpcGoodsNum();
	string getName();

private:
	string name;
	int position; //当前位置
	string mapName[9] = { "清风镇","三凤山","云中池","陷土沼泽","地府","弘阳镇","奇龙镇","迷雾深林","云龙峰" };
	int mapNum;
	char pos[5][5];
	int dx;
	int dy;
	Npc npc;
};
