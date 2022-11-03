#pragma once
#include <iostream>
#include <math.h>
using namespace std;

namespace exercise3
{
	class Stack {
		int size;
		char* alphabet;
		char& put(int i);
	public:
		Stack(int num);
		char* loadStack(); //Декларация на член-функция за зареждане на stack със символи от a до z
		char* loadStack(int upper); //Декларация на член-функция за зареждане на stack със символи от a до z или A дo Z, в зависимост от параметъра upper
		~Stack() { delete[] alphabet; }
	};

	Stack::Stack(int num)
	{
		alphabet = new char[num];
		if (!alphabet) {
			cout << "Allocation error\n";
			exit(1);
		}
		size = num;
	}
	char& Stack::put(int i) //Поставя се нещо в масива
	{
		if (i < 0 || i >= size) {
			cout << "Bounds error!!!\n";
			exit(1);
		}
		return alphabet[i]; //връща псевдоним за p[i]
	}
	char* Stack::loadStack() //Дефиниция на член-функция
	{
		/* Номер на символ от ASCII таблицата - https://www.asciitable.com/
		   ASCII е символна кодова таблица на основата на латинската азбука.
		   ASCII кодът служи за представяне на текст в компютрите и други
		   комуникационни и управляващи устройства.

		   Код 97 отговаря на латинската буква 'a'*/

		int aInAscii = 97;
		for (int i = 0; i < 26; i++)
		{
			/* Преобразуваме всеки код в буква като го cast-ваме към char тип,
			   използвайки (char) пред стойността, която искаме да преобразуваме */
			put(i) = (char)(aInAscii + i);
		}

		return alphabet; //Връщаме указател към масива със символи.
	}

	char* Stack::loadStack(int upper) //Дефиниция на член-функция
	{
		int aInAscii = 97;

		//Ако upper е 1, задаваме като начален код 65, който отговаря на латинската буква 'A'
		if (upper == 1)
		{
			aInAscii = 65;
		}

		for (int i = 0; i < 26; i++)
		{
			put(i) = (char)(aInAscii + i);
		}

		return alphabet;
	}
}
