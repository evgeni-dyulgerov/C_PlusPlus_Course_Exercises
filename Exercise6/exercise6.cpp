#include <iostream>
#include <math.h>
#include "exercise6-example1.h"
#include "lab-code.h"
#include "exercise6-example2.h"
#include "exercise6-example3.h"
using namespace std;
using namespace exercise6;

// Function comparing a constant with a CBox object
int operator>(const double& value, const CBox& aBox)
{
    return value > aBox.Volume();
}

int main()
{
    /* Example task 1 - Overloading operators +, -, = */
    cout << "\n\n----- Example task 1 (Overloading operators +, -, =) -----\n\n";

    coord o1(10, 10), o2(5, 3), o3;
    int x, y;
    o3 = o1 + o2; //добавя два обекта – извиква се operator+()
    o3.get_xy(x, y);
    cout << "(o1 + o2) X:" << x << ", Y : " << y << "\n";
    o3 = o1 - o2; //изважда два обекта – извиква се operator-()
    o3.get_xy(x, y);
    cout << "(o1 - o2) X:" << x << ", Y : " << y << "\n";
    o3 = o1; //присвоява обект - извиква се operator=()
    o3.get_xy(x, y);
    cout << "(o3 = o1) X:" << x << ", Y : " << y << "\n";
    
    /* Example task 2 - Overloading operators -- */
    cout << "\n\n----- Example task 2 (Overloading operators --) -----\n\n";

    coord2 o4(10, 10);
    int a, b;
    --o4; //декрементиране на обект
    o4.get_xy(a, b);
    cout << "(--o1) X:" << a << ", Y : " << b << "\n";
    o4--; //декрементиране на обект
    o4.get_xy(a, b);
    cout << "(o1--) X:" << a << ", Y : " << b << "\n";
    
    /* Example task 3 - Overloading using friend functions -- */
    cout << "\n\n----- Example task 3 (Overloading using friend functions) -----\n\n";

    coord3 o5(10, 10);
    int c, d;
    ++o5; //o1 се подава с псевдоним
    o5.get_xy(c, d);
    cout << "(++o1) X:" << c << ", Y : " << d << "\n";
    
    /* Lab Code - CBox objects */
    cout << "\n\n----- Lab Code (CBox objects) -----\n\n";

    CBox smallBox(4.0, 2.0, 1.0);
    CBox mediumBox(10.0, 4.0, 2.0);
    CBox aBox;
    CBox bBox;

    aBox = smallBox + mediumBox;
    cout << "aBox dimensions are ";
    aBox.ShowBox();

    bBox = aBox + smallBox + mediumBox;
    cout << "bBox dimensions are ";
    bBox.ShowBox();

    return 0;
}

