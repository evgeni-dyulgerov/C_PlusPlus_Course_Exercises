#pragma once
#include <iostream>
#include <math.h>
using namespace std;

namespace exercise2
{
	class pr2; //������������� ����������

	class pr1{
			int printing;
		public:
			pr1() { printing = 0; }
			void set_print(int status) { printing = status; }
			friend bool inUse(pr1 p1, pr2 p2); // ����������� �� ���������� ������� inUse � ���������, 2-�� ����� �� ���������� "pr1" � "pr2".
	};

	class pr2{
			int printing;
		public:
			pr2() { printing = 0; }
			void set_print(int status) { printing = status; }
			friend bool inUse(pr1 p1, pr2 p2); // ����������� �� ������ ������� � ���� "pr2".
	};

	/* ����� true, ��� ������������ printing � 1 (�.�. � ������� ��������� "��������") 
	   �� ���� 1 �� 2-�� ����� �� ���������� "pr1" � "pr2". */
	bool inUse(pr1 p1, pr2 p2)
	{
		return (p1.printing == 1 || p2.printing == 1);
	}
}