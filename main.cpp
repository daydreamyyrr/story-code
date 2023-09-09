#include <bits.h>
#include"map.h"
using namespace std;


void SetColorAndBackground(int ForgC, int BackC) {
	WORD wColor = ((BackC & 0x0F) << 4) + (ForgC & 0x0F);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), wColor);
}

int welcome()
{
	SetColorAndBackground(5, 0);
	for (int i = 0; i < 8; i++)
		cout << endl;
	cout << '\t' << '\t' << '\t' << '\t' << "    00        00              0      00        " << endl;
	cout << '\t' << '\t' << '\t' << '\t' << "     00        00            00      00        " << endl;
	cout << '\t' << '\t' << '\t' << '\t' << "            0000000000      00  00   00    00  " << endl;
	cout << '\t' << '\t' << '\t' << '\t' << "   000000    0    0        00   00   00    00  " << endl;
	cout << '\t' << '\t' << '\t' << '\t' << "       00  00000000000   00 00  00   00    00  " << endl;
	cout << '\t' << '\t' << '\t' << '\t' << "      00   00   0   00  00  00  00   00    00  " << endl;
	cout << '\t' << '\t' << '\t' << '\t' << "      00   00 00000 00      00  00   00    00  " << endl;
	cout << '\t' << '\t' << '\t' << '\t' << "    00     00   0   00      00  00   00    00  " << endl;
	cout << '\t' << '\t' << '\t' << '\t' << "    00  0  00  000  00      00  00   00    00  " << endl;
	cout << '\t' << '\t' << '\t' << '\t' << "    00 00  00  0 0  00      00  00   00    00  " << endl;
	cout << '\t' << '\t' << '\t' << '\t' << "      0    00  000  00      00  0000000000000  " << endl << endl;
	SetColorAndBackground(10, 1);
	cout << '\t' << '\t' << '\t' << '\t' << '\t' << "     ********************   " << endl;
	cout << '\t' << '\t' << '\t' << '\t' << '\t' << "         游戏制作信息       " << endl;
	cout << '\t' << '\t' << '\t' << '\t' << '\t' << "     ********************   " << endl;
	cout << '\t' << '\t' << '\t' << '\t' << "     制作人：中国海洋大学2023程序设计实践3组   " << endl;
	cout << '\t' << '\t' << '\t' << '\t' << "    组长：谢耀坚，组员：杨子凡，杨济临，于铭洋 " << endl << endl;
	cout << '\t' << '\t' << '\t' << '\t';
	string GameMenu = " 1.开始游戏 2.继续游戏 3.退出游戏";
	SetColorAndBackground(4, 0);
	for (int i = 0; i < GameMenu.length(); i++)
	{
		Sleep(20);
		cout << GameMenu[i];
	}
	cout << endl;
	int k=0;
	bool flag =false;
	while (!flag)
	{
		cin >> k;
		flag = isInputValid();
		if (flag)//输入没问题再继续判断
		{
			if (k <= 3 && k >= 1)return k;
			cout<< "输入错误，请重新输入" << endl;
			flag = false;
		}
		else	cout << "输入错误，请重新输入" << endl;
	}
}

void BackgroundText()
{

	system("cls");
	SetColorAndBackground(10, 0);
	cout << endl << "故事背景" << endl << endl;
	SetColorAndBackground(14, 0);
	string background = "    故事纯属虚构。";
	for (int i = 0; i < background.length(); i++) {
		Sleep(10);
		cout << background[i];
	}
	cout << endl << endl;
	system("pause");
	system("cls");
	cout << endl;
	SetColorAndBackground(10, 0);
	cout << "故事背景" << endl << endl;
	SetColorAndBackground(14, 0);
	background = "    20世纪中后期，从颛顼大帝的绝地天通以来，神州大地仙凡相隔，虽然神州大地上的大部分妖魔鬼怪蛰伏了起来，仍然有一部分恶鬼当道，为祸一方，使得这方世界民不聊生。你的上一世受到太上老君的传承，受天庭所托，下界斩妖除魔。";
	for (int i = 0; i < background.length(); i++) {
		Sleep(10);
		cout << background[i];
	}
	cout << endl << endl;
	system("pause");
	system("cls");
	cout << endl;
	SetColorAndBackground(10, 0);
	cout << "故事背景" << endl << endl;
	SetColorAndBackground(14, 0);
	background = "    正是这一紧要关头，你转生了，历经六道轮回，你身上已无前世记忆，此间因果容不得你继续思考，你将回到这片熟悉而又陌生的土地上。";
	for (int i = 0; i < background.length(); i++) {
		Sleep(10);
		cout << background[i];
	}
	cout << endl << endl;
	system("pause");
	system("cls");
	cout << endl;
	SetColorAndBackground(10, 0);
	cout << "故事背景" << endl << endl;
	SetColorAndBackground(14, 0);
	background = "    冥冥之中，你仿佛明白了自己的使命，惩恶扬善，镇压为非作歹的厉鬼，带着这一使命，出发吧。";
	for (int i = 0; i < background.length(); i++) {
		Sleep(10);
		cout << background[i];
	}
	cout << endl << endl;
	system("pause");
	system("cls");
}



