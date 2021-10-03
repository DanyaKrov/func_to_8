#include "normal.h"
#include <iostream>

using namespace std;

int pow_but_cooler(int a, int deg)
{
    int number = 1;
    for (int counter = 1; counter <= deg; counter ++ )
        number = number * a;
    return number;
}
