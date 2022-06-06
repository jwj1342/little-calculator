#include<iostream>
#include <easyx.h>
using namespace std;
void function21() {
	cout << "      奇偶数计算器开始运行" << endl << "————————————————" << endl;
	char a[10];
	InputBox(a, 10, "输入终止的数");
	closegraph();
	int c = atoi(a);
	bool check = false;
	int sum = 0;
	if (c % 2 == 0) {//如果输入的数为偶数，t左移至奇数
		c--;
		check = true;
	}
		
	for (int i = 1; i <= c; i += 2)
		sum += i;
	cout << "1到" << c << "的数之间奇数和为" << sum<<endl;

	if (check) c++;//把c复原
	check = false;
	if (c % 2 != 0) {//为奇数，靠近偶数
		c--;
		check = true;
	}
	sum = 0;//复原sum
	int i = 2;
	while (i <= c)
	{
		sum += i;
		i += 2;
	}
	if (check)c++;
	cout << "1到" << c << "的数之间偶数和为" << sum << endl;

	cout << "————————————————" << endl << endl << endl;
	cout << "按任意键返回主界面" << endl;
	getchar();
	return;
}
void function22() {
	cout << "      3的倍数计算器开始运行" << endl << "————————————————" << endl;
	char a[10];
	InputBox(a, 10, "输入终止的数");
	closegraph();
	int c = atoi(a);
	cout << "从1到" << c << "之间的所有三的倍数是：" << endl;
	int i = 0;
	do {
		i++;
		if (i % 3 == 0) {
			cout << i << " ";
		}
	} while (i <= c);

	cout <<endl<< "————————————————" << endl << endl << endl;
	cout << "按任意键返回主界面" << endl;
	getchar();
	return;
}
void function23() {
	cout << "      3&5整除计算器开始运行" << endl << "————————————————" << endl;
	char a[10],b[10];
	InputBox(a, 10, "输入起始的数");
	InputBox(b, 10, "输入终止的数");
	closegraph();
	int c = atoi(a);
	int d = atoi(b);
	printf("区间内既被3整除又被5整除的数有:\n");
	for (int i = c; i <= d; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("%d ", i);
	}
	cout <<endl<< "————————————————" << endl << endl << endl;

	cout << "按任意键返回主界面" << endl;
	getchar();
	return;
}