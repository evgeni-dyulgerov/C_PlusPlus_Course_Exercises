#include "exercise3.h"
#include <iostream>
#include <math.h>
using namespace std;
using namespace exercise3;

int main()
{
	point a(3, 4), b(10, 4); //Обекти от тип Точка
	cout << "Distance between "; a.print();
	cout << " and "; b.print();
	cout << " is " << a.dist(a, b) << endl;
}