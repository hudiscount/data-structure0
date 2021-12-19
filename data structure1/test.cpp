#include <iostream>
#include"Point2D.h"
#include"Shape2D.h"
#include <conio.h>
#include "test.h"

void test1()
{
	cout << "测试Point2D点" << endl;
	Point2D a(0, 0);
	Point2D b(0, 0);

	int key = 0;
	while (key != '0')
	{
		cout << endl << "----------------------" << endl;
		cout << "1.---获取当前点的坐标(默认（0，0））" << endl
			<< "2.---设置当前点的坐标 " << endl
			<< "3.---获取另一点的坐标(默认（0，0））" << endl
			<< "4.---设置另一点的坐标 " << endl
			<< "5.---计算模长" << endl
			<< "6.---计算方向向量" << endl
			<< "7.---计算两点间的距离" << endl
			<< "0.---退出点的测试" << endl;
		key = _getch();
		switch (key)
		{
		case '1':
		{
			a.Showpoint();
			break;
		}

		case '2':
		{
			double x, y;
			cout << "请输入修改的坐标x的值:" << endl;
			cin >> x;
			cout << "请输入修改的坐标y的值:" << endl;
			cin >> y;
			a.Setpoint(x, y);
			break;
		}
		case '3':
		{
			b.Showpoint();
			break;
		}

		case '4':
		{
			cout << "修改另一点的坐标" << endl;
			cin >> b;
			break;
		}
		case '5':
		{
			a.Calabs();
			break;
		}
		case'6':
		{
			Point2D c = a.Caldirection();
			cout << "该点的方向向量为：" << c << endl;
			break;
		}
		case'7':
		{
			double s = a.Caldistance(b);
			cout << "两点间的距离为:" << s << endl;
			break;
		}
		case'0':
		{
			cout << "正常退出" << endl;
			break;
		}
		default: 
			cout << "输入异常导致退出重启" << endl;
			break;
		}
	}
}

void test2()
{
	cout << "测试Shape2D类" << endl;
	Shape2D shape;
	int key1 = 0;
	while (key1 != '0')
	{
		cout << endl << "----------------------" << endl;
		cout << "1.---根据图形类型和一组二维点构造Shape2D对象" << endl
			<< "2.---判断当前图形类型 " << endl
			<< "3.---计算图形相应特征" << endl
			<< "4.---计算二维图形的重心坐标 " << endl
			<< "5.---重置二维图形 " << endl
			<< "0.---退出二维图形的测试" << endl;
		key1 = _getch();
		switch (key1)
		{
		case '1':
		{
			int size;
			cout << "请输入构造图形的点的数量：" << endl;
			cout << "直线线段：2" << endl;
			cout << "三角形：3" << endl;
			cout << "一般n边形：n" << endl;
			cout << "圆：1（默认第一个点为圆心坐标、第二个点为圆上坐标）" << endl;
			cin >> size;
			if (size == 1) {
				shape.flag = 1;
				size++;
			}
			shape.modifyspace(size);
			shape.modifyshapesize(size);
			shape.modifypoint();
			cout << "构造成功" << endl;
			break;
		}
		case'2':
		{
			cout << "当前图形类型是：";
			if (shape.flag == 0 && shape.getshapesize() == 2)
				cout << "直线" << endl;
			else if (shape.flag == 0 && shape.getshapesize() == 3)
			{
				cout << "三角形" << endl;
			}
			else if (shape.flag == 0 && shape.isrectangle() == 1)
			{
				cout << "矩形" << endl;
			}
			else if (shape.flag == 1 && shape.getshapesize() == 2)
			{
				cout << "圆形" << endl;
			}
			else
			{
				cout << shape.getshapesize() << "边形" << endl;
			}
			break;
		}

		case'3':
		{
			if (shape.flag == 0 && shape.getshapesize() == 2)
			{
				double len = shape.calculatelength();
				cout << "线段的长度为" << len << endl;
			}
			else if (shape.flag == 0 && shape.getshapesize() == 3)
			{
				double a = shape.caltrianglearea();
				double b = shape.caltriangleperimeter();
				cout << "三角形的周长：" << b << endl;
				cout << "三角形的面积：" << a << endl;
			}
			else if (shape.flag == 0 && shape.isrectangle() == 1)
			{
				double a = shape.calrectanglearea();
				double b = shape.calrectchangkuanbi();
				cout << "矩形的面积：" << a << endl;
				cout << "矩形的长宽比：" << b << endl;
			}
			else if (shape.flag == 1 && shape.getshapesize() == 2)
			{
				double a = shape.calcperimeter();
				double b = shape.calcarea();
				cout << "圆形的周长：" << a << endl;
				cout << "圆形的面积：" << b << endl;
			}
			else
			{
				cout << shape.getshapesize() << "边形" << endl;
				double s = shape.calnormalarea();
				double c = shape.calnormalzc();
				cout << shape.getshapesize() << "边形" << "的面积为:" << s << endl;
				cout << shape.getshapesize() << "边形" << "的周长为:" << c << endl;
			}
			break;
		}
		case'4':
		{
			cout << "二维图形的重心坐标为：" << endl;
			if (shape.flag == 0)
				cout << shape.calweight() << endl;
			else if (shape.flag == 1)
				cout << shape.yuanweight() << endl;
			break;
		}
		case'5':
		{
			cout << "重置二维图形" << endl;
			shape.modifyspace(0);
			shape.modifyshapesize(0);
			break;
		}
		case'0':
		{
			break;
		}


		default: cout << "输入异常导致退出重启" << endl;
			break;
		}
	}
}



