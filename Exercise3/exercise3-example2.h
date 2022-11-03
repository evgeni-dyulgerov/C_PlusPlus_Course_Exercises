#pragma once
#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

namespace exercise3
{
	class array {
		int size;
		char* p;
	public:
		array(int num);
		~array() { delete[] p; }
		char& put(int i);
		char get(int i);
	};

	array::array(int num)
	{
		p = new char[num];
		if (!p) {
			cout << "Allocation error\n";
			exit(1);
		}
		size = num;
	}
	char& array::put(int i) //������� �� ���� � ������
	{
		if (i < 0 || i >= size) {
			cout << "Bounds error!!!\n";
			exit(1);
		}
		return p[i]; //����� ��������� �� p[i]
	}
	char array::get(int i) //����� �� ���� �� ������.
	{
		if (i < 0 || i >= size) {
			cout << "Bounds error!!!\n";
			exit(1);
		}
		return p[i]; //����� ������
	}
}