int main()
{
	int number = welcome();
	Map map;
	system("cls");
	//BackgroundText();
	Role* role=nullptr;
	Npc npc;
	enemy en(1);
	int* p =nullptr;//关注装备栏状况
	char order;//移动键
	if (number == 1)
	{
		cout << "请问您想成为什么职业?" << endl;
		cout << "在20世纪中后期，出现了南茅北马的说法，" << endl;
		cout << "南茅指的是南方道教的茅山派，是正一道的分支，一般是说南方大多普遍使用茅山道术镇鬼。" << endl;
		cout << "“北马”是指“出马”。北马是指出马仙都有通灵驱邪之功。出马：北方称为搬杆子、顶香火头、领兵带队的。" << endl;
		cout << "但最终都是一个目的，有一个弟子（也称弟马）带领一个仙家的堂口，为人看事查病。是继承上古萨满文化的传承。" << endl;
		cout << "赶尸人，一个身穿道袍的法师通过以一种特殊巫术引领尸体行走为职业的人。" << endl;
		cout << "职业有1.出马弟子 2.茅山道士 3.赶尸人" << endl;
		int k = 0;
		bool flag = false;
		while (!flag)
		{
			cin >> k;
			flag = isInputValid();
			if (flag)//输入没问题再继续判断
			{
				flag = false;
				if (k <= 3 && k >= 1)flag = true;
				else cout << "输入错误，请重新输入" << endl;
			}
			else
			{
				cout << "输入错误，请重新输入" << endl;
			}
		}
		role = new Role(k);
	}
	else if (number == 2)
	{
		cout << "还没写";
	}
	else exit(1);
	role->Role_panel();
	int temp = 1;
	bool flag = false;
	while (temp)
	{
		cout << "状态栏:1.过主线 2.战斗 3.状态 4.移动 5.打开商店  6.背包  7.技能升级 8.保存退出 " << endl;
		cin >> temp;
		flag = isInputValid();
		char f;//判断战斗与否
		if(flag)
			switch (temp)
			{
			case 1:npc.NpcChat(map.getPosition(), *role);
				break;
			case 2:en.set(map.getPosition());
				cout << "此处有怪物" << en.getname();
				cout << "战斗吗?Y/N" << endl;
				cin >> f;
				if (f == 'Y' || f == 'y')Fight fight(*role, map.getPosition(),0);
				else 
				{ 
					if (!(f == 'n' || f == 'N'))cout << "输入错误，返回状态栏"; 
					continue; 
				}
				break;
			case 3:role->Role_panel();
				role->Lookbag(role->getequipment());//查看角色背包
				break;
			case 4: 
				while (true)
				{
					map.ShowMap();
					cout << "使用w a s d来移动 按1进入地图" << endl;
					cin >> order;
					if (order == '1') {
						system("cls");
						break;
					}
					else {
						map.Move(order);
					}

				}
				break;
			case 5:
				role->setmoney(-role->Lookstore(role->getmoney()));
				break;
			case 6:role->equip();
				break;
			case 7:role->skill(); break;
			case 8:exit(1);//先暂时定退出
				break;
			}
		else
		{
			cout << "输入错误，请重新输入" << endl;
			temp = 1;
		}
	}
	

	return 0;
}
