#include<iostream>
#include <easyx.h>
using namespace std;
void function1() {
	cout << "      �ӷ���������ʼ����" << endl<<"��������������������������������"<<endl;
	char a[10], b[10];
	InputBox(a, 10, "��һ����");
	InputBox(b, 10, "�ڶ�����");
	int c = atoi(a);
	int d = atoi(b);
	closegraph();
	printf("�ӷ������ʮ������ʽ�ǣ�%d\n", c + d);
	printf("�ӷ�����İ˽�����ʽ�ǣ�%o\n", c + d);
	printf("�ӷ������ʮ��������ʽ�ǣ�%x\n", c + d);
	cout << "��������������������������������"<<endl<<endl<<endl;

	cout << "�����������������"<<endl;
	getchar();
	return;
}
void function2() {
	cout << "      ������������ʼ����" << endl << "��������������������������������" << endl;
	char a[10], b[10];
	InputBox(a, 10, "�����һ����");
	InputBox(b, 10, "����ڶ�����");
	int c = atoi(a);
	int d = atoi(b);
	closegraph();
	printf("���������ʮ������ʽ�ǣ�%d\n", c - d);
	printf("��������İ˽�����ʽ�ǣ�%o\n", c - d);
	printf("���������ʮ��������ʽ�ǣ�%x\n", c - d);
	cout << "��������������������������������" << endl << endl << endl;

	cout << "�����������������"<<endl;
	getchar();
	return;
}
void function3() {
	cout << "      �˷���������ʼ����" << endl << "��������������������������������" << endl;
	char a[10], b[10];
	InputBox(a, 10, "�����һ����");
	InputBox(b, 10, "����ڶ�����");
	closegraph();
	double c = 0.0;
	double d = 0.0;
	c = strtod(a, NULL);
	d = strtod(b, NULL);
	printf("�˷������С����ʽ�ǣ�%lf\n", c * d);
	printf("�˷������ָ����ʽ�ǣ�%e\n", c * d);
	cout << "��������������������������������" << endl << endl << endl;
	cout << "�����������������"<<endl;
	getchar();
	return;
}
void function4() {
	cout << "      ������������ʼ����" << endl << "��������������������������������" << endl;
	char a[10], b[10];
	InputBox(a, 10, "���뱻����");
	InputBox(b, 10, "�������");
	closegraph();
	double c = 0.0;
	double d = 0.0;
	c = strtod(a, NULL);
	d = strtod(b, NULL);
	if (d == 0)
	{
		printf("��������Ϊ0,�޷����г�������\n");
		return;
	}
	else {
		printf("���������С����ʽ�ǣ�%lf\n", c / d);
		printf("���������ָ����ʽ�ǣ�%e\n", c / d);
	}
	
	cout << "��������������������������������" << endl << endl << endl;

	cout << "�����������������"<<endl;
	getchar();
	return;
}
void function5() {

	return;
}