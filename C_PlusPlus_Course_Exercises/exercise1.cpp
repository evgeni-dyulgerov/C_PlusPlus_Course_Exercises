#include "exercise1.h"
#include <iostream>
#include <math.h>
using namespace std;
using namespace exercise1;

int main()
{
	triangle ob1; //Създаване на обект ob1 от клас triangle
	double s;
	s = ob1.face(); //Извиква се член-функция face() за обект ob1
	ob1.show((char*)"triangle1"); //Извиква се член-функция show() за обект ob1
	cout << "\nThe face of triangle1 is s = " << s;
	triangle ob2;
	triangle* p; //Декларира се указател към обект от клас triangle
	p = &ob2; //Указателят се установява да сочи към ob2
	s = p->face(); //Извиква се член-функция face() за обект ob2
	p->show((char*)"triangle2"); //Извиква се член-функция show() за обект ob2
	cout << "\nThe face of triangle2 is s = " << s;
}