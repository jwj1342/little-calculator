#pragma once

#ifndef _FUNCTION_H

#define _FUNCTION_H

/*
��ؼ������ͣ�
https://zhuanlan.zhihu.com/p/95253745
https://www.cnblogs.com/rcgn/p/3203332.html
https://blog.csdn.net/qq_44934156/article/details/119729160
���֪ʶ�㣺
extern��
�ùؼ��ֵ���˼������˵���˱��������Ƕ����ڱ���ļ��еģ��ڴ��ļ������á�
Ĭ������£������Ͷ���һ������������һ��extern��ǰ׺������ζ���������Ͷ��庯��ʱ
ǰ�治дextern����Ҳ��Ĭ�ϴ��ڵġ�
���η�extern���ڱ������ߺ���������ǰ������˵�����˱���/�������ڱ𴦶���ģ�Ҫ�ڴ˴�����

static��
�ùؼ��ֵ���˼������˵���˱������������ٱ���ļ������ã�δ��static�ؼ��ֵ�
ȫ�ֱ����ͺ�������ȫ�ֿɼ��ԣ�����Դ�ļ���Ҳ�������á��������static�ؼ��֣�
�ͻ������Դ�ļ��������ء�
�ùؼ��ֻὫ����ķ�Χ����Ϊ��ǰ�����ļ����������������ļ��������Լ��ı���������
static ����ȫ�ֱ�����ʱ�����ȫ�ֱ���ֻ���ڱ��ļ��з��ʣ������������ļ��з��ʣ�
������ extern �ⲿ����Ҳ�����ԡ�

ps.jwj������22.5.29 20��08�㶮���������ؼ��֣�����������д���������Ժ�
*/

int banner_x, banner_y;//���ڴ�С����
int jianju_x = 200, jianju_y = 100;//С��ť���
int x = 100, y = 171;//С��ť��ʼ

void bottom_top(int x, int y, int w, int h, const char* str, int zh);
void bottom(int x, int y, int w, int h, const char* str, int zh);
void banner_img();
void setallbox();
void get_mousemove();
void function1();
void function2();
#endif
