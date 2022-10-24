#include "exercise1.h"
#include <iostream>
#include <math.h>
#include "task1.h"
#include "task2.h"
#include "task3.h"
using namespace std;
using namespace exercise1;
#include "windows.h" 

int main()
{
	/* Exercise 1 - Classes and objects */

	/* Example task 1 - Triangle */

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

	/* Practice task 1 - Time */

	Time time1; //Създаване на обект time1 от клас Time
	time1.setTime(); //Извиква се член-функция setTime() за обект time1
	time1.printTimeInFormat1(); //Извиква се член-функция printTimeInFormat1() за обект time1
	time1.printTimeInFormat2(); //Извиква се член-функция printTimeInFormat2() за обект time1

	/* Practice task 2 - Employee */

	//Създавене на обект от тип Employee използвайки предефиниран конструктор
	Employee e1;
	
	e1.setSocialNumber("9123456789");
	e1.setWorkTitle("C++ Developer");
	e1.setWorkExperience(3);

	int e1salaries[5] = { 1000, 1500, 2000, 2500, 3000 }; //Създаване на масив със заплати
	e1.setSalaries(e1salaries); //Задаване на този масив, като масив със заплати за дадения обект от тип "Employee" 

	//Изпечатване на информация за служителя
	cout << "\n\nTitle: " << e1.getWorkTitle() << " Social Number: " << e1.getSocialNumber() << " Experience (in years): " << e1.getWorkExperience() << "\n\nSalaries: ";

	//getSalaries връща указател към масива със служителски заплати. Използвайки този указател, можем да достъпим елементите на масива.
	int *salaries1 = e1.getSalaries();
	for (int i = 0; i < 5; i++) 
	{
		cout << "\n" << salaries1[i];
	}

	/* Изпечатване на резултата от функциите averageSalary() за определяне на средно-аритметична заплата
	   и minimalSalary() за определяне на минимална заплата */
	cout << "\n\nAverage salary: " << e1.averageSalary() << " Minimal salary: " << e1.minimalSalary();

	//Създавене на обект от тип Employee използвайки дефиниран от нас конструктор
	Employee e2("9532120938", 10);
	int e2salaries[5] = { 1500, 2000, 2500, 3000, 3500 };
	e2.setSalaries(e2salaries);

	cout << "\n\nTitle: " << e2.getWorkTitle() << " Social Number: " << e2.getSocialNumber() << " Experience (in years): " << e2.getWorkExperience() << "\n\nSalaries: ";
	int *salaries2 = e2.getSalaries();
	for (int i = 0; i < 5; i++)
	{
		cout << "\n" << salaries2[i];
	}
	cout << "\n\nAverage salary: " << e2.averageSalary() << " Minimal salary: " << e2.minimalSalary();

	/* Practice task 3 - Line */

	Line line(10); //Създаваме обект от тип Line с дължина 10

	/* Всяка конзолна апликация се изпълнява в отделна нишка.
	   Можем да забавим изпълнението на апликацията като използваме метод Sleep(), 
	   където подаваме брой милисекунди с които да се забави изпълнението на апликацията
	   (тази операция носи името "приспиване на нишката"). 
	   
	   Тъй като обектът се унищожава (тъй като се извиква деструктира ~Line()) 
	   използваме Sleep(5000) за да забавим изпълнението на апликацията и да видим,
	   че успешно сме отпечатали линия с дължина 10 '*' символа  */
	Sleep(5000); 

	line.~Line(); //Извикваме деструкторът на обекта, който изчиства линията
	return 0;
}