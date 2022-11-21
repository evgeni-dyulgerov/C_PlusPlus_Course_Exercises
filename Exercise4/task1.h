#pragma once
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <wincrypt.h>
using namespace std;

namespace exercise4
{
	class Item //Клас точка
	{
	private:
		char* contentType;
		Date datePurchased;
		int itemID;
		char* mediaFormat;
		int numberOfItems;
		double price;
		char* title;
	public:
		Item(char* contentType, Date datePurchased, int itemID, char* mediaFormat, int numberOfItems, double price, char* title);
		char* getContentType();
		Date getDatePurchased();
		char* getMediaFormat();
		int getNumberOfItems();
		double getPrice();
		char* getTitle();
		void setItemId();
		char* toString();
		~Item(); //Деструктор
	};

	class Movie : public Item {
		char* contentType;
		Date datePurchased;
		int itemID;
		char* mediaFormat;
		int numberOfItems;
		double price;
		char* title;
		double rating;
	public:
		Movie(char* contentType, Date datePurchased, int itemID, char* mediaFormat, int numberOfItems, double price, char* title) : Item(contentType, datePurchased, itemID, mediaFormat, numberOfItems, price, title)
		{
			passengers = p;
		}
		void show()
		{
			showv();
			cout << "Passengers:" << passengers << '\n';
		}
	};

	class Game : public Item {
		int loadlimit;
	public:
		truck(int l, int w, int r) : vehicle(w, r) { loadlimit = l; }
		void show()
		{
			showv();
			cout << "Loadlimit:" << loadlimit << '\n';
		}
	};

	class Music : public Item {
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
