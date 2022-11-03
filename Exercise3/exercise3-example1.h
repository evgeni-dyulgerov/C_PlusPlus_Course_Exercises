#pragma once
#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

namespace exercise3
{
	class point //���� �����
	{
		private:
			double x;
			double y;
		public:
			point(double xcoord, double ycoord); //����������� � ��� ����������
			void print(); //����� �� �����
			double dist(const point& p1, const point& p2); //���������� ����� ��� �����
			~point(); //����������
	};

	point::point(double xcoord, double ycoord) //����������� � ��� ����������
	{
		cout << "Creating Point(" << xcoord << ", " << ycoord << ")" << endl;
		x = xcoord;
		y = ycoord;
	}

	void point::print() //����� �� �����
	{
		cout << "Point(" << x << ", " << y << ")";
	}

	double point::dist(const point& p1, const point& p2) // ���������� ����� ��� �����
	{
		return sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
	}

	point::~point() //����������
	{
		cout << "Destructing ";
		print();
		cout << endl;
	}
}
