#pragma once
#include <iostream>
#include <math.h>
using namespace std;

namespace exercise2
{
	class pr2; //Предварителна декларация

	class pr1{
			int printing;
		public:
			pr1() { printing = 0; }
			void set_print(int status) { printing = status; }
			friend bool inUse(pr1 p1, pr2 p2); // Деклариране на приятелска функция inUse с параметри, 2-та класа за принтиране "pr1" и "pr2".
	};

	class pr2{
			int printing;
		public:
			pr2() { printing = 0; }
			void set_print(int status) { printing = status; }
			friend bool inUse(pr1 p1, pr2 p2); // Деклариране на същата функция в клас "pr2".
	};

	/* Връща true, ако променливата printing е 1 (т.е. в момента принтерът "принтира") 
	   за поне 1 от 2-та класа за принтиране "pr1" и "pr2". */
	bool inUse(pr1 p1, pr2 p2)
	{
		return (p1.printing == 1 || p2.printing == 1);
	}
}