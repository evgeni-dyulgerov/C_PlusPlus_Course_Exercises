#define _CRT_SECURE_NO_WARNINGS
#include "exercise5-example1.h"
#include <iostream>
#include <math.h>
#include "exercise5-example1.h"
#include "lab-code.h"
#include "task1.h"
using namespace std;
using namespace exercise5;

int main()
{
    /* Example task 1 - Vehicle */
    cout << "\n\n----- Example task 1 (Vehicle) -----\n\n";

    car c(power, gas, 5, 4, 500);
    c.show();

    /* Lab Code - Zoo */
    cout << "\n\n----- Lab Code (Zoo) -----\n\n";

    cout << "Virtual Function Example\n";
    headPtr = makelist(headPtr);
    print(headPtr);

    /* Example task 1 - Media Collection Tools */
    cout << "\n\n----- Practice task 1 (Zoo with Tiger and Elephant) -----\n";

    taskPtr = makeTask1List(taskPtr);
    print(taskPtr);

    return 0;
}