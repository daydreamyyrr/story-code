
#include<iostream>
#include <bits.h>
#include<Windows.h>

using namespace std;

void SetColorAndBackground(int ForgC//字符颜色, int BackC//背景颜色) //设置字体颜色
{
	WORD wColor = ((BackC & 0x0F) << 4) + (ForgC & 0x0F);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), wColor);
}
bool isInputValid() //检测数据类型是否输入错误
{
    if (std::cin.fail()) { // 检查输入是否失败
        std::cin.clear(); // 清除错误状态标记
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // 忽略缓冲区中的无效字符
        return false; // 输入无效
    }
    return true; // 输入有效
}

int welcome()
{
	SetColorAndBackground(5,0);
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
	cout << '\t' << '\t' << '\t' << '\t' << "     制作人：中国海洋大学2023程序设计实践3组   "<< endl;
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
	
	return 0;
}

void BackgroundText()
{
	
	system("cls");
	SetColorAndBackground(10, 0);
	cout << endl<<"故事背景" << endl << endl;
	SetColorAndBackground(14, 0);
	string background = "    故事纯属虚构。";
	for (int i = 0; i < background.length(); i++) {
		Sleep(10);
		cout << background[i];
	}
	cout << endl<<endl;
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
	cout << endl<<endl;
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
	cout << endl<<endl;
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
	cout << endl<<endl;
	system("pause");
	system("cls");
	}



int main()
{
  return 0;
}
