#include<iostream>
#include <easyx.h>
#include<algorithm>
using namespace std;
void function16() {
	cout << "第16个程序" << endl;
	return;
}
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
	cout << "输出链表为：\n";
	p = head->next;
	while (p != NULL) {
		cout << p->data << " ";
		p = p->next;
	}
	cout << endl;
}
struct node* creat_link(int lenth) {
	node* head, * p, * pre;
	//用node 定义了三个指针变量
//	malloc方法：
//	head=pre=(struct node *)malloc(sizeof(struct node)) ;
//	new方法：
	head = pre = new node;
	//头结点；空链表建立
	head->next = NULL;
	//建立整个链表
	cout << "请输入原始链表，共"<<lenth<<"个数："<<endl;
	for (int i = 1; i <= lenth; i++) {
		int x;
		cin >> x;
		//p=(struct node *)malloc(sizeof(struct node) );
		p = new node;
		p->next = NULL;  //p总是指向新结点
		p->data = x;
		pre->next = p;
		pre = p;       //pre总是指向当前链表的表尾
	}
	return head;
}
void function17() {
	cout << "      动态链表创建器开始运行" << endl << "————————————————" << endl;
	char a[10];
	InputBox(a, 10, "输入原始链表长度");
	closegraph();
	int c = atoi(a);
	
	struct node* head;
	int place, x;
	bool back = false;
	head = creat_link(c);
	cout << endl;

	while (1) {
		cout << "请输入操作：" << endl;
		cout << "1.插入一个数" << endl;
		cout << "2.删除一个数" << endl;
		cout << "3.输出链表" << endl;
		cout << "4.退出该模式" << endl;
		int select;
		cout << "操作：";
		cin >> select;
		cout << endl;
		switch (select)
		{
		case 1:
			cout << "输入插入链表位置:";
			cin >> place;
			cout << "输入插入的数：";
			cin >> x;
			insert_link(head, place, x);
			break;
		case 2:
			cout << "输入删除链表的位置";
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

	cout << endl<<"————————————————" << endl << endl << endl;
	//system("pause");
	//cout << "按任意键返回主界面" << endl;
	//getchar();
	return;
}






struct node1 {//结构体排序
	int xh;
	char name[100];
	int grade;
}a[99];
bool cmp(struct node1 c, struct node1 d)//比较函数
	{
		if (c.grade< d.grade)
		{
			return true;
		}
		return false;
	}
void function18() {
	closegraph();
	cout << "      学生排序计算器开始运行" << endl << "————————————————"<<endl ;
	char a1[10];
	InputBox(a1, 10, "你想排序几个学生");
	int c = atoi(a1);
	//MessageBox(0, "请在命令行窗口输入学生的数据", "提示", MB_OK);
	
	for (int i = 1; i <= c; i++) {
		cout << "请输入第" << i << "个学生的学号:";
		cin >> a[i].xh;
		cout << "请输入第" << i << "个学生的姓名:";
		cin >> a[i].name;
		cout << "请输入第" << i << "个学生的成绩:";
		cin >> a[i].grade;
		cout << endl;
	}
	
	sort(a + 1, a + c+1,cmp);
	int sum = 0;
	for (int i = 1; i <= c; i++)
	{
		printf("学号:%d 姓名:%s 成绩:%d\n", a[i].xh, a[i].name, a[i].grade);
		sum += a[i].grade;
	}
	cout << "————————————————" << endl;
	printf("总成绩: %d\n", sum);
	printf("平均成绩: %.1lf\n", double(sum) / c);
	cout << "————————————————" << endl << endl << endl;
	system("pause");
	return;
}
void function19() {
	closegraph();
	cout << "      素数判断计算器开始运行" << endl << "————————————————" << endl;
	char a1[10];
	InputBox(a1, 10, "请输入素数");
	int x = atoi(a1);
	if (x == 2) {
		cout << x << "是素数"<<endl;
		cout << "————————————————" << endl << endl << endl;
		system("pause");
		return;
	}
	for (int i = 2; i <= sqrt(x); i++)
		if (x % i == 0) {
			cout << x << "不是素数"<<endl;
			cout << "————————————————" << endl << endl << endl;
			system("pause");
			return;
		}
	cout << x << "是素数"<<endl;
	cout << "————————————————" << endl << endl << endl;
	system("pause");
	return;
}
void function20() {
	cout << "第20个程序" << endl;
	return;
}