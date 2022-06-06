#include<iostream>
#include <easyx.h>
using namespace std;
void maxmin(int& a, int& b)
{
	if (a < b)
		swap(a, b);
	return;
}
void function11() {
	cout << "      MAX&MIN计算器开始运行" << endl << "————————————————" << endl;
	char a[10], b[10];
	InputBox(a, 10, "第一个数");
	InputBox(b, 10, "第二个数");
	int c = atoi(a);
	int d = atoi(b);
	closegraph();
	
	maxmin(c, d);
	printf("最大值：%d 最小值：%d\n", c, d);
	cout << "该计算器调用了一个带两个参数的函数"<<endl;
	cout << "该函数能求出这两个数的最大值和最小值"<<endl;
	cout << "使得第一个参数存放最大值，第二个参数存放最小值。" << endl;
	cout << "————————————————" << endl << endl << endl;
	cout << "按任意键返回主界面" << endl;
	getchar();
	return;
}

void function12() {
	//cout << "第12个程序" << endl;
	closegraph();
	cout << "      冒泡排序计算器开始运行" << endl << "————————————————" << endl;
	MessageBox(0, "请在命令行窗口输入十个数", "提示", MB_OK);
	int a[11] = {};
	for (int i = 1; i <= 10; i++)
		cin>>a[i];
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 10 - i; j++)
			if (a[j] > a[j + 1])
				swap(a[j], a[j + 1]);
	}
	cout << "排序后：" << endl;
	for (int i = 1; i <= 10; i++)
		cout<< a[i]<<" ";
	cout << endl;
	cout << "————————————————" << endl << endl << endl;
	//cout << "按任意键返回主界面" << endl;
	//这个地方的getchar（）好像不可用了。不知道为啥
	system("pause");
	return;
}
void function13() {
	cout << "    矩阵转置计算器开始运行" << endl << "————————————————" << endl;
	//MessageBox(0, "请在命令行窗口输入十个数", "提示", MB_OK);
	char a1[10], b[10];
	InputBox(a1, 10, "请输入矩阵的行数");
	InputBox(b, 10, "请输入矩阵的列数");
	closegraph();
	int c = atoi(a1);
	int d = atoi(b);
	int a[100][100] = {};
	cout << "请输入一个" << c << "行" << d << "列的矩阵" << endl;
	cout << "转置前：" << endl;
	for (int i = 1; i <= c; i++)
	{
		for (int j = 1; j <= d; j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"转置后:"<<endl;
	for (int j = 1; j <= d; j++)
	{
		for (int i = 1; i <= c; i++)
		{
			cout<< a[i][j]<<" ";
		}
		cout << endl;
	}
	cout << "————————————————" << endl << endl << endl;
	//cout << "按任意键返回主界面" << endl;
	//这个地方的getchar（）好像不可用了。不知道为啥
	system("pause");
	return;
}
void function14() {
	cout << "    矩阵对角线计算器开始运行" << endl << "————————————————" << endl;
	//MessageBox(0, "请在命令行窗口输入十个数", "提示", MB_OK);
	char  b[10];
	InputBox(b, 10, "请输入方阵的阶数");
	closegraph();
	int d = atoi(b);
	int a[100][100] = {};
	cout << "请输入一个"  << d << "阶的矩阵" << endl;
	int x, sum = 0,sum1 = 0;
	for (int i = 1; i <= d; i++)
	{
		for (int j = 1; j <= d; j++)
		{
			cin >> x;
			if (i == j) sum += x;
			if (i + j == d + 1) sum1 += x;
		}
	}
	cout << "主对角线之和为：" << sum<<endl;
	cout << "副对角线之和为：" << sum1 << endl;
	cout << "————————————————" << endl << endl << endl;
	//cout << "按任意键返回主界面" << endl;
	//这个地方的getchar（）好像不可用了。不知道为啥
	system("pause");
	return;
}
void function15() {
	cout << "    统计单词计算器开始运行" << endl << "————————————————" << endl;
	char  b[81];
	InputBox(b, 81, "请输入单词");
	closegraph();
	int count = 0;
	cout << "输入的单词为：";
	for (int i = 0; i <= 81; i++) {
		if (b[i] >='A'&&b[i]<='z') {
			cout << b[i];
			count++;
		}
	}
	cout <<endl<< "单词的个数为" << count << endl;
	
	cout << "————————————————" << endl << endl << endl;
	system("pause");
	return;
}