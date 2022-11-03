#pragma once
#include <iostream>

namespace exercise2
{
	class truck; //Предварителна декларация

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

	/* Връща положителна стойност, ако скоростта на колата е по-голяма от тази на камиона. Връща 0, ако скоростите са еднакви. Връща отрицателна стойност, ако скоростта на камиона е по-голяма от тази на колата. */
	int sp_greater(car c, truck t)
	{
		return c.speed - t.speed;
	}
}

