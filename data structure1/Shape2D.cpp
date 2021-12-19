#include"Shape2D.h"
Shape2D::Shape2D(int size)
{
	shapesize = size;
	p = new Point2D[shapesize];
}

Shape2D::~Shape2D()
{
	if (p != NULL)
	{
		delete []p;
	}
}


void Shape2D::modifypoint()
{
	Point2D x;
	for (int i = 0; i < shapesize; i++) {
		cin >> x;
		p[i] = x;
	}

	
}

double Shape2D::calculatelength()
{
	double a=p[0].Caldistance(p[1]);
	return a;
}

double Shape2D::calculateslope()
{
	double slope;
	slope = (p[0].Gety() - p[1].Gety()) / (p[0].Getx() - p[1].Getx());
	return slope;
}

double Shape2D::calbanjing()
{
	double r=calculatelength();
	return r;
}



double Shape2D::calcperimeter()
{
	double perimeter;
	perimeter = 2 * PI * calbanjing();
	return perimeter;
}

double Shape2D::calcarea()
{
	double area;
	area = PI * calbanjing() * calbanjing();
	return area;
}

double Shape2D::caltriangleperimeter()
{
	double x12, x13, x23;
	x12 = p[0].Caldistance(p[1]);
	x13 = p[0].Caldistance(p[2]);
	x23 = p[1].Caldistance(p[2]);
	double c = x12 + x13 + x23;
	return c;
}

double Shape2D::caltrianglearea()
{
	double x12, x13, x23;
	x12 = p[0].Caldistance(p[1]);
	x13 = p[0].Caldistance(p[2]);
	x23 = p[1].Caldistance(p[2]);
	double p = (x12 + x13 + x23)/2;
	double S = sqrt(p * (p - x12) * (p - x13) * (p - x23));
	return S;
}

double Shape2D::calrectanglearea()
{
	double S=calnormalarea();
	return S;
}

double Shape2D::calrectchangkuanbi()
{
	double bili;
	double x12, x13;
	x12 = p[0].Caldistance(p[1]);
	x13 = p[0].Caldistance(p[2]);
	if (x12 > x13)
		bili = x12 / x13;
	else
	{
		bili = x13 / x12;
	}
	return bili;
}

double Shape2D::calnormalarea()
{
	int dianshu = shapesize;
	double S = 0;
	for (int i = 0; i <dianshu-1; i++)
	{
		S = S + p[i].Getx() * p[i + 1].Gety() - p[i + 1].Getx() * p[i].Gety();
	}
	S = S + p[dianshu - 1].Getx() * p[0].Gety() - p[0].Getx() * p[dianshu - 1].Gety();
	S = abs(S) * 0.5;
	return S;
}

double Shape2D::calnormalzc()
{
	double s=0;
	for (int i = 0; i < shapesize-1; i++)
	{
		s = s + p[i].Caldistance(p[i + 1]);
	}
	s = s + p[shapesize - 1].Caldistance(p[0]);
	return s;
}

bool Shape2D::isrectangle()
{
	double x1 = p[0].Getx();
	double x2 = p[1].Getx();
	double x3 = p[2].Getx();
	double y1 = p[0].Gety();
	double y2 = p[1].Gety();
	double y3 = p[2].Gety();
	double x12 = x1 - x2;
	double x13 = x1 - x3;
	double x23 = x2 - x3;
	double y12 = y1 - y2;
	double y13 = y1 - y3;
	double y23 = y2 - y3;
	if ((x12 * x13 + y12 * y13) == 0 || (x12 * x23 + y12 * y23) == 0)
		return true;
	else return false;
}

Point2D Shape2D::calweight()
{
	double sumx=0, sumy=0;
	for (int i = 0; i < shapesize; i++)
	{
		sumx = sumx + p[i].Getx();
		sumy = sumy + p[i].Gety();
	}
	sumx = sumx / shapesize;
	sumy = sumy / shapesize;
	Point2D a (sumx, sumy);
	return a;
}

Point2D Shape2D::yuanweight()
{
	Point2D a(p[0].Getx(), p[0].Gety());
	return a;
}

void Shape2D::modifyshapesize(int a)
{
	shapesize = a;
}

void Shape2D::judge()
{

}

int Shape2D::getshapesize()
{
	int a = shapesize;
	return a;
}

void Shape2D::modifyspace(int size)
{
	if (p != NULL)
	{
		delete []p;
	}
	if(size!=0)
	{ 
		p = new Point2D[size];
	}
	if (size == 0)
		p = NULL;
	
}


