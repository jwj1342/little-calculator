#include<iostream>
#include<easyx.h>
#include "function.h"
using namespace std;
static int banner_x, banner_y;//���ڴ�С����
static int jianju_x = 200, jianju_y = 100;//С��ť���
static int x = 100, y = 171;//С��ť��ʼ
void click(ExMessage move) {
	if (move.x >= x && move.x <= x + 150 && move.y >= y && move.y <= y + 50) {
		function1();
	}
	if (move.x >= x + jianju_x && move.x <= x + jianju_x + 150 && move.y >= y && move.y <= y + 50) {
		function2();
	}
}