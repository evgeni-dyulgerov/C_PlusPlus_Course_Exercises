#include <iostream>
#include <math.h>
#include "exercise2-example1.h"
#include "exercise2-example2.h"
#include "exercise2-example3.h"
#include "task1.h"
#include "task2.h"
using namespace std;
using namespace exercise2;

int main()
{
	/* Example task 1 - Triangle */
	cout << "\n\n----- Example task 1 (Triangle) -----\n";

	triangle tr1; //Обект tr1; извиква се конструкторът на класа
	double p, s;
	tr1.show((char*)"tr1");
	cout << "\nThe face of triangle1 is s = " << tr1.face(); //Зарежда се член-функция face() без
	// аргумент
	triangle tr2; //Обект tr2; извиква се конструкторът на класа
	tr2.show((char*)"tr2");
	s = tr2.face(&p); //Зарежда се член-функция face() с аргумент
	cout << "\nThe face of triangle2 is s = " << s << ", and the perimeter is p = " << p;

	/* Example task 2 - Car and Truck */

	cout << "\n\n----- Example task 2 (Car and Truck) -----\n\n";

	int t;

	car c1(6, 55), c2(2, 120);
	truck t1(10000, 55), t2(20000, 72);

	cout << "Comparing c1 and t1:\n";

	t = sp_greater(c1, t1);

	if (t < 0) cout << "Truck is faster.\n";
	else if (t == 0) cout << "Car and truck speed is the same.\n";
	else cout << "Car is faster.\n";

	cout << "\nComparing c2 and t2:\n";

	t = sp_greater(c2, t2);

	if (t < 0) cout << "Truck is faster.\n";
	else if (t == 0) cout << "Car and truck speed is the same.\n";
	else cout << "Car is faster.\n";

	/* Example task 3 - Car and Truck (redefined) */

	cout << "\n\n----- Example task 3  (Car and Truck with a redefined friend function) -----\n\n";

	int x;

	car2 c3(6, 55), c4(2, 120);
	truck2 t3(10000, 55), t4(20000, 72);

	cout << "Comparing c1 and t1:\n";
	
	x = c3.sp_greater(t3); //Извиква се като член-функция на car

	if (x < 0) cout << "Truck is faster.\n";
	else if (x == 0) cout << "Car and truck speed is the same.\n";
	else cout << "Car is faster.\n";

	cout << "\nComparing c2 and t2:\n";

	x = c3.sp_greater(t4); //Извиква се като член-функция на car

	if (x < 0) cout << "Truck is faster.\n";
	else if (x == 0) cout << "Car and truck speed is the same.\n";
	else cout << "Car is faster.\n";

	/* Practice task 1 - Stack */

	cout << "\n\n----- Practice task 1 (Stack) -----\n";

	Stack s1;

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

	/* Practice task 2 - Printers */

	cout << "\n\n----- Practice task 2 (Printers) -----\n";

	/*Създаваме обект от тип "pr1" и задаваме променливата "printing" да е със стойност 1
	  използвайки публичния метод "set_print(int status)", т.е. "принтер 1 в момента принтира".*/
	pr1 p1;
	p1.set_print(1);

	/*Създаваме обект от тип "pr2" и задаваме променливата "printing" да е със стойност 1
	  използвайки публичния метод "set_print(int status)", т.е. "принтер 2 в момента принтира".*/
	pr2 p2;
	p2.set_print(0);

	//Извикваме приятелската функция inUse, която връща "true", ако 1 от 2-та принтера "принтират".
	bool printerInUse = inUse(p1, p2);

	//Правим проверка и изпечатваме дали принтерите се "използват" или не.
	if (printerInUse) cout << "\nThe printers are in use\n";
	else cout << "\nThe printers are not in use.\n";

	//Променяме статуса на принтер 1 на 0, т.е. той вече не "принтира".
	p1.set_print(0);

	//Отново взимаме статусът на двата принтера
	printerInUse = inUse(p1, p2);

	//Отново правим проверка
	if (printerInUse) cout << "\nThe printers are in use\n";
	else cout << "\nThe printers are not in use.\n";

	return 0;
}