#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <bits.h>
#include<Windows.h>

using namespace std;

void SetColorAndBackground(int ForgC, int BackC) {
	WORD wColor = ((BackC & 0x0F) << 4) + (ForgC & 0x0F);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), wColor);
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
	cout << '\t' << '\t' << '\t' << '\t' << '\t' << "         ��Ϸ������Ϣ       " << endl;
	cout << '\t' << '\t' << '\t' << '\t' << '\t' << "     ********************   " << endl;
	cout << '\t' << '\t' << '\t' << '\t' << "     �����ˣ��й������ѧ2023�������ʵ��3��   "<< endl;
	cout << '\t' << '\t' << '\t' << '\t' << "    �鳤��лҫ�ᣬ��Ա�����ӷ�������٣������� " << endl << endl;
	cout << '\t' << '\t' << '\t' << '\t';
	string GameMenu = " 1.��ʼ��Ϸ 2.������Ϸ 3.�˳���Ϸ";
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
	cout << endl<<"���±���" << endl << endl;
	SetColorAndBackground(14, 0);
	string background = "    ���´����鹹��";
	for (int i = 0; i < background.length(); i++) {
		Sleep(10);
		cout << background[i];
	}
	cout << endl<<endl;
	system("pause");
	system("cls");
	cout << endl;
	SetColorAndBackground(10, 0);
	cout << "���±���" << endl << endl;
	SetColorAndBackground(14, 0);
	background = "    20�����к��ڣ�������۵ľ�����ͨ���������ݴ���ɷ��������Ȼ���ݴ���ϵĴ󲿷���ħ����ݷ�����������Ȼ��һ���ֶ������Ϊ��һ����ʹ���ⷽ�����������������һ���ܵ�̫���Ͼ��Ĵ��У�����ͥ���У��½�ն����ħ��";
	for (int i = 0; i < background.length(); i++) {
		Sleep(10);
		cout << background[i];
	}
	cout << endl<<endl;
	system("pause");
	system("cls");
	cout << endl;
	SetColorAndBackground(10, 0);
	cout << "���±���" << endl << endl;
	SetColorAndBackground(14, 0);
	background = "    ������һ��Ҫ��ͷ����ת���ˣ����������ֻأ�����������ǰ�����䣬�˼�����ݲ��������˼�����㽫�ص���Ƭ��Ϥ����İ���������ϡ�";
	for (int i = 0; i < background.length(); i++) {
		Sleep(10);
		cout << background[i];
	}
	cout << endl<<endl;
	system("pause");
	system("cls");
	cout << endl;
	SetColorAndBackground(10, 0);
	cout << "���±���" << endl << endl;
	SetColorAndBackground(14, 0);
	background = "    ڤڤ֮�У���·��������Լ���ʹ�����Ͷ����ƣ���ѹΪ������������������һʹ���������ɡ�";
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
	
	BackgroundText();
}