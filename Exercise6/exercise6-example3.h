#pragma once

namespace exercise6
{
	class coord3 {
		int x, y; //���������� ���������
	public:
		coord3() { x = 0; y = 0; }
		coord3(int i, int j) { x = i; y = j; }
		void get_xy(int& i, int& j) { i = x; j = y; }
		friend coord3 operator++(coord3& ob);
	};
	coord3 operator++(coord3& ob) //����������� ++ � ������� �� ���������� �������
	{
		ob.x++;
		ob.y++;
		return ob; //����� ������, ����� � �������� �����������
	}
}
