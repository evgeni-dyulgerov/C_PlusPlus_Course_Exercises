#include "exercise2.h"
#include <iostream>
#include <math.h>
using namespace std;
using namespace exercise2;

int main()
{
	triangle tr1; //����� tr1; ������� �� ������������� �� �����
	double p, s;
	tr1.show((char*)"tr1");
	cout << "\nThe face of triangle1 is s = " << tr1.face(); //������� �� ����-������� face() ���
	// ��������
	triangle tr2; //����� tr2; ������� �� ������������� �� �����
	tr2.show((char*)"tr2");
	s = tr2.face(&p); //������� �� ����-������� face() � ��������
	cout << "\nThe face of triangle2 is s = " << s << ", and the perimeter is p = " << p;
}