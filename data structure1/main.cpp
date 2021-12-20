// data structure1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include"Point2D.h"
#include"Shape2D.h"
#include <conio.h>
#include"test.h"
#include"Assistance.h"



using namespace std;
int main()
{

	cout << "输入整数类型数字或浮点类型的坐标点使得程序运行" << endl;
	int key = 0;
	while (key != '0')
	{
		cout << endl << "----------------------" << endl;
		cout << "1.---测试点" << endl
			<< "2.---测试二维图形 " << endl
			<< "0.---退出程序 " << endl;
		key = _getch();
		switch (key)
		{
		case '1':
		{
			test1();
			break;
		}

		case '2':
		{
			test2();
			break;
		}
		case '3':
		{
			//test3();
			break;
		}
		case '4':
		{
			//test4();
			break;
		}
		case'0':
		{
			cout << "正常退出" << endl;
			break;
		}
		default: cout << "输入异常导致退出重启" << endl;
			break;
		}
	}
	return 0;
}


