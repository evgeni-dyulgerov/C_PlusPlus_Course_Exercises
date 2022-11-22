#pragma once

namespace exercise6
{
	class coord {
		int x, y; //кординатни стойности
	public:
		coord() { x = 0; y = 0; }
		coord(int i, int j) { x = i; y = j; }
		void get_xy(int& i, int& j) { i = x; j = y; }
		coord operator+(coord ob2);
		coord operator-(coord ob2);
		coord operator=(coord ob2);
	};
	coord coord::operator+(coord ob2) //Предефинира + за класа coord.
	{
		coord temp;
		temp.x = x + ob2.x;
		temp.y = y + ob2.y;
		return temp;
	}
	coord coord::operator-(coord ob2) //Предефинира – за класа coord.
	{
		coord temp;
		temp.x = x - ob2.x;
		temp.y = y - ob2.y;
		return temp;
	}
	coord coord::operator=(coord ob2) //Предефинира = за класа coord.
	{
		x = ob2.x;
		y = ob2.y;
		return *this;
	}
}

