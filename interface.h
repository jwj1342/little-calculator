#pragma once
//#pragma once 并不是C++的原生语法，而是编译器的一种支持，所以并不是所有的编译器都能够支持。
//#ifndef 则为C++的标准。

#ifndef _FUNCTION_H

#define _FUNCTION_H


//ps.jwj终于在22.5.29 20：08搞懂了这两个关键字，救命，网上写的真令人迷糊

int banner_x, banner_y;//窗口大小定义
int jianju_x = 200, jianju_y = 100;//小按钮间距
int x = 100, y = 171;//小按钮起始

void bottom_top(int x, int y, int w, int h, const char* str, int zh);
void bottom(int x, int y, int w, int h, const char* str, int zh);
void banner_img();
void setallbox();
void get_mousemove();
void click(ExMessage move);

#endif
