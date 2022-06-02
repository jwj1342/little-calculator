#include<iostream>
#include <easyx.h>
#include <conio.h>
#include <cstring>
//#include "interface.h"
using namespace std;
void function1() {
	cout << "加法计算器开始运行" << endl;
	//wchar_t s[10];
	char a[10], b[10];
	InputBox(a, 10, "第一个数");
	InputBox(b, 10, "第二个数");
	//MessageBox(GetForegroundWindow(), "【要说的话】", "【标题】",NULL);
	int c = atoi(a);
	int d = atoi(b);
	closegraph();
	printf("加法结果的十进制形式是：%d\n", c + d);
	printf("加法结果的八进制形式是：%o\n", c + d);
	printf("加法结果的十六进制形式是：%x\n", c + d);
	system("pause");
	return;
}
