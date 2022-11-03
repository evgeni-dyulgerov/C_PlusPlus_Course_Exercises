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
		char* loadStack(); //���������� �� ����-������� �� ��������� �� stack ��� ������� �� a �� z
		char* loadStack(int upper); //���������� �� ����-������� �� ��������� �� stack ��� ������� �� a �� z ��� A �o Z, � ���������� �� ���������� upper
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
	char& Stack::put(int i) //������� �� ���� � ������
	{
		if (i < 0 || i >= size) {
			cout << "Bounds error!!!\n";
			exit(1);
		}
		return alphabet[i]; //����� ��������� �� p[i]
	}
	char* Stack::loadStack() //��������� �� ����-�������
	{
		/* ����� �� ������ �� ASCII ��������� - https://www.asciitable.com/
		   ASCII � �������� ������ ������� �� �������� �� ���������� ������.
		   ASCII ����� ����� �� ����������� �� ����� � ���������� � �����
		   �������������� � ����������� ����������.

		   ��� 97 �������� �� ���������� ����� 'a'*/

		int aInAscii = 97;
		for (int i = 0; i < 26; i++)
		{
			/* ������������� ����� ��� � ����� ���� �� cast-���� ��� char ���,
			   ����������� (char) ���� ����������, ����� ������ �� ������������� */
			put(i) = (char)(aInAscii + i);
		}

		return alphabet; //������� �������� ��� ������ ��� �������.
	}

	char* Stack::loadStack(int upper) //��������� �� ����-�������
	{
		int aInAscii = 97;

		//��� upper � 1, �������� ���� ������� ��� 65, ����� �������� �� ���������� ����� 'A'
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
