#include "exercise1.h"
#include <iostream>
#include <math.h>
using namespace std;
using namespace exercise1;

int main()
{
	triangle ob1; //��������� �� ����� ob1 �� ���� triangle
	double s;
	s = ob1.face(); //������� �� ����-������� face() �� ����� ob1
	ob1.show((char*)"triangle1"); //������� �� ����-������� show() �� ����� ob1
	cout << "\nThe face of triangle1 is s = " << s;
	triangle ob2;
	triangle* p; //��������� �� �������� ��� ����� �� ���� triangle
	p = &ob2; //���������� �� ���������� �� ���� ��� ob2
	s = p->face(); //������� �� ����-������� face() �� ����� ob2
	p->show((char*)"triangle2"); //������� �� ����-������� show() �� ����� ob2
	cout << "\nThe face of triangle2 is s = " << s;
}