#include"map.h"
#include <iostream>
using namespace std;

Map::Map() :npc(0) {
	position = 0;
	dx = 3;
	dy = 2;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			pos[i][j] = ' ';
		}
	}
	pos[dx][dy] = '*';
}

Map::Map(int p) :npc(p) {
	position = p;
	/*
	switch (p)
	{
	case'0': {
		dx = 3;
		dy = 2;
		break;
	}
	case'1': {
		dx = 2;
		dy = 2;
		break;
	}
	case'2':{
		dx = 2;
		dy = 1;
		break;
	}
	case'3': {
		dx = 2;
		dy = 0;
		break;
	}
	case'4': {
		dx = 1;
		dy = 0;
		break;
	}
	case'5': {
		dx = 2;
		dy = 3;
		break;
	}
	case'6': {
		dx = 2;
		dy = 4;
		break;
	}
	case'7': {
		dx = 1;
		dy = 2;
		break;
	}
	case'8': {
		dx = 0;
		dy = 2;
		break;
	}
	default:
		break;
	}
	*/
	if (p == 0) {
		dx = 3;
		dy = 2;
	}
	if (p == 1) {
		dx = 2;
		dy = 2;
	}
	if (p == 2) {
		dx = 2;
		dy = 1;
	}
	if (p == 3) {
		dx = 2;
		dy = 0;
	}
	if (p == 4) {
		dx = 1;
		dy = 0;
	}
	if (p == 5) {
		dx = 2;
		dy = 3;
	}
	if (p == 6) {
		dx = 2;
		dy = 4;
	}
	if (p == 7) {
		dx = 1;
		dy = 2;
	}
	if (p == 8) {
		dx = 0;
		dy = 2;
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			pos[i][j] = ' ';
		}
	}
	pos[dx][dy] = '*';
}

Map::~Map()
{
}

void Map::Store()
{
}


void Map::ShowMap()
{
	system("cls");
	cout << "世界地图:" << endl;
	cout << "                      ____________" << endl;
	cout << "                      |          |" << endl;
	cout << "                      |  云龙峰  |" << endl;
	cout << "                      |    " << pos[0][2] << "     |" << endl;
	cout << "____________          |__________|" << endl;
	cout << "|          |          |          |" << endl;
	cout << "|   阴邪   |          | 迷雾森林 |" << endl;
	cout << "|    " << pos[1][0] << "     |          |    " << pos[1][2] << "     |" << endl;
	cout << "|__________|__________|__________|______________________" << endl;
	cout << "|          |          |          |          |          |" << endl;
	cout << "| 陷土沼泽 |  云中池  |  三凤山  |  弘阳镇  |  奇龙镇  |" << endl;
	cout << "|    " << pos[2][0] << "     |    " << pos[2][1] << "     |    " << pos[2][2] << "     |     " << pos[2][3] << "    |     " << pos[2][4] << "    |" << endl;
	cout << "|__________|__________|__________|__________|__________|" << endl;
	cout << "                      |          |" << endl;
	cout << "                      |  清风镇  |" << endl;
	cout << "                      |    " << pos[3][2] << "     |" << endl;
	cout << "                      |__________|" << endl;
	cout << "您现在的位置为" << mapName[position] << endl;
}


void Map::showRoom() {
	if (isThereChat())
		cout << "这里有：" << '\t' << npc.getName() << '\t';
}

void Map::Move(char order)
{
	pos[dx][dy] = ' ';
	switch (order)
	{
	case 'w': {
		if (position == 0 || position == 3 || position == 7) {
			dx--;
			position++;
		}
		else if (position == 1)
		{
			dx--;
			position = 7;
		}
		else
		{
			cout << "移动失败" << endl;
		}
		break;
	}
	case 'a': {
		if (position == 1 || position == 2) {
			dy--;
			position++;
		}
		else if (position == 5)
		{
			dy--;
			position = 1;
		}
		else if (position == 6)
		{
			dy--;
			position = 5;
		}
		else
		{
			cout << "移动失败" << endl;
		}
		break;
	}
	case 's': {
		if (position == 1 || position == 4 || position == 8) {
			dx++;
			position--;
		}
		else if (position == 7)
		{
			dx++;
			position = 1;
		}
		else
		{
			cout << "移动失败" << endl;
		}
		break;
	}
	case 'd': {
		if (position == 2 || position == 3) {
			dy++;
			position--;
		}
		else if (position == 1)
		{
			dy++;
			position = 5;
		}
		else if (position == 5)
		{
			dy++;
			position = 6;
		}
		else
		{
			cout << "移动失败" << endl;
		}
		break;
	}
	default:
		break;
	}

	pos[dx][dy] = '*';
	npc( Npc(position));		//更新npc
	showRoom();
}

bool Map::isThereChat()
{
	if (position <= 8 && position > 0)
		return true;
	else return false;
}

bool Map::isThereFight()
{
	if (position <= 8&&position>0)
		return true;
	else return false;
}

int Map::getPosition()
{
	return position;
}

string Map::getNpcName() {
	return npc.getName();
}

void Map::setNpc(Npc newNpc) 
{
	npc = newNpc;
}

Role Map::chatToNpc(Role player) {
	return npc.chat(player);
}

int Map::getNpcGoodsId() {
	return npc.getGoodsId();
}

int Map::getNpcGoodsNum() {
	return npc.getGoodsNum();
}

string Map::getName()
{
	return mapName[position];
}
