#include "exercise4-example1.h"
#include <iostream>
#include <math.h>
using namespace std;
using namespace exercise4;

int main()
{
    /* Example task 1 - Car and Truck */
    cout << "\n\n----- Example task 1 (Car and Truck) -----\n\n";

    car c(5, 4, 500);
    truck t(30000, 12, 1200);
    cout << "Car:\n";
    c.show();
    cout << "\nTruck:\n";
    t.show();
    return 0;
}