
#include <iostream>
#include<easyx.h>
#include "function.h"
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
	/*
	LOGFONT f;//������ʽָ��
	gettextstyle(&f);					//��ȡ������ʽ
	f.lfQuality = ANTIALIASED_QUALITY;    //�������Ч��Ϊ�����					//���������С
	settextstyle(&f);

	��ʵ֤�������˿���ݻ����粻������Ц��
	*/

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
void click(ExMessage move) {
	if (move.x >= x && move.x <= x + 150 && move.y >= y && move.y <= y + 50) {
		function1();
		return;
	}
	if (move.x >= x + jianju_x && move.x <= x + jianju_x + 150 && move.y >= y && move.y <= y + 50) {
		function2();
		return;
	}
	if (move.x >= x + jianju_x * 2 && move.x <= x + x + jianju_x * 2 + 150 && move.y >= y && move.y <= y + 50) {
		function3();
		return;
	}
	if (move.x >= x + jianju_x * 3 && move.x <= x + x + jianju_x * 3 + 150 && move.y >= y && move.y <= y + 50) {
		function4();
	}

}

void interface_main() {
	initgraph(1200, 660, EW_SHOWCONSOLE);// ��ʼ��ͼ�δ���
	banner_img();//ͼ�δ��ڵ�ͼƬ����
	bottom_top(430, 30, 300, 100, "cppѧ�ڴ���ҵ", 40);//�������
	setallbox();//ÿ����ť�������
	//get_mousemove();//��꽹��λ�û�ȡ
	ExMessage move;//��������������
	while (true) {
		move = getmessage(EM_MOUSE | EM_KEY);
		switch (move.message)
		{
		case WM_LBUTTONDOWN:
			click(move);
			//cout << "�ұ������������" << endl;
			return;

		/*
		case WM_KEYDOWN:// �� ESC ���˳�����
			if (move.vkcode == VK_ESCAPE)
				return;
		*/
		default:
			break;
		}
	}

}


