#pragma once
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h> 

using namespace std;

namespace exercise4
{
	class Item //Клас точка
	{
	private:
		char* contentType;
		time_t datePurchased;
		int itemId;
		char* mediaFormat;
		int numberOfItems;
		double price;
		char* title;
	public:
		Item(char* contentType, time_t datePurchased, int itemID, char* mediaFormat, int numberOfItems, double price, char* title);
		char* getContentType();
		time_t getDatePurchased();
		char* getMediaFormat();
		int getItemId();
		int getNumberOfItems();
		double getPrice();
		char* getTitle();
		void setItemId(int itemId);
		void toString();
		~Item(); //Деструктор
	};

	Item::Item(char* contentType, time_t datePurchased, int itemId, char* mediaFormat, int numberOfItems, double price, char* title)
	{
		this->contentType = contentType;
		this->datePurchased = datePurchased;
		this->itemId = itemId;
		this->mediaFormat = mediaFormat;
		this->numberOfItems = numberOfItems;
		this->price = price;
		this->title = title;
	}

	char* Item::getContentType() 
	{
		return contentType;
	}
	
	time_t Item::getDatePurchased()
	{
		return datePurchased;
	}

	char* Item::getMediaFormat()
	{
		return mediaFormat;
	}

	int Item::getItemId()
	{
		return itemId;
	}

	int Item::getNumberOfItems()
	{
		return numberOfItems;
	}

	double Item::getPrice()
	{
		return price;
	}

	char* Item::getTitle()
	{
		return title;
	}

	void Item::setItemId(int itemId)
	{
		this->itemId = itemId;
	}

	Item::~Item() //Дефиниция на деструктор
	{
		cout << "\nDestructing object Item!\n";
	}

	void Item::toString() 
	{
		cout << "\n\nA type of media " << this->mediaFormat << " has been bought with a price " << this->price << " at a date of: " << ctime(&this->datePurchased);
	}

	class Movie : public Item {
		double rating;
	public:
		Movie(double rating, char* contentType, time_t datePurchased, int itemID, char* mediaFormat, int numberOfItems, double price, char* title) : Item(contentType, datePurchased, itemID, mediaFormat, numberOfItems, price, title)
		{
			this->rating = rating;
		}
		double getRating()
		{
			return rating;
		}
		char* playOnDVD()
		{
			return (char*)"Playing on DVD";
		}
		char* playOnVideo() 
		{
			return (char*)"Playing on Video";
		}
		~Movie()
		{
			cout << "\nDestructing object Movie!\n";
		}
	};

	class Game : public Item {
		int difficultyLevel;
		char* mfg;
	public:
		Game(int difficultyLevel, char* mfg, char* contentType, time_t datePurchased, int itemID, char* mediaFormat, int numberOfItems, double price, char* title) : Item(contentType, datePurchased, itemID, mediaFormat, numberOfItems, price, title)
		{
			this->difficultyLevel = difficultyLevel;
			this->mfg = mfg;
		}
		int getDificultyLevel()
		{
			return difficultyLevel;
		}
		char* getEquipment()
		{
			return mfg;
		}
		char* playOnCD()
		{
			return (char*)"Playing on CD";
		}
		char* playOnVideo()
		{
			return (char*)"Playing on Video";
		}
		~Game()
		{
			cout << "\nDestructing object Game!\n";
		}
	};

	class Music : public Item {
		char* bandOfArtists;
	public:
		Music(char* bandOfArtists, char* contentType, time_t datePurchased, int itemID, char* mediaFormat, int numberOfItems, double price, char* title) : Item(contentType, datePurchased, itemID, mediaFormat, numberOfItems, price, title)
		{
			this->bandOfArtists = bandOfArtists;
		}
		char* getBandOfArtists()
		{
			return bandOfArtists;
		}
		char* PlayOnCD()
		{
			return (char*)"Playing on CD";
		}
		~Music()
		{
			cout << "\nDestructing object Music!\n";
		}
	};
}
