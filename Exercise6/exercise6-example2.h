#pragma once

namespace exercise6
{
	class coord2 {
		int x, y; //кординатни стойности
	public:
		coord2() { x = 0; y = 0; }
		coord2(int i, int j) { x = i; y = j; }
		void get_xy(int& i, int& j) { i = x; j = y; }
		coord2 operator--(); //prefix
		coord2 operator--(int notused); //postfix
	};
	coord2 coord2::operator--() //Предефиниране на префиксен -- за класа coord.
	{
		x--;
		y--;
		return *this;
	}
	coord2 coord2::operator--(int notused) //Предефиниране на постфиксен -- за класа coord.
	{
		x--;
		y--;
		return *this;
	}
}
