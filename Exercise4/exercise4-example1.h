#pragma once
#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

namespace exercise4
{
	//Базов клас за различни превозни средства
	class vehicle {
		int num_wheels;
		int range;
	public:
		vehicle(int w, int r) { num_wheels = w; range = r; }
		void showv() {
			cout << "Wheels:" << num_wheels << '\n';
			cout << "Range:" << range << '\n';
		}
	};
	class car : public vehicle {
		int passengers;
	public:
		car(int p, int w, int r) : vehicle(w, r)
		{
			passengers = p;
		}
		void show()
		{
			showv();
			cout << "Passengers:" << passengers << '\n';
		}
	};
	class truck : public vehicle {
		int loadlimit;
	public:
		truck(int l, int w, int r) : vehicle(w, r) { loadlimit = l; }
		void show()
		{
			showv();
			cout << "Loadlimit:" << loadlimit << '\n';
		}
	};
}
