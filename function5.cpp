#include<iostream>
#include <easyx.h>
using namespace std;
void function21() {
	cout << "      ��ż����������ʼ����" << endl << "��������������������������������" << endl;
	char a[10];
	InputBox(a, 10, "������ֹ����");
	closegraph();
	int c = atoi(a);
	bool check = false;
	int sum = 0;
	if (c % 2 == 0) {//����������Ϊż����t����������
		c--;
		check = true;
	}
		
	for (int i = 1; i <= c; i += 2)
		sum += i;
	cout << "1��" << c << "����֮��������Ϊ" << sum<<endl;

	if (check) c++;//��c��ԭ
	check = false;
	if (c % 2 != 0) {//Ϊ����������ż��
		c--;
		check = true;
	}
	sum = 0;//��ԭsum
	int i = 2;
	while (i <= c)
	{
		sum += i;
		i += 2;
	}
	if (check)c++;
	cout << "1��" << c << "����֮��ż����Ϊ" << sum << endl;

	cout << "��������������������������������" << endl << endl << endl;
	cout << "�����������������" << endl;
	getchar();
	return;
}
void function22() {
	cout << "      3�ı�����������ʼ����" << endl << "��������������������������������" << endl;
	char a[10];
	InputBox(a, 10, "������ֹ����");
	closegraph();
	int c = atoi(a);
	cout << "��1��" << c << "֮����������ı����ǣ�" << endl;
	int i = 0;
	do {
		i++;
		if (i % 3 == 0) {
			cout << i << " ";
		}
	} while (i <= c);

	cout <<endl<< "��������������������������������" << endl << endl << endl;
	cout << "�����������������" << endl;
	getchar();
	return;
}
void function23() {
	cout << "      3&5������������ʼ����" << endl << "��������������������������������" << endl;
	char a[10],b[10];
	InputBox(a, 10, "������ʼ����");
	InputBox(b, 10, "������ֹ����");
	closegraph();
	int c = atoi(a);
	int d = atoi(b);
	printf("�����ڼȱ�3�����ֱ�5����������:\n");
	for (int i = c; i <= d; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("%d ", i);
	}
	cout <<endl<< "��������������������������������" << endl << endl << endl;

	cout << "�����������������" << endl;
	getchar();
	return;
}