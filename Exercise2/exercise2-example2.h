#pragma once
#include <iostream>

namespace exercise2
{
	class truck; //������������� ����������

	class car {
			int passengers;
			int speed;
		public:
			car(int p, int s) { passengers = p; speed = s; }
			friend int sp_greater(car c, truck t);
	};

	class truck {
			int weight;
			int speed;
		public:
			truck(int w, int s) { weight = w; speed = s; }
			friend int sp_greater(car c, truck t);
	};

	/* ����� ����������� ��������, ��� ��������� �� ������ � ��-������ �� ���� �� �������. ����� 0, ��� ���������� �� �������. ����� ����������� ��������, ��� ��������� �� ������� � ��-������ �� ���� �� ������. */
	int sp_greater(car c, truck t)
	{
		return c.speed - t.speed;
	}
}

