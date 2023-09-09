#include "NPC.h"
using namespace std;

class Map
{
public:
	Map();//初始位置为地图0
	Map(int pos); //由参数pos为所在位置
	~Map();
	void ShowMap();			//显示大地图
	void Store();
	void Move(char order);
	bool isThereChat();
	bool isThereFight();
	int getPosition();
	string getName();

private:
	string name;
	int position; //当前位置
	string mapName[9] = { "清风镇","三凤山","云中池","陷土沼泽","阴邪","弘阳镇","奇龙镇","迷雾深林","云龙峰" };
	int mapNum;
	char pos[4][5];
	int dx;
	int dy;
};
