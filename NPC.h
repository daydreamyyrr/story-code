#include"fight.h"
using namespace std;

class Npc
{
public:
	Npc() {};
	~Npc() {};
	void NpcChat(int position,Role&);//npc任务剧情,position为人物当前位置，flag为任务节点，在fight中
	void StoryPs(int StoryFlag);//任务提示
protected:
	//string name;

};
