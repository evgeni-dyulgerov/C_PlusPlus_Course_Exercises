#pragma once
#include <iostream>
#include <math.h>
using namespace std;

namespace exercise1
{
	class Line { //Декларация на клас Line
	private:
		int Len; //Член-данни на класа за дължина на линията, която ще се изпечата на екрана
	public:
		Line(int);
		~Line() //Дефиниция на деструктор
		{
			/* system("CLS") или system clear screen е системна операция, 
			   която изчиства изпечатаното на екрана на конзолната апликация съдържание. 
			  
			   Т.е. "изтрива" отпечатаната от конструктора линия */
			system("CLS");
			cout << "\nDestructing object Line!\n";
		}
	};

	Line::Line(int length) //Дефиниция на конструктора
	{
		Len = length;
		string dottedLine;

		//Добавяме по 1 '*' символ докато достигнем необходимата дължина на линията
		for (int i = 0; i < Len; i++) {
			dottedLine += "*";
		}

		cout << "\n\n" << dottedLine;
	}
}

