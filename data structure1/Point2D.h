#pragma once
#include<iostream>
using namespace std;
class Point2D
{
public:
	Point2D(double = 0, double = 0);
	~Point2D();
	void Setpoint(double a, double b);
	double Getx()const {return x;}
	double Gety()const { return y; }
	void Showpoint();
	void Calabs();        //计算模长			
	Point2D Caldirection();  //计算方向向量			
	double Caldistance(const Point2D& t);  //计算两点间距离

	friend ostream & operator<<(ostream& out, const Point2D& t);
	friend istream & operator>>(istream& in,  Point2D& t);
	Point2D &operator=(const Point2D& t);
	friend bool operator!=(const Point2D& t1, const Point2D& t2);
	friend bool operator==(const Point2D& t1, const Point2D& t2);
private:
	double x, y;
};
