#include <iostream>
#include <math.h>
#include "exercise2-example1.h"
#include "exercise2-example2.h"
#include "exercise2-example3.h"
#include "task1.h"
#include "task2.h"
using namespace std;
using namespace exercise2;

int main()
{
	/* Example task 1 - Triangle */
	cout << "\n\n----- Example task 1 (Triangle) -----\n";

	triangle tr1; //����� tr1; ������� �� ������������� �� �����
	double p, s;
	tr1.show((char*)"tr1");
	cout << "\nThe face of triangle1 is s = " << tr1.face(); //������� �� ����-������� face() ���
	// ��������
	triangle tr2; //����� tr2; ������� �� ������������� �� �����
	tr2.show((char*)"tr2");
	s = tr2.face(&p); //������� �� ����-������� face() � ��������
	cout << "\nThe face of triangle2 is s = " << s << ", and the perimeter is p = " << p;

	/* Example task 2 - Car and Truck */

	cout << "\n\n----- Example task 2 (Car and Truck) -----\n\n";

	int t;

	car c1(6, 55), c2(2, 120);
	truck t1(10000, 55), t2(20000, 72);

	cout << "Comparing c1 and t1:\n";

	t = sp_greater(c1, t1);

	if (t < 0) cout << "Truck is faster.\n";
	else if (t == 0) cout << "Car and truck speed is the same.\n";
	else cout << "Car is faster.\n";

	cout << "\nComparing c2 and t2:\n";

	t = sp_greater(c2, t2);

	if (t < 0) cout << "Truck is faster.\n";
	else if (t == 0) cout << "Car and truck speed is the same.\n";
	else cout << "Car is faster.\n";

	/* Example task 3 - Car and Truck (redefined) */

	cout << "\n\n----- Example task 3  (Car and Truck with a redefined friend function) -----\n\n";

	int x;

	car2 c3(6, 55), c4(2, 120);
	truck2 t3(10000, 55), t4(20000, 72);

	cout << "Comparing c1 and t1:\n";
	
	x = c3.sp_greater(t3); //������� �� ���� ����-������� �� car

	if (x < 0) cout << "Truck is faster.\n";
	else if (x == 0) cout << "Car and truck speed is the same.\n";
	else cout << "Car is faster.\n";

	cout << "\nComparing c2 and t2:\n";

	x = c3.sp_greater(t4); //������� �� ���� ����-������� �� car

	if (x < 0) cout << "Truck is faster.\n";
	else if (x == 0) cout << "Car and truck speed is the same.\n";
	else cout << "Car is faster.\n";

	/* Practice task 1 - Stack */

	cout << "\n\n----- Practice task 1 (Stack) -----\n";

	Stack s1;

	//����������� ������ � ����� �� �������� ��� ������ �� ��� char*.
	char* letter = s1.loadStack(); 

	//��������� ������ � ����� � ����������� ����� ������ � ����.
	for (int i = 0; i < 26; i++) 
	{
		cout << "\n\nThe alphabet letter " << i + 1 << " is: " << letter[i];
	}

	/* ���� ��� ��������� ������� "loadStack(int upper)" � �������� 1
	*  �� �� ����������� ��������� �� A �� Z. */
	letter = s1.loadStack(1); 

	for (int i = 0; i < 26; i++)
	{
		cout << "\n\nThe alphabet letter " << i + 1 << " is: " << letter[i];
	}

	/* Practice task 2 - Printers */

	cout << "\n\n----- Practice task 2 (Printers) -----\n";

	/*��������� ����� �� ��� "pr1" � �������� ������������ "printing" �� � ��� �������� 1
	  ����������� ��������� ����� "set_print(int status)", �.�. "������� 1 � ������� ��������".*/
	pr1 p1;
	p1.set_print(1);

	/*��������� ����� �� ��� "pr2" � �������� ������������ "printing" �� � ��� �������� 1
	  ����������� ��������� ����� "set_print(int status)", �.�. "������� 2 � ������� ��������".*/
	pr2 p2;
	p2.set_print(0);

	//��������� ������������ ������� inUse, ����� ����� "true", ��� 1 �� 2-�� �������� "���������".
	bool printerInUse = inUse(p1, p2);

	//������ �������� � ����������� ���� ���������� �� "���������" ��� ��.
	if (printerInUse) cout << "\nThe printers are in use\n";
	else cout << "\nThe printers are not in use.\n";

	//��������� ������� �� ������� 1 �� 0, �.�. ��� ���� �� "��������".
	p1.set_print(0);

	//������ ������� �������� �� ����� ��������
	printerInUse = inUse(p1, p2);

	//������ ������ ��������
	if (printerInUse) cout << "\nThe printers are in use\n";
	else cout << "\nThe printers are not in use.\n";

	return 0;
}