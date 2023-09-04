#pragma once
#include<iostream>

using namespace std;

class Npc
{
public:
	Npc() {};
	~Npc(){};
	void NpcChat(int position, int StoryFlag);//npc任务剧情,position为人物当前位置，flag为任务节点，在fight中
	void StoryPs(int position, int StoryFlag);//任务提示
protected:
	//string name;
	
};

