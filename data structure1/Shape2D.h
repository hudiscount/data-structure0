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
	int getshapesize();//��ȡ����
	void modifyspace(int size);
	void modifypoint();// �޸ĵ�
	double calculatelength();//ֱ��
	double calculateslope();//ֱ��
	double calbanjing();//����Բ�İ뾶
	double calcperimeter();//����Բ���ܳ�
	double calcarea();//����Բ�����
	double caltriangleperimeter();//�����������ܳ�
	double caltrianglearea();//�������������
	double calrectanglearea();//����������
	double calrectchangkuanbi();//������γ����
	double calnormalarea();//����һ���������
	double calnormalzc();//����һ�������ܳ�
	bool isrectangle();
	Point2D calweight();//����ͼ������
	Point2D yuanweight();
	void modifyshapesize(int a);
	int flag = 0;
private:
	int shapesize;
	Point2D *p;
};

