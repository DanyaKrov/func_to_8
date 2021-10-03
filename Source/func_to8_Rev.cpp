#include "normal.h"
#include <iostream>

using namespace std;

string func_to8_Rev(int num)
{
    string arg;
    if (num >= 0)
        arg = if_pos(num, 2);
    else
        arg = if_neg(num, 2);
    return arg;
}
