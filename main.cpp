#include <iostream>
#include<easyx.h>
#include"function.h"
using namespace std;

int main()
{
	initgraph(1200, 660, EW_SHOWCONSOLE);// 初始化图形窗口
	banner_img();//图形窗口的图片加载
	bottom_top(430, 30, 300, 100, "cpp学期大作业", 40);//标题加载
	setallbox();//每个按钮盒子设计
	//get_mousemove();//鼠标焦点位置获取
	ExMessage move;//用来接受鼠标变量
	while (true) {
		move = getmessage(EM_MOUSE | EM_KEY);
		switch (move.message)
		{
		case WM_LBUTTONDOWN:
			if (move.x >= x && move.x <= x + 150 && move.y >= y && move.y <= y + 50) {
				function1();
			}
			if (move.x >= x + jianju_x && move.x <= x + jianju_x + 150 && move.y >= y && move.y <= y + 50) {
				function2();
			}
			break;

		case WM_KEYDOWN:// 按 ESC 键退出程序
			if (move.vkcode == VK_ESCAPE)
				return 0;	
		default:
			break;
		}


	}
	/*
	ExMessage m;
	while (false)
	{
		// 获取一条鼠标或按键消息
		m = getmessage(EM_MOUSE | EM_KEY);

		switch (m.message)
		{
		case WM_MOUSEMOVE:
			// 鼠标移动的时候画红色的小点
			putpixel(m.x, m.y, RED);
			break;

		case WM_LBUTTONDOWN:
			// 如果点左键的同时按下了 Ctrl 键
			if (m.ctrl)
				// 画一个大方块
				rectangle(m.x - 10, m.y - 10, m.x + 10, m.y + 10);
			else
				// 画一个小方块
				rectangle(m.x - 5, m.y - 5, m.x + 5, m.y + 5);
			break;

		case WM_KEYDOWN:
			if (m.vkcode == VK_ESCAPE)
				return 0;	// 按 ESC 键退出程序
		}
	}
	*/


	getchar();//保持显示
	closegraph();
	return 0;
}

