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
	cout << "      MAX&MIN��������ʼ����" << endl << "��������������������������������" << endl;
	char a[10], b[10];
	InputBox(a, 10, "��һ����");
	InputBox(b, 10, "�ڶ�����");
	int c = atoi(a);
	int d = atoi(b);
	closegraph();
	
	maxmin(c, d);
	printf("���ֵ��%d ��Сֵ��%d\n", c, d);
	cout << "�ü�����������һ�������������ĺ���"<<endl;
	cout << "�ú���������������������ֵ����Сֵ"<<endl;
	cout << "ʹ�õ�һ������������ֵ���ڶ������������Сֵ��" << endl;
	cout << "��������������������������������" << endl << endl << endl;
	cout << "�����������������" << endl;
	getchar();
	return;
}

void function12() {
	//cout << "��12������" << endl;
	closegraph();
	cout << "      ð�������������ʼ����" << endl << "��������������������������������" << endl;
	MessageBox(0, "���������д�������ʮ����", "��ʾ", MB_OK);
	int a[11] = {};
	for (int i = 1; i <= 10; i++)
		cin>>a[i];
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 10 - i; j++)
			if (a[j] > a[j + 1])
				swap(a[j], a[j + 1]);
	}
	cout << "�����" << endl;
	for (int i = 1; i <= 10; i++)
		cout<< a[i]<<" ";
	cout << endl;
	cout << "��������������������������������" << endl << endl << endl;
	//cout << "�����������������" << endl;
	//����ط���getchar�������񲻿����ˡ���֪��Ϊɶ
	system("pause");
	return;
}
void function13() {
	cout << "    ����ת�ü�������ʼ����" << endl << "��������������������������������" << endl;
	//MessageBox(0, "���������д�������ʮ����", "��ʾ", MB_OK);
	char a1[10], b[10];
	InputBox(a1, 10, "��������������");
	InputBox(b, 10, "��������������");
	closegraph();
	int c = atoi(a1);
	int d = atoi(b);
	int a[100][100] = {};
	cout << "������һ��" << c << "��" << d << "�еľ���" << endl;
	cout << "ת��ǰ��" << endl;
	for (int i = 1; i <= c; i++)
	{
		for (int j = 1; j <= d; j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"ת�ú�:"<<endl;
	for (int j = 1; j <= d; j++)
	{
		for (int i = 1; i <= c; i++)
		{
			cout<< a[i][j]<<" ";
		}
		cout << endl;
	}
	cout << "��������������������������������" << endl << endl << endl;
	//cout << "�����������������" << endl;
	//����ط���getchar�������񲻿����ˡ���֪��Ϊɶ
	system("pause");
	return;
}
void function14() {
	cout << "    ����Խ��߼�������ʼ����" << endl << "��������������������������������" << endl;
	//MessageBox(0, "���������д�������ʮ����", "��ʾ", MB_OK);
	char  b[10];
	InputBox(b, 10, "�����뷽��Ľ���");
	closegraph();
	int d = atoi(b);
	int a[100][100] = {};
	cout << "������һ��"  << d << "�׵ľ���" << endl;
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
	cout << "���Խ���֮��Ϊ��" << sum<<endl;
	cout << "���Խ���֮��Ϊ��" << sum1 << endl;
	cout << "��������������������������������" << endl << endl << endl;
	//cout << "�����������������" << endl;
	//����ط���getchar�������񲻿����ˡ���֪��Ϊɶ
	system("pause");
	return;
}
void function15() {
	cout << "    ͳ�Ƶ��ʼ�������ʼ����" << endl << "��������������������������������" << endl;
	char  b[81];
	InputBox(b, 81, "�����뵥��");
	closegraph();
	int count = 0;
	cout << "����ĵ���Ϊ��";
	for (int i = 0; i <= 81; i++) {
		if (b[i] >='A'&&b[i]<='z') {
			cout << b[i];
			count++;
		}
	}
	cout <<endl<< "���ʵĸ���Ϊ" << count << endl;
	
	cout << "��������������������������������" << endl << endl << endl;
	system("pause");
	return;
}