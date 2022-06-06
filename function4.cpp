#include<iostream>
#include <easyx.h>
#include<algorithm>
using namespace std;

//���⿪ʼ�Ǿ�̬����ĳ���
int avi = 0;
struct node2 {
	int next = 0;
	int key = 0;
} aa[10000];
int find_end() {
	int num = 0;
	while (aa[num].next) {
		num = aa[num].next;
	}
	return num;
}
void insert_end(int x) {
	int now = find_end();
	avi++;
	aa[avi].key = x;
	aa[now].next = avi;
	//	cout<<"now="<<now<<" avi="<<avi<<" avi.next="<<a[now].next<<" avi.key"<<a[now].key<<endl; 
}
void del(int x) {
	//x����ֵ
	int now=0,pre;
	while (1) {
		
		if (aa[now].key == x) {
			aa[pre].next = aa[now].next;

			return;
		}
		pre = now;
		now = aa[now].next;
		
	}
}
void outout() {
	if (aa[0].next == 0)cout << "��ǰ����Ϊ��";
	int num = 1;
	while (aa[num].next) {
		cout << "��ǰ�ڵ��±�Ϊ��" << num << "��ǰ�ڵ�ĺ���±�:" << aa[num].next << "��ǰ�Ľڵ�ֵΪ" << aa[num].key << endl;
		num = aa[num].next;
	}
	cout << "���һ���ڵ�ֵ��" << aa[num].key;
	cout << endl;
}
void function16() {
	cout << "      ��̬����������ʼ����" << endl << "��������������������������������" << endl;
	char a[10];
	InputBox(a, 10, "����ԭʼ������");
	closegraph();
	int c = atoi(a);
	int place, x;
	bool back = false;
	cout << "������ԭʼ����";
	for (int i = 1; i <= c; i++) {
		int x;
		cin >> x;
		insert_end(x);
	}
	cout << endl;

	while (1) {
		cout << "�����������" << endl;
		cout << "1.β�˲���һ����" << endl;
		cout << "2.ɾ��һ����" << endl;
		cout << "3.�������" << endl;
		cout << "4.�˳���ģʽ" << endl;
		int select;
		cout << "������";
		cin >> select;
		cout << endl;
		switch (select)
		{
		case 1:
			//cout << "�����������λ��:";
			//cin >> place;
			cout << "����β�˲��������";
			cin >> x;
			insert_end(x);
			break;
		case 2:
			cout << "����ɾ���������ĸ���";
			cin >> x;
			del(x);
			break;
		case 3:
			outout();
			cout << endl;
			break;
		case 4:
			back = true;
			break;
		default:
			break;
		}
		if (back) break;
	}

	cout << endl << "��������������������������������" << endl << endl << endl;
	return;
}
//��̬������򵽴˽���

