#pragma once
#include <iostream>
#include <math.h>
using namespace std;

namespace exercise2
{
	class Stack { //���������� �� ���� Stack
	private:
		char alphabet[26]; //����-����� �� ����� (���, ������, �������)
	public:
		char* loadStack(); //���������� �� ����-������� �� ��������� �� stack ��� ������� �� a �� z
		char* loadStack(int upper); //���������� �� ����-������� �� ��������� �� stack ��� ������� �� a �� z ��� A �o Z, � ���������� �� ���������� upper
		~Stack() //��������� �� ����������
		{
			cout << "\n\nDestructing object Stack!\n";
		}
	};

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
			alphabet[i] = (char)(aInAscii + i); 
		}

		return alphabet; //������� �������� ��� ������ ��� �������.
	}

	char* Stack::loadStack(int upper) //��������� �� ����-�������
	{
		int aInAscii = 97;

		//��� upper � 1, �������� ���� ������� ��� 65, ����� �������� �� ���������� ����� 'A'
		if(upper == 1) 
		{ 
			aInAscii = 65;
		}

		for (int i = 0; i < 26; i++)
		{
			alphabet[i] = (char)(aInAscii + i);
		}

		return alphabet;
	}
}

