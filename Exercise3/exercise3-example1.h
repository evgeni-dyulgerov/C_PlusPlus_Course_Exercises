#pragma once
#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

namespace exercise3
{
	class point //Клас точка
	{
		private:
			double x;
			double y;
		public:
			point(double xcoord, double ycoord); //Конструктор с два параметъра
			void print(); //Печат на точка
			double dist(const point& p1, const point& p2); //Разстояние между две точки
			~point(); //Деструктор
	};

	point::point(double xcoord, double ycoord) //Конструктор с два параметъра
	{
		cout << "Creating Point(" << xcoord << ", " << ycoord << ")" << endl;
		x = xcoord;
		y = ycoord;
	}

	void point::print() //Печат на точка
	{
		cout << "Point(" << x << ", " << y << ")";
	}

	double point::dist(const point& p1, const point& p2) // Разстояние между две точки
	{
		return sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
	}

	point::~point() //Деструктор
	{
		cout << "Destructing ";
		print();
		cout << endl;
	}
}
