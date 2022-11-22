#pragma once

namespace exercise6
{
	class coord3 {
		int x, y; //кординатни стойности
	public:
		coord3() { x = 0; y = 0; }
		coord3(int i, int j) { x = i; y = j; }
		void get_xy(int& i, int& j) { i = x; j = y; }
		friend coord3 operator++(coord3& ob);
	};
	coord3 operator++(coord3& ob) //Предефинира ++ с помощта на приятелска функция
	{
		ob.x++;
		ob.y++;
		return ob; //връща обекта, който е извършил извикването
	}
}