//���⿪ʼ�Ƕ�̬����ĳ���
struct node {
	int data;
	node* next;
};
struct node* creat_link();
void delete_link(struct node* head, int place) {
	struct node* p, * pre;
	int i;
	pre = head;
	for (i = 0; i < place - 1; i++)
		pre = pre->next;
	p = pre->next;
	pre->next = p->next;
	free(p);
}
void insert_link(struct node* head, int place, int x) {
	struct node* p, * pre;
	int i;
	pre = head;
	for (i = 0; i < place - 1; i++)
		pre = pre->next;  
	p = (struct node*)malloc(sizeof(struct node));
	p->data = x;
	p->next = pre->next;
	pre->next = p;
}
void output_link(struct node* head) {
	struct node* p;
	cout << "�������Ϊ��\n";
	p = head->next;
	while (p != NULL) {
		cout << p->data << " ";
		p = p->next;
	}
	cout << endl;
}
struct node* creat_link(int lenth) {
	node* head, * p, * pre;
	//��node ����������ָ�����
//	malloc������
//	head=pre=(struct node *)malloc(sizeof(struct node)) ;
//	new������
	head = pre = new node;
	//ͷ��㣻��������
	head->next = NULL;
	//������������
	cout << "������ԭʼ������"<<lenth<<"������"<<endl;
	for (int i = 1; i <= lenth; i++) {
		int x;
		cin >> x;
		//p=(struct node *)malloc(sizeof(struct node) );
		p = new node;
		p->next = NULL;  //p����ָ���½��
		p->data = x;
		pre->next = p;
		pre = p;       //pre����ָ��ǰ����ı�β
	}
	return head;
}
void function17() {
	cout << "      ��̬����������ʼ����" << endl << "��������������������������������" << endl;
	char a[10];
	InputBox(a, 10, "����ԭʼ������");
	closegraph();
	int c = atoi(a);
	
	struct node* head;
	int place, x;
	bool back = false;
	head = creat_link(c);
	cout << endl;

	while (1) {
		cout << "�����������" << endl;
		cout << "1.����һ����" << endl;
		cout << "2.ɾ��һ����" << endl;
		cout << "3.�������" << endl;
		cout << "4.�˳���ģʽ" << endl;
		int select;
		cout << "������";
		cin >> select;
		cout << endl;
		switch (select)
		{
		case 1:
			cout << "�����������λ��:";
			cin >> place;
			cout << "������������";
			cin >> x;
			insert_link(head, place, x);
			break;
		case 2:
			cout << "����ɾ�������λ��";
			cin >> place;
			delete_link(head, place);
			break;
		case 3:
			output_link(head);
			cout << endl;
			break;
		case 4:
			back = true;
			break;
		default:
			break;
		}
		if (back) break;
	}

	cout << endl<<"��������������������������������" << endl << endl << endl;
	//system("pause");
	//cout << "�����������������" << endl;
	//getchar();
	return;
}
//��̬������򵽴˽���

//ѧ������������Ӵ˿�ʼ
struct node1 {//�ṹ������
	int xh;
	char name[100];
	int grade;
}a[99];
bool cmp(struct node1 c, struct node1 d)//�ȽϺ���
	{
		if (c.grade< d.grade)
		{
			return true;
		}
		return false;
	}
void function18() {
	closegraph();
	cout << "      ѧ�������������ʼ����" << endl << "��������������������������������"<<endl ;
	char a1[10];
	InputBox(a1, 10, "�������򼸸�ѧ��");
	int c = atoi(a1);
	//MessageBox(0, "���������д�������ѧ��������", "��ʾ", MB_OK);
	
	for (int i = 1; i <= c; i++) {
		cout << "�������" << i << "��ѧ����ѧ��:";
		cin >> a[i].xh;
		cout << "�������" << i << "��ѧ��������:";
		cin >> a[i].name;
		cout << "�������" << i << "��ѧ���ĳɼ�:";
		cin >> a[i].grade;
		cout << endl;
	}
	
	sort(a + 1, a + c+1,cmp);
	int sum = 0;
	for (int i = 1; i <= c; i++)
	{
		printf("ѧ��:%d ����:%s �ɼ�:%d\n", a[i].xh, a[i].name, a[i].grade);
		sum += a[i].grade;
	}
	cout << "��������������������������������" << endl;
	printf("�ܳɼ�: %d\n", sum);
	printf("ƽ���ɼ�: %.1lf\n", double(sum) / c);
	cout << "��������������������������������" << endl << endl << endl;
	system("pause");
	return;
}
//ѧ��������������˽���

void function19() {
	closegraph();
	cout << "      �����жϼ�������ʼ����" << endl << "��������������������������������" << endl;
	char a1[10];
	InputBox(a1, 10, "����������");
	int x = atoi(a1);
	if (x == 2) {
		cout << x << "������"<<endl;
		cout << "��������������������������������" << endl << endl << endl;
		system("pause");
		return;
	}
	for (int i = 2; i <= sqrt(x); i++)
		if (x % i == 0) {
			cout << x << "��������"<<endl;
			cout << "��������������������������������" << endl << endl << endl;
			system("pause");
			return;
		}
	cout << x << "������"<<endl;
	cout << "��������������������������������" << endl << endl << endl;
	system("pause");
	return;
}

void function20() {
	
}