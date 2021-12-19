#include"Point2D.h"
#include<iostream>
using namespace std;
//构造函数
Point2D::Point2D(double a, double b)
{
	x = a;
	y = b;
}
Point2D::~Point2D()
{

}

void Point2D::Setpoint(double a, double b)
{
	x = a;
	y = b;
}

void Point2D::Showpoint()
{
	cout << "(" << x << "," << y << ")" << endl;
}

void Point2D::Calabs()
{
	double temp;
	temp = x * x + y * y;
	temp = sqrt(temp);
	cout << "向量的模长为：" << temp << endl;

}

Point2D Point2D::Caldirection()
{
	double temp;
	temp = x * x + y * y;
	temp = sqrt(temp);
	double a, b;
	a = x / temp;
	b = x / temp;
	Point2D s(a, b);
	return s;
}

double Point2D::Caldistance(const Point2D& t)
{
	double distance;
	distance = sqrt((x - t.x) * (x - t.x) + (y - t.y) * (y - t.y));
	return distance;
}

Point2D &Point2D::operator=(const Point2D& t)
{
	x = t.x;
	y = t.y;
	return *this;
}


ostream & operator<<(ostream& out, const Point2D& t)
{
	out << "(" << t.Getx()<< "," << t.Gety() << ")";
	return out;
}

istream& operator>>(istream& in,  Point2D& t)
{
	double x, y;
	cout << "输入x点坐标" << endl;
	in >> x;
	cout << "输入y点坐标" << endl;
	in >> y;
	t.Setpoint(x, y);
	return in;
	// TODO: 在此处插入 return 语句
}

bool operator!=(const Point2D& t1, const Point2D& t2)
{
	if (t1.x == t2.x && t1.y == t2.y)
		return false;
	else
	{
		return true;
	}
}
bool operator==(const Point2D& t1, const Point2D& t2)
{
	if (t1.Getx() == t2.Getx() && t1.Gety() == t2.Gety())
		return true;
	else
	{
		return false;
	}
}
