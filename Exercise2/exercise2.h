#pragma once
#include <iostream>
#include <math.h>
using namespace std;

namespace exercise2
{
	class triangle {
	private:
		double a, b, c;
	public:
		triangle();
		double face(); //����-������� face() ��� ��������
		double face(double*); //����-������� face() � ���� ��������
		void show(char*);
		~triangle() { cout << "\n\nDestructing object triangle!\n"; }
	};

	triangle::triangle() //��������� �� ������������
	{
		do
		{
			cout << "\n\nEnter three values for the sides of triangle : \n";
			cin >> a >> b >> c;
		} while (!((a > 0) && (b > 0) && (c > 0) && ((a + b > c) && ((a + c) > b) && ((b + c) > a))));
	}

	double triangle::face() //��������� �� ����-������� face() ��� ���������
	{
		double p, s;
		p = (a + b + c) / 2;
		s = sqrt(p * (p - a) * (p - b) * (p - c));
		return s;
	}

	double triangle::face(double* p) //������������� ����-������� face()
	{
		double pp = a + b + c;
		*p = pp; //������� �� ������ �������� ���� ��������-��������
		pp /= 2;
		double s;
		s = sqrt(pp * (pp - a) * (pp - b) * (pp - c));
		return s;
	}

	void triangle::show(char* name) {
		cout << "Sides of the triangle " << name << ":\n";
		cout << "a = " << a << ", b = " << b << ", c = " << c;
	}
}
