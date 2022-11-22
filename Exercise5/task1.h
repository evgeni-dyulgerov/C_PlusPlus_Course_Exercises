#pragma once
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h> 
#include "lab-code.h"

using namespace std;

namespace exercise5
{
	class Tiger :public ZooAnimal {
	public:
		Tiger(const char* s = "Tiger", ZooLocs loc = TIGER, const char* sci = "Panthera tigris");
		~Tiger() { delete sciName; }
		void print();
		void isA();
	protected:
		char* sciName;
		ZooLocs ZooArea;
	};

	Tiger::Tiger(const char* s, ZooLocs loc, const char* sci) :ZooAnimal(s), ZooArea(loc)
	{
		sciName = new char[strlen(sci) + 1];
		strcpy(sciName, sci);
	}
	void Tiger::isA()
	{
		ZooAnimal::isA();
		cout << "\tSname: \t" << sciName << '\n';
	}
	void Tiger::print()
	{
		ZooAnimal::print();
		cout << "\tAdress: \t" << locTable[ZooArea] << '\n';
	}

	class Elephant :public ZooAnimal {
	public:
		Elephant(const char* s = "Elephant", ZooLocs loc = ELEPHANT, const char* sci = "Loxodonta");
		~Elephant() { delete sciName; }
		void print();
		void isA();
	protected:
		char* sciName;
		ZooLocs ZooArea;
	};

	Elephant::Elephant(const char* s, ZooLocs loc, const char* sci) :ZooAnimal(s), ZooArea(loc)
	{
		sciName = new char[strlen(sci) + 1];
		strcpy(sciName, sci);
	}
	void Elephant::isA()
	{
		ZooAnimal::isA();
		cout << "\tSname: \t" << sciName << '\n';
	}
	void Elephant::print()
	{
		ZooAnimal::print();
		cout << "\tAdress: \t" << locTable[ZooArea] << '\n';
	}

	Tiger tiger("Tiger", TIGER, "Tom the tiger");
	Elephant elephant("Elephant", ELEPHANT, "Mike the elephent");

	ZooAnimal* taskPtr = 0;

	ZooAnimal* makeTask1List(ZooAnimal* ptr)
	{
		ptr = &tiger;
		ptr->link(&elephant);
		return ptr;
	}
}
