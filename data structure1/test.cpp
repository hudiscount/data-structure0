#include <iostream>
#include"Point2D.h"
#include"Shape2D.h"
#include <conio.h>
#include "test.h"

void test1()
{
	cout << "����Point2D��" << endl;
	Point2D a(0, 0);
	Point2D b(0, 0);

	int key = 0;
	while (key != '0')
	{
		cout << endl << "----------------------" << endl;
		cout << "1.---��ȡ��ǰ�������(Ĭ�ϣ�0��0����" << endl
			<< "2.---���õ�ǰ������� " << endl
			<< "3.---��ȡ��һ�������(Ĭ�ϣ�0��0����" << endl
			<< "4.---������һ������� " << endl
			<< "5.---����ģ��" << endl
			<< "6.---���㷽������" << endl
			<< "7.---���������ľ���" << endl
			<< "0.---�˳���Ĳ���" << endl;
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
			cout << "�������޸ĵ�����x��ֵ:" << endl;
			cin >> x;
			cout << "�������޸ĵ�����y��ֵ:" << endl;
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
			cout << "�޸���һ�������" << endl;
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
			cout << "�õ�ķ�������Ϊ��" << c << endl;
			break;
		}
		case'7':
		{
			double s = a.Caldistance(b);
			cout << "�����ľ���Ϊ:" << s << endl;
			break;
		}
		case'0':
		{
			cout << "�����˳�" << endl;
			break;
		}
		default: 
			cout << "�����쳣�����˳�����" << endl;
			break;
		}
	}
}

void test2()
{
	cout << "����Shape2D��" << endl;
	Shape2D shape;
	int key1 = 0;
	while (key1 != '0')
	{
		cout << endl << "----------------------" << endl;
		cout << "1.---����ͼ�����ͺ�һ���ά�㹹��Shape2D����" << endl
			<< "2.---�жϵ�ǰͼ������ " << endl
			<< "3.---����ͼ����Ӧ����" << endl
			<< "4.---�����άͼ�ε��������� " << endl
			<< "5.---���ö�άͼ�� " << endl
			<< "0.---�˳���άͼ�εĲ���" << endl;
		key1 = _getch();
		switch (key1)
		{
		case '1':
		{
			int size;
			cout << "�����빹��ͼ�εĵ��������" << endl;
			cout << "ֱ���߶Σ�2" << endl;
			cout << "�����Σ�3" << endl;
			cout << "һ��n���Σ�n" << endl;
			cout << "Բ��1��Ĭ�ϵ�һ����ΪԲ�����ꡢ�ڶ�����ΪԲ�����꣩" << endl;
			cin >> size;
			if (size == 1) {
				shape.flag = 1;
				size++;
			}
			shape.modifyspace(size);
			shape.modifyshapesize(size);
			shape.modifypoint();
			cout << "����ɹ�" << endl;
			break;
		}
		case'2':
		{
			cout << "��ǰͼ�������ǣ�";
			if (shape.flag == 0 && shape.getshapesize() == 2)
				cout << "ֱ��" << endl;
			else if (shape.flag == 0 && shape.getshapesize() == 3)
			{
				cout << "������" << endl;
			}
			else if (shape.flag == 0 && shape.isrectangle() == 1)
			{
				cout << "����" << endl;
			}
			else if (shape.flag == 1 && shape.getshapesize() == 2)
			{
				cout << "Բ��" << endl;
			}
			else
			{
				cout << shape.getshapesize() << "����" << endl;
			}
			break;
		}

		case'3':
		{
			if (shape.flag == 0 && shape.getshapesize() == 2)
			{
				double len = shape.calculatelength();
				cout << "�߶εĳ���Ϊ" << len << endl;
			}
			else if (shape.flag == 0 && shape.getshapesize() == 3)
			{
				double a = shape.caltrianglearea();
				double b = shape.caltriangleperimeter();
				cout << "�����ε��ܳ���" << b << endl;
				cout << "�����ε������" << a << endl;
			}
			else if (shape.flag == 0 && shape.isrectangle() == 1)
			{
				double a = shape.calrectanglearea();
				double b = shape.calrectchangkuanbi();
				cout << "���ε������" << a << endl;
				cout << "���εĳ���ȣ�" << b << endl;
			}
			else if (shape.flag == 1 && shape.getshapesize() == 2)
			{
				double a = shape.calcperimeter();
				double b = shape.calcarea();
				cout << "Բ�ε��ܳ���" << a << endl;
				cout << "Բ�ε������" << b << endl;
			}
			else
			{
				cout << shape.getshapesize() << "����" << endl;
				double s = shape.calnormalarea();
				double c = shape.calnormalzc();
				cout << shape.getshapesize() << "����" << "�����Ϊ:" << s << endl;
				cout << shape.getshapesize() << "����" << "���ܳ�Ϊ:" << c << endl;
			}
			break;
		}
		case'4':
		{
			cout << "��άͼ�ε���������Ϊ��" << endl;
			if (shape.flag == 0)
				cout << shape.calweight() << endl;
			else if (shape.flag == 1)
				cout << shape.yuanweight() << endl;
			break;
		}
		case'5':
		{
			cout << "���ö�άͼ��" << endl;
			shape.modifyspace(0);
			shape.modifyshapesize(0);
			break;
		}
		case'0':
		{
			break;
		}


		default: cout << "�����쳣�����˳�����" << endl;
			break;
		}
	}
}



