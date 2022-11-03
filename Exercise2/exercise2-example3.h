#pragma once
#include <iostream>

namespace exercise2
{
	class truck2; //������������� ����������
	class car2 {
			int passengers;
			int speed;
		public:
			car2(int p, int s) { passengers = p; speed = s; }
			int sp_greater(truck2 t);
	};
	class truck2 {
			int weight;
			int speed;
		public:
			truck2(int w, int s) { weight = w; speed = s; }
			friend int car2::sp_greater(truck2 t);
	};

	int car2::sp_greater(truck2 t)
	{
		return speed - t.speed; // ��� ���� sp_greater() � ���� �� car, �� ������ �� �� ������ ���� ������� �� ������
	} 
}
