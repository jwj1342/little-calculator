#include<iostream>
#include <easyx.h>
using namespace std;

void function6() {
	cout << "      Բ�����������ʼ����" << endl << "��������������������������������" << endl;
	char a[10];
	InputBox(a, 10, "����Բ�İ뾶");
	closegraph();
	double r = 0.0, PI = 3.14159;;
	r = strtod(a, NULL);
	printf("Բ��������� %d\n", int(PI * r * r));
	printf("Բ�����%.6lf\n", PI * r * r);
	cout << "��������������������������������" << endl << endl << endl;

	cout << "�����������������" << endl;
	getchar();
	return;
}
void function7() {
	cout << "      �����������ʼ����" << endl << "��������������������������������" << endl;
	char a[10];
	InputBox(a, 10, "�������");
	closegraph();
	int c = atoi(a);
	if (c % 4 == 0 && c % 100 != 0 || c % 400 == 0) {
		cout <<c<< "��������" << endl;
	}
	else {
		cout << c << "�겻������" << endl;
	}
	cout << "��������������������������������" << endl << endl << endl;

	cout << "�����������������" << endl;
	getchar();
	return;
}
void function8() {
	cout << "      �ɼ�ת������ʼ����" << endl << "��������������������������������" << endl;
	char c[10];
	InputBox(c, 10, "����ɼ�");
	closegraph();
	int a = atoi(c);
	cout << "��ĳɼ��ǣ�";
	if (a < 0 || a>100) {
		cout << "�ɼ��������" << endl;
	}
	else if (a < 60) {
		cout << "������" << endl;
	}
	else if (a < 70) {
		cout << "����" << endl;
	}
	else if (a < 80) {
		cout << "��" << endl;
	}
	else if (a < 90) {
		cout << "��" << endl;
	}
	else {
		cout << "����" << endl;
	}
	cout << "��������������������������������" << endl << endl << endl;

	cout << "�����������������" << endl;
	getchar();
	return;
}
void function9() {
	cout << "      ˮ�ɻ�����������ʼ����" << endl << "��������������������������������" << endl;
	//char a[10];
	//InputBox(a, 10, "");
	closegraph();
	//int c = atoi(a);
	cout << "һǧ����ˮ�ɻ����У�";
	for (int i = 100; i <= 999; i++)
	{
		int a = i / 100;
		int c = i % 10;
		int b = i / 10 % 10;
		if (i == a * a * a + b * b * b + c * c * c)
			printf("%d ", i);
	}
	cout << endl;
	cout << "��������������������������������" << endl << endl << endl;

	cout << "�����������������" << endl;
	getchar();
	return;
}
void function10() {
	cout << "      ���ֵ��������ʼ����" << endl << "��������������������������������" << endl;
	char a[10],b[10];
	InputBox(a, 10, "�����һ����");
	InputBox(b, 10, "����ڶ�����");
	closegraph();
	double c = strtod(a, NULL);
	double d = strtod(b, NULL);
	c > d ? cout << "���ֵΪ" << c : cout << "���ֵΪ" << d;
	cout << endl;
	cout << "��������������������������������" << endl << endl << endl;

	cout << "�����������������" << endl;
	getchar();
	return;
}
