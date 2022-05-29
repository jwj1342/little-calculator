#include <iostream>
#include<easyx.h>
using namespace std;

//�����⼸�������������Ƕ���
extern int banner_x,banner_y;
extern int jianju_x,jianju_y;
extern int x,y ;



void bottom_top(int x, int y, int w, int h, const char* str, int zh) {
	setbkmode(TRANSPARENT);
	setfillcolor(RGB(136, 91, 96));
	fillroundrect(x, y, x + w, y + h, 10, 10);

	settextstyle(zh, 0, "΢���ź�");
	int tx = x + (w - textwidth(str)) / 2;
	int ty = y + (h - textheight(str)) / 2;

	outtextxy(tx, ty, str);
}
void bottom(int x, int y, int w, int h, const char* str, int zh) {
	setbkmode(TRANSPARENT);
	setfillcolor(RGB(237, 237, 237));
	fillroundrect(x, y, x + w, y + h, 10, 10);

	settextcolor(RGB(136, 91, 96));
	settextstyle(zh, 0, "����");
	int tx = x + (w - textwidth(str)) / 2;
	int ty = y + (h - textheight(str)) / 2;

	outtextxy(tx, ty, str);
}
void banner_img() {
	IMAGE banner;
	loadimage(&banner, "./img/banner.jpg", 1200, 660);
	//banner_x = banner.getwidth();
	//banner_y = banner.getheight();
	putimage(0, 0, &banner);
	IMAGE sign;
	loadimage(&sign, "./img/sign.jpg", 120, 66);
	//banner_x = banner.getwidth();
	//banner_y = banner.getheight();
	putimage(1080, 600, &sign);
}
void setallbox() {
	bottom(x, y, 150, 50, "�ӷ�", 20);
	bottom(x + jianju_x, y, 150, 50, "����", 20);
	bottom(x + jianju_x * 2, y, 150, 50, "�˷�", 20);
	bottom(x + jianju_x * 3, y, 150, 50, "����", 20);
	bottom(x + jianju_x * 4, y, 150, 50, "�ж����ֵ�λ��", 20);

	bottom(x, y + jianju_y, 150, 50, "����Բ���", 20);
	bottom(x + jianju_x, y + jianju_y, 150, 50, "�ж�����", 20);
	bottom(x + jianju_x * 2, y + jianju_y, 150, 50, "�ɼ�ת��", 20);
	bottom(x + jianju_x * 3, y + jianju_y, 150, 50, "��ˮ�ɻ���", 20);
	bottom(x + jianju_x * 4, y + jianju_y, 150, 50, "�����ֵ", 20);

	bottom(x, y + jianju_y * 2, 150, 50, "�������Сֵ", 20);
	bottom(x + jianju_x, y + jianju_y * 2, 150, 50, "ð������", 20);
	bottom(x + jianju_x * 2, y + jianju_y * 2, 150, 50, "����ת��", 20);
	bottom(x + jianju_x * 3, y + jianju_y * 2, 150, 50, "��Խ��ߺ�", 20);
	bottom(x + jianju_x * 4, y + jianju_y * 2, 150, 50, "ͳ�Ƶ��ʸ���", 20);

	bottom(x, y + jianju_y * 3, 150, 50, "��̬��������", 20);
	bottom(x + jianju_x, y + jianju_y * 3, 150, 50, "��̬��������", 20);
	bottom(x + jianju_x * 2, y + jianju_y * 3, 150, 50, "ѧ���ɼ�����", 20);
	bottom(x + jianju_x * 3, y + jianju_y * 3, 150, 50, "�ж�����", 20);
	bottom(x + jianju_x * 4, y + jianju_y * 3, 150, 50, "�ɼ���д", 20);

	bottom(x, y + jianju_y * 4, 250, 50, "��1�������������/ż����", 20);
	bottom(x + jianju_x * 2 - 50, y + jianju_y * 4, 270, 50, "��1��������֮������3�ı���", 20);
	bottom(x + jianju_x * 3 + 80, y + jianju_y * 4, 270, 50, "�󼴱�3�����ֱ�5��������", 20);

}
void get_mousemove() {
	ExMessage m;
	while (1) {
		m = getmessage(EM_MOUSE | EM_KEY);
		cout << m.x << "  " << m.y << endl;
	}
}