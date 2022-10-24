#pragma once
#include <iostream>
#include <math.h>
using namespace std;

namespace exercise1
{
	class Employee { //���������� �� ���� Employee
	private:
		string socialNumber, workTitle; //����-����� �� ����� "�������� �����" � "������� �������"
		int workExperience; //����-����� �� ����� "������ ������� ����"
		int salaries[5]; //����-����� �� ����� "������ �� ������� �������" ���������� ���� ����� � 5 ��������
	public:
		Employee(); //���������� �� �����������, �� �������� �� ������ ��������� �� "�������� �����" � "������ ������ ����"
		Employee(string,int); //���������� �� �����������, �� �������� �� "������� �������" �� ������������. "�������� �����" � "������ ������ ����" �� ������� ���� ���������
		
		void setSocialNumber(string); //���������� �� ����-������� �� �������� �� "�������� �����"
		string getSocialNumber(); //���������� �� ����-������� �� ���������� �� "�������� �����"

		void setWorkTitle(string); //���������� �� ����-������� �� �������� �� "������� �������"
		string getWorkTitle(); //���������� �� ����-������� �� ���������� �� "������� �������"

		void setWorkExperience(int); //���������� �� ����-������� �� �������� �� "������ ������� ����"
		int getWorkExperience(); //���������� �� ����-������� �� ���������� �� "������ ������� ����"

		void setSalaries(int*); //���������� �� ����-������� �� �������� �� "������ �� ������� �������"
		int* getSalaries(); //���������� �� ����-������� �� ���������� �� "������ �� ������� �������"

		double averageSalary(); //���������� �� ����-������� �� ���������� �� ������ ������������� �������� �� ���������
		int minimalSalary(); //���������� �� ����-������� �� �������� �� ��������� �������

		~Employee() //��������� �� ����������
		{
			cout << "\nDestructing object Employee!\n";
		}
	};

	Employee::Employee() //��������� �� ������������
	{
		// �������� �� ������ ��������� �� "�������� �����" � "������ ������ ����"
		socialNumber = "0";
		workExperience = 0;
	}

	Employee::Employee(string _socialNumber, int _workExperience) //��������� �� ������������
	{
		// �������� �� �������� ��������� �� "�������� �����" � "������ ������ ����"
		socialNumber = _socialNumber;
		workExperience = _workExperience;

		// ��������� �� ������� ������� �� ������������
		do
		{
			cout << "\n\nEnter a work title for the employee: \n";
			cin >> workTitle;
			/* ����������� ���� "��������� ��������" � "������ string" (�.�.���� "�� � ��������")
			   .��� �� � ��������, ����������� do - while ������ ��� ������ 
			   (� ���� ������ ������������ ������ ������� �����). */
		} while (workTitle == ""); 
	}

	/* ���������� �� public ������ �� �������� � ���������� �� private ���������� */

	// �������� � ���������� �� "�������� �����"
	void Employee::setSocialNumber(string _socialNumber)
	{
		socialNumber = _socialNumber;
	}

	string Employee::getSocialNumber()
	{
		return socialNumber;
	}

	// �������� � ���������� �� "������� �������"
	void Employee::setWorkTitle(string _workTitle)
	{
		workTitle = _workTitle;
	}

	string Employee::getWorkTitle()
	{
		return workTitle;
	}

	// �������� � ���������� �� "������ ������� ����"
	void Employee::setWorkExperience(int _workExperience)
	{
		workExperience = _workExperience;
	}

	int Employee::getWorkExperience()
	{
		return workExperience;
	}

	// �������� � ���������� �� "������ �� ������� �������"
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

	/* ������� �� ����������� �� ������ ������������� ������� */
	double Employee::averageSalary()
	{
		double sumOfSalaries = 0;

		// ��������� �� ������ �� �� �������� ���������� �� ���������� �� (���������)
		for (int i = 0; i < 5; i++) {
			sumOfSalaries += salaries[i];
		}

		/* ������ �� ������ �� ���� �������� �� ������ (������������� � double) 
		   �� �� ������� ������-������������� �������� �� ���������. ���� ����� 
		   ������� ��������� ���� �������� �� ������ */
		return sumOfSalaries / 5.0; 
	}

	/* ������� �� ����������� �� ��������� ������� */
	int Employee::minimalSalary()
	{
		/* ��������� ������ �� ���� �� "bubble sort" ��������� �� ���������, ��� 
		   "����� �� ��������" - shorturl.at/jGOSV (�� ���� ���� ���� �� �� ������� ������) */
		int temp;
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j + 1 < 5 - i; j++)
			{
				// ��������� ����������, ��� ������� � ��-����� �� ������
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

