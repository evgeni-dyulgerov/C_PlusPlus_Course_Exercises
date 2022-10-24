#pragma once
#include <iostream>
#include <math.h>
using namespace std;

namespace exercise1
{
	class Employee { //Декларация на клас Employee
	private:
		string socialNumber, workTitle; //Член-данни на класа "социален номер" и "работна позиция"
		int workExperience; //Член-данни на класа "години работен опит"
		int salaries[5]; //Член-данни на класа "списък от взимани заплати" деклариран като масив с 5 елемента
	public:
		Employee(); //Декларация на конструктор, за задаване на нулеви стойности за "социален номер" и "години трудов стаж"
		Employee(string,int); //Декларация на конструктор, за задаване на "работна позиция" от клавиатурата. "Социален номер" и "години трудов стаж" се подават като параметри
		
		void setSocialNumber(string); //Декларация на член-функция за задаване на "социален номер"
		string getSocialNumber(); //Декларация на член-функция за получаване на "социален номер"

		void setWorkTitle(string); //Декларация на член-функция за задаване на "работна позиция"
		string getWorkTitle(); //Декларация на член-функция за получаване на "работна позиция"

		void setWorkExperience(int); //Декларация на член-функция за задаване на "години работен опит"
		int getWorkExperience(); //Декларация на член-функция за получаване на "години работен опит"

		void setSalaries(int*); //Декларация на член-функция за задаване на "списък от взимани заплати"
		int* getSalaries(); //Декларация на член-функция за получаване на "списък от взимани заплати"

		double averageSalary(); //Декларация на член-функция за пресмятане на средно аритметичната стойност от заплатите
		int minimalSalary(); //Декларация на член-функция за намиране на минимална заплата

		~Employee() //Дефиниция на деструктор
		{
			cout << "\nDestructing object Employee!\n";
		}
	};

	Employee::Employee() //Дефиниция на конструктора
	{
		// Задаване на нулеви стойности за "социален номер" и "години трудов стаж"
		socialNumber = "0";
		workExperience = 0;
	}

	Employee::Employee(string _socialNumber, int _workExperience) //Дефиниция на конструктора
	{
		// Задаване на подадени стойности за "социален номер" и "години трудов стаж"
		socialNumber = _socialNumber;
		workExperience = _workExperience;

		// Въвеждане на работна позиция от клавиатурата
		do
		{
			cout << "\n\nEnter a work title for the employee: \n";
			cin >> workTitle;
			/* Проверяваме дали "работната прозиция" е "празен string" (т.е.дали "не е въведена")
			   .Ако не е въведена, изпълняваме do - while цикъла още веднъж 
			   (и така докато потребителят въведе някакъв текст). */
		} while (workTitle == ""); 
	}

	/* Комбинации от public методи за задаване и получаване на private променливи */

	// Задаване и получаване на "социален номер"
	void Employee::setSocialNumber(string _socialNumber)
	{
		socialNumber = _socialNumber;
	}

	string Employee::getSocialNumber()
	{
		return socialNumber;
	}

	// Задаване и получаване на "работна позиция"
	void Employee::setWorkTitle(string _workTitle)
	{
		workTitle = _workTitle;
	}

	string Employee::getWorkTitle()
	{
		return workTitle;
	}

	// Задаване и получаване на "години работен опит"
	void Employee::setWorkExperience(int _workExperience)
	{
		workExperience = _workExperience;
	}

	int Employee::getWorkExperience()
	{
		return workExperience;
	}

	// Задаване и получаване на "списък от взимани заплати"
	void Employee::setSalaries(int* _salaries)
	{
		for (int i = 0; i < 5; i++) {
			salaries[i] = _salaries[i];
		}
	}

	int* Employee::getSalaries()
	{
		return salaries;
	}

	/* Функция за изчисляване на средно аритметичната заплата */
	double Employee::averageSalary()
	{
		double sumOfSalaries = 0;

		// Обхождане на масива за да сумираме стойността на елементите му (заплатите)
		for (int i = 0; i < 5; i++) {
			sumOfSalaries += salaries[i];
		}

		/* Делене на сумата на броя елементи на масива (преобразувани в double) 
		   за да получим средно-аритметичната стойност на заплатите. След което 
		   връщаме резултата като резултат от метода */
		return sumOfSalaries / 5.0; 
	}

	/* Функция за изчисляване на минимална заплата */
	int Employee::minimalSalary()
	{
		/* Сортираме масива на база на "bubble sort" алгоритъм за сортиране, или 
		   "метод на мехучето" - shorturl.at/jGOSV (на този линк може да се прочете повече) */
		int temp;
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j + 1 < 5 - i; j++)
			{
				// Разменяме елементите, ако първият е по-голям от втория
				if (salaries[j] > salaries[j + 1])
				{
					temp = salaries[j];
					salaries[j] = salaries[j + 1];
					salaries[j + 1] = temp;
				}
			}
		}

		return salaries[0];
	}
}

