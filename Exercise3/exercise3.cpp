#include "exercise3-example1.h"
#include "exercise3-example2.h"
#include <iostream>
#include <math.h>
#include "task1.h"
using namespace std;
using namespace exercise3;

int main()
{
	/* Practice task 1 - Stack */

	cout << "\n\n----- Practice task 1 (Stack) -----\n";

	Stack s1(26);

	//Присвояваме масива с букви на указател към масива от тип char*.
	char* letter = s1.loadStack();

	//Извъртаме масива в цикъл и изпечатваме всеки символ в него.
	for (int i = 0; i < 26; i++)
	{
		cout << "\n\nThe alphabet letter " << i + 1 << " is: " << letter[i];
	}

	/* Този път извикваме функция "loadStack(int upper)" и подаваме 1
	*  за да разпечатаме символите от A до Z. */
	letter = s1.loadStack(1);

	for (int i = 0; i < 26; i++)
	{
		cout << "\n\nThe alphabet letter " << i + 1 << " is: " << letter[i];
	}

	/* Example task 1 - Point */
	cout << "\n\n----- Example task 1 (Point) -----\n\n";

	point a(3, 4), b(10, 4); //Обекти от тип Точка
	cout << "Distance between "; a.print();
	cout << " and "; b.print();
	cout << " is " << a.dist(a, b) << endl;

	/* Example task 2 - Array */
	cout << "\n\n----- Example task 2 (Array) -----\n\n";

	exercise3::array c(10);
	c.put(3) = 'X';
	c.put(2) = 'R';
	cout << c.get(3) << "\n" << c.get(2);
	cout << "\n";
	c.put(11) = '!'; //сега се генерира грешка по време на изпълнение

	return 0;
}