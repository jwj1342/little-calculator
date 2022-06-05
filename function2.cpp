#include<iostream>
#include <easyx.h>
using namespace std;

void function6() {
	cout << "      圆面积计算器开始运行" << endl << "————————————————" << endl;
	char a[10];
	InputBox(a, 10, "输入圆的半径");
	closegraph();
	double r = 0.0, PI = 3.14159;;
	r = strtod(a, NULL);
	printf("圆面积整数是 %d\n", int(PI * r * r));
	printf("圆面积是%.6lf\n", PI * r * r);
	cout << "————————————————" << endl << endl << endl;

	cout << "按任意键返回主界面" << endl;
	getchar();
	return;
}
void function7() {
	cout << "      闰年计算器开始运行" << endl << "————————————————" << endl;
	char a[10];
	InputBox(a, 10, "输入年份");
	closegraph();
	int c = atoi(a);
	if (c % 4 == 0 && c % 100 != 0 || c % 400 == 0) {
		cout <<c<< "年是闰年" << endl;
	}
	else {
		cout << c << "年不是闰年" << endl;
	}
	cout << "————————————————" << endl << endl << endl;

	cout << "按任意键返回主界面" << endl;
	getchar();
	return;
}
void function8() {
	cout << "      成绩转换器开始运行" << endl << "————————————————" << endl;
	char c[10];
	InputBox(c, 10, "输入成绩");
	closegraph();
	int a = atoi(c);
	cout << "你的成绩是：";
	if (a < 0 || a>100) {
		cout << "成绩输入错误" << endl;
	}
	else if (a < 60) {
		cout << "不及格" << endl;
	}
	else if (a < 70) {
		cout << "及格" << endl;
	}
	else if (a < 80) {
		cout << "中" << endl;
	}
	else if (a < 90) {
		cout << "良" << endl;
	}
	else {
		cout << "优秀" << endl;
	}
	cout << "————————————————" << endl << endl << endl;

	cout << "按任意键返回主界面" << endl;
	getchar();
	return;
}
void function9() {
	cout << "      水仙花数计算器开始运行" << endl << "————————————————" << endl;
	//char a[10];
	//InputBox(a, 10, "");
	closegraph();
	//int c = atoi(a);
	cout << "一千以内水仙花数有：";
	for (int i = 100; i <= 999; i++)
	{
		int a = i / 100;
		int c = i % 10;
		int b = i / 10 % 10;
		if (i == a * a * a + b * b * b + c * c * c)
			printf("%d ", i);
	}
	cout << endl;
	cout << "————————————————" << endl << endl << endl;

	cout << "按任意键返回主界面" << endl;
	getchar();
	return;
}
void function10() {
	cout << "      最大值计算器开始运行" << endl << "————————————————" << endl;
	char a[10],b[10];
	InputBox(a, 10, "输入第一个数");
	InputBox(b, 10, "输入第二个数");
	closegraph();
	double c = strtod(a, NULL);
	double d = strtod(b, NULL);
	c > d ? cout << "最大值为" << c : cout << "最大值为" << d;
	cout << endl;
	cout << "————————————————" << endl << endl << endl;

	cout << "按任意键返回主界面" << endl;
	getchar();
	return;
}
