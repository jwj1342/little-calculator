#include <iostream>
#include<easyx.h>
using namespace std;

//引用这几个变量，而不是定义
extern int banner_x,banner_y;
extern int jianju_x,jianju_y;
extern int x,y ;



void bottom_top(int x, int y, int w, int h, const char* str, int zh) {
	setbkmode(TRANSPARENT);
	setfillcolor(RGB(136, 91, 96));
	fillroundrect(x, y, x + w, y + h, 10, 10);

	settextstyle(zh, 0, "微软雅黑");
	int tx = x + (w - textwidth(str)) / 2;
	int ty = y + (h - textheight(str)) / 2;

	outtextxy(tx, ty, str);
}
void bottom(int x, int y, int w, int h, const char* str, int zh) {
	setbkmode(TRANSPARENT);
	setfillcolor(RGB(237, 237, 237));
	fillroundrect(x, y, x + w, y + h, 10, 10);

	settextcolor(RGB(136, 91, 96));
	settextstyle(zh, 0, "黑体");
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
	bottom(x, y, 150, 50, "加法", 20);
	bottom(x + jianju_x, y, 150, 50, "减法", 20);
	bottom(x + jianju_x * 2, y, 150, 50, "乘法", 20);
	bottom(x + jianju_x * 3, y, 150, 50, "除法", 20);
	bottom(x + jianju_x * 4, y, 150, 50, "判断数字的位数", 20);

	bottom(x, y + jianju_y, 150, 50, "计算圆面积", 20);
	bottom(x + jianju_x, y + jianju_y, 150, 50, "判断闰年", 20);
	bottom(x + jianju_x * 2, y + jianju_y, 150, 50, "成绩转换", 20);
	bottom(x + jianju_x * 3, y + jianju_y, 150, 50, "求水仙花数", 20);
	bottom(x + jianju_x * 4, y + jianju_y, 150, 50, "求最大值", 20);

	bottom(x, y + jianju_y * 2, 150, 50, "求最大最小值", 20);
	bottom(x + jianju_x, y + jianju_y * 2, 150, 50, "冒泡排序", 20);
	bottom(x + jianju_x * 2, y + jianju_y * 2, 150, 50, "矩阵转置", 20);
	bottom(x + jianju_x * 3, y + jianju_y * 2, 150, 50, "求对角线和", 20);
	bottom(x + jianju_x * 4, y + jianju_y * 2, 150, 50, "统计单词个数", 20);

	bottom(x, y + jianju_y * 3, 150, 50, "静态创建链表", 20);
	bottom(x + jianju_x, y + jianju_y * 3, 150, 50, "动态创建链表", 20);
	bottom(x + jianju_x * 2, y + jianju_y * 3, 150, 50, "学生成绩排序", 20);
	bottom(x + jianju_x * 3, y + jianju_y * 3, 150, 50, "判断素数", 20);
	bottom(x + jianju_x * 4, y + jianju_y * 3, 150, 50, "成绩读写", 20);

	bottom(x, y + jianju_y * 4, 250, 50, "从1到输入数间的奇/偶数和", 20);
	bottom(x + jianju_x * 2 - 50, y + jianju_y * 4, 270, 50, "从1到输入数之间所有3的倍数", 20);
	bottom(x + jianju_x * 3 + 80, y + jianju_y * 4, 270, 50, "求即被3整除又被5整除的数", 20);

}
void get_mousemove() {
	ExMessage m;
	while (1) {
		m = getmessage(EM_MOUSE | EM_KEY);
		cout << m.x << "  " << m.y << endl;
	}
}