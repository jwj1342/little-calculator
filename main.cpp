#include <iostream>
#include<easyx.h>
#include"interface.h"
//#include "click.cpp"
using namespace std;

int main()
{
	while (true)
	{
		interface_main();
	}
	

	getchar();//保持显示
	closegraph();
	return 0;
}

