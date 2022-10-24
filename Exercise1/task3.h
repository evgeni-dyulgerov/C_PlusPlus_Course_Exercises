#pragma once
#include <iostream>
#include <math.h>
using namespace std;

namespace exercise1
{
	class Line { //���������� �� ���� Line
	private:
		int Len; //����-����� �� ����� �� ������� �� �������, ����� �� �� �������� �� ������
	public:
		Line(int);
		~Line() //��������� �� ����������
		{
			/* system("CLS") ��� system clear screen � �������� ��������, 
			   ����� �������� ������������ �� ������ �� ���������� ��������� ����������. 
			  
			   �.�. "�������" ������������ �� ������������ ����� */
			system("CLS");
			cout << "\nDestructing object Line!\n";
		}
	};

	Line::Line(int length) //��������� �� ������������
	{
		Len = length;
		string dottedLine;

		//�������� �� 1 '*' ������ ������ ��������� ������������ ������� �� �������
		for (int i = 0; i < Len; i++) {
			dottedLine += "*";
		}

		cout << "\n\n" << dottedLine;
	}
}

