#include<iostream>
#include <easyx.h>
using namespace std;
void function1() {
	cout << "      加法计算器开始运行" << endl<<"————————————————"<<endl;
	char a[10], b[10];
	InputBox(a, 10, "第一个数");
	InputBox(b, 10, "第二个数");
	int c = atoi(a);
	int d = atoi(b);
	closegraph();
	printf("加法结果的十进制形式是：%d\n", c + d);
	printf("加法结果的八进制形式是：%o\n", c + d);
	printf("加法结果的十六进制形式是：%x\n", c + d);
	cout << "————————————————"<<endl<<endl<<endl;

	cout << "按任意键返回主界面"<<endl;
	getchar();
	return;
}
void function2() {
	cout << "      减法计算器开始运行" << endl << "————————————————" << endl;
	char a[10], b[10];
	InputBox(a, 10, "输入第一个数");
	InputBox(b, 10, "输入第二个数");
	int c = atoi(a);
	int d = atoi(b);
	closegraph();
	printf("减法结果的十进制形式是：%d\n", c - d);
	printf("减法结果的八进制形式是：%o\n", c - d);
	printf("减法结果的十六进制形式是：%x\n", c - d);
	cout << "————————————————" << endl << endl << endl;

	cout << "按任意键返回主界面"<<endl;
	getchar();
	return;
}
void function3() {
	cout << "      乘法计算器开始运行" << endl << "————————————————" << endl;
	char a[10], b[10];
	InputBox(a, 10, "输入第一个数");
	InputBox(b, 10, "输入第二个数");
	closegraph();
	double c = 0.0;
	double d = 0.0;
	c = strtod(a, NULL);
	d = strtod(b, NULL);
	printf("乘法结果的小数形式是：%lf\n", c * d);
	printf("乘法结果的指数形式是：%e\n", c * d);
	cout << "————————————————" << endl << endl << endl;
	cout << "按任意键返回主界面"<<endl;
	getchar();
	return;
}
void function4() {
	cout << "      除法计算器开始运行" << endl << "————————————————" << endl;
	char a[10], b[10];
	InputBox(a, 10, "输入被除数");
	InputBox(b, 10, "输入除数");
	closegraph();
	double c = 0.0;
	double d = 0.0;
	c = strtod(a, NULL);
	d = strtod(b, NULL);
	if (d == 0)
	{
		printf("出错，除数为0,无法进行除法运算\n");
		return;
	}
	else {
		printf("除法结果的小数形式是：%lf\n", c / d);
		printf("除法结果的指数形式是：%e\n", c / d);
	}
	
	cout << "————————————————" << endl << endl << endl;

	cout << "按任意键返回主界面"<<endl;
	getchar();
	return;
}
void function5() {
	cout << "      数字位数计算器开始运行" << endl << "————————————————" << endl;
	char str[10];
	InputBox(str, 10, "输入想要计算的数字");
	closegraph();
	if (str[0] == '-')
		cout<<"要求输入的数为正整数！"<<endl;
	else if (strlen(str) > 3)
		cout<<"出错！要求输入的数为3位以内的正整数"<<endl;
	else
	{
		if (strlen(str) == 3)
			printf("该数为3位数，百位是%c，十位是%c，个位是%c\n", str[0], str[1], str[2]);
		else if (strlen(str) == 2)
			printf("该数为2位数，十位是%c，个位是%c\n", str[0], str[1]);
		else
			printf("该数为1位数，个位是%c\n", str[0]);
	}
	cout << "————————————————" << endl << endl << endl;

	cout << "按任意键返回主界面" << endl;
	getchar();
	return;
}