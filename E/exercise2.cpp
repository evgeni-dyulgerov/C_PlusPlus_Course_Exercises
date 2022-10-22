#include "exercise2.h"
#include <iostream>
#include <math.h>
using namespace std;
using namespace exercise2;

int main()
{
	triangle tr1; //Обект tr1; извиква се конструкторът на класа
	double p, s;
	tr1.show((char*)"tr1");
	cout << "\nThe face of triangle1 is s = " << tr1.face(); //Зарежда се член-функция face() без
	// аргумент
	triangle tr2; //Обект tr2; извиква се конструкторът на класа
	tr2.show((char*)"tr2");
	s = tr2.face(&p); //Зарежда се член-функция face() с аргумент
	cout << "\nThe face of triangle2 is s = " << s << ", and the perimeter is p = " << p;
}