#include "exercise1.h"
#include <iostream>
#include <math.h>
#include "task1.h"
#include "task2.h"
#include "task3.h"
using namespace std;
using namespace exercise1;
#include "windows.h" 

int main()
{
	/* Exercise 1 - Classes and objects */

	/* Example task 1 - Triangle */

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

	/* Practice task 1 - Time */

	Time time1; //��������� �� ����� time1 �� ���� Time
	time1.setTime(); //������� �� ����-������� setTime() �� ����� time1
	time1.printTimeInFormat1(); //������� �� ����-������� printTimeInFormat1() �� ����� time1
	time1.printTimeInFormat2(); //������� �� ����-������� printTimeInFormat2() �� ����� time1

	/* Practice task 2 - Employee */

	//��������� �� ����� �� ��� Employee ����������� ������������ �����������
	Employee e1;
	
	e1.setSocialNumber("9123456789");
	e1.setWorkTitle("C++ Developer");
	e1.setWorkExperience(3);

	int e1salaries[5] = { 1000, 1500, 2000, 2500, 3000 }; //��������� �� ����� ��� �������
	e1.setSalaries(e1salaries); //�������� �� ���� �����, ���� ����� ��� ������� �� ������� ����� �� ��� "Employee" 

	//����������� �� ���������� �� ���������
	cout << "\n\nTitle: " << e1.getWorkTitle() << " Social Number: " << e1.getSocialNumber() << " Experience (in years): " << e1.getWorkExperience() << "\n\nSalaries: ";

	//getSalaries ����� �������� ��� ������ ��� ����������� �������. ����������� ���� ��������, ����� �� �������� ���������� �� ������.
	int *salaries1 = e1.getSalaries();
	for (int i = 0; i < 5; i++) 
	{
		cout << "\n" << salaries1[i];
	}

	/* ����������� �� ��������� �� ��������� averageSalary() �� ���������� �� ������-����������� �������
	   � minimalSalary() �� ���������� �� ��������� ������� */
	cout << "\n\nAverage salary: " << e1.averageSalary() << " Minimal salary: " << e1.minimalSalary();

	//��������� �� ����� �� ��� Employee ����������� ��������� �� ��� �����������
	Employee e2("9532120938", 10);
	int e2salaries[5] = { 1500, 2000, 2500, 3000, 3500 };
	e2.setSalaries(e2salaries);

	cout << "\n\nTitle: " << e2.getWorkTitle() << " Social Number: " << e2.getSocialNumber() << " Experience (in years): " << e2.getWorkExperience() << "\n\nSalaries: ";
	int *salaries2 = e2.getSalaries();
	for (int i = 0; i < 5; i++)
	{
		cout << "\n" << salaries2[i];
	}
	cout << "\n\nAverage salary: " << e2.averageSalary() << " Minimal salary: " << e2.minimalSalary();

	/* Practice task 3 - Line */

	Line line(10); //��������� ����� �� ��� Line � ������� 10

	/* ����� �������� ��������� �� ��������� � ������� �����.
	   ����� �� ������� ������������ �� ����������� ���� ���������� ����� Sleep(), 
	   ������ �������� ���� ����������� � ����� �� �� ������ ������������ �� �����������
	   (���� �������� ���� ����� "���������� �� �������"). 
	   
	   ��� ���� ������� �� ��������� (��� ���� �� ������� ����������� ~Line()) 
	   ���������� Sleep(5000) �� �� ������� ������������ �� ����������� � �� �����,
	   �� ������� ��� ���������� ����� � ������� 10 '*' �������  */
	Sleep(5000); 

	line.~Line(); //��������� ������������ �� ������, ����� �������� �������
	return 0;
}