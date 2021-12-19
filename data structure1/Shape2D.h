#pragma once
#include"Point2D.h"
#include"math.h"
#define PI acos(-1)
class Shape2D
{
public:
	Shape2D(int shapesize=0);
	~Shape2D();
	void judge();
	int getshapesize();//获取点数
	void modifyspace(int size);
	void modifypoint();// 修改点
	double calculatelength();//直线
	double calculateslope();//直线
	double calbanjing();//计算圆的半径
	double calcperimeter();//计算圆的周长
	double calcarea();//计算圆的面积
	double caltriangleperimeter();//计算三角形周长
	double caltrianglearea();//计算三角形面积
	double calrectanglearea();//计算矩形面积
	double calrectchangkuanbi();//计算矩形长宽比
	double calnormalarea();//计算一般多边形面积
	double calnormalzc();//计算一般多边形周长
	bool isrectangle();
	Point2D calweight();//计算图形重心
	Point2D yuanweight();
	void modifyshapesize(int a);
	int flag = 0;
private:
	int shapesize;
	Point2D *p;
};

