#pragma once
#include <iostream>
#include <math.h>
using namespace std;

namespace exercise1
{
	class triangle { //Декларация на клас triangle
	private:
		double a, b, c; //Член-данни на класа
	public:
		triangle(); //Декларация на конструктор
		double face(); //Декларация на член-функция
		void show(char*); //Декларация на член-функция
		~triangle() //Дефиниция на деструктор
		{
			cout << "\nDestructing object triangle!\n";
		}
	};
	triangle::triangle() //Дефиниция на конструктора
	{
		do
		{
			cout << "\n\nEnter three values for the sides of triangle : \n";
			cin >> a >> b >> c;
		} while (!((a > 0) && (b > 0) && (c > 0) && ((a + b > c) && ((a + c) > b) && ((b + c) > a))));
	}
	double triangle::face() //Дефиниция на член-функция
	{
		double p, s;
		p = (a + b + c) / 2;
		s = sqrt(p * (p - a) * (p - b) * (p - c));
		return s;
	}
	void triangle::show(char* name) //Дефиниция на член-функция
	{
		cout << "Sides of the triangle " << name << ":\n";
		cout << "a = " << a << ", b = " << b << ", c = " << c;
	}
}

