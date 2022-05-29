#pragma once

#ifndef _FUNCTION_H

#define _FUNCTION_H

/*
相关技术博客：
https://zhuanlan.zhihu.com/p/95253745
https://www.cnblogs.com/rcgn/p/3203332.html
https://blog.csdn.net/qq_44934156/article/details/119729160
相关知识点：
extern：
该关键字的意思是用来说明此变量或函数是定义在别的文件中的，在此文件中引用。
默认情况下，声明和定义一个函数，都有一个extern的前缀，这意味着在声明和定义函数时
前面不写extern，它也是默认存在的。
修饰符extern用在变量或者函数的声明前，用来说明“此变量/函数是在别处定义的，要在此处引用

static：
该关键字的意思是用来说明此变量或函数不能再别的文件中引用，未加static关键字的
全局变量和函数具有全局可见性，其他源文件中也可以引用。如果加上static关键字，
就会对其他源文件进行隐藏。
该关键字会将定义的范围限制为当前对象文件，并允许多个对象文件具有其自己的变量副本。
static 修饰全局变量的时候，这个全局变量只能在本文件中访问，不能在其它文件中访问，
即便是 extern 外部声明也不可以。

ps.jwj终于在22.5.29 20：08搞懂了这两个关键字，救命，网上写的真令人迷糊
*/

int banner_x, banner_y;//窗口大小定义
int jianju_x = 200, jianju_y = 100;//小按钮间距
int x = 100, y = 171;//小按钮起始

void bottom_top(int x, int y, int w, int h, const char* str, int zh);
void bottom(int x, int y, int w, int h, const char* str, int zh);
void banner_img();
void setallbox();
void get_mousemove();
void function1();
void function2();
#endif
