#pragma once
//#pragma once ������C++��ԭ���﷨�����Ǳ�������һ��֧�֣����Բ��������еı��������ܹ�֧�֡�
//#ifndef ��ΪC++�ı�׼��

#ifndef _FUNCTION_H

#define _FUNCTION_H


//ps.jwj������22.5.29 20��08�㶮���������ؼ��֣�����������д���������Ժ�

int banner_x, banner_y;//���ڴ�С����
int jianju_x = 200, jianju_y = 100;//С��ť���
int x = 100, y = 171;//С��ť��ʼ

void bottom_top(int x, int y, int w, int h, const char* str, int zh);
void bottom(int x, int y, int w, int h, const char* str, int zh);
void banner_img();
void setallbox();
void get_mousemove();
void click(ExMessage move);

#endif
