// C_PlusPlus_Course_Exercises.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "triangle.cpp"

int main()
{
    triangle ob1; //Създаване на обект ob1 от клас triangle
    double s;
    s = ob1.face(); //Извиква се член-функция face() за обект ob1
    ob1.show((char*)"triangle1"); //Извиква се член-функция show() за обект ob1
    cout << "\nThe face of triangle1 is s = " << s;
    triangle ob2;
    triangle* p; //Декларира се указател към обект от клас triangle
    p = &ob2; //Указателят се установява да сочи към ob2
    s = p->face(); //Извиква се член-функция face() за обект ob2
    p->show((char*)"triangle2"); //Извиква се член-функция show() за обект ob2
    cout << "\nThe face of triangle2 is s = " << s;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
