#include<iostream>
#include <easyx.h>
#include <conio.h>
#include <cstring>
//#include "interface.h"
using namespace std;
void function1() {
	cout << "�ӷ���������ʼ����" << endl;
	//wchar_t s[10];
	char a[10], b[10];
	InputBox(a, 10, "��һ����");
	InputBox(b, 10, "�ڶ�����");
	//MessageBox(GetForegroundWindow(), "��Ҫ˵�Ļ���", "�����⡿",NULL);
	int c = atoi(a);
	int d = atoi(b);
	closegraph();
	printf("�ӷ������ʮ������ʽ�ǣ�%d\n", c + d);
	printf("�ӷ�����İ˽�����ʽ�ǣ�%o\n", c + d);
	printf("�ӷ������ʮ��������ʽ�ǣ�%x\n", c + d);
	system("pause");
	return;
}
