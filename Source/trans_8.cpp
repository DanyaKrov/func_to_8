#include "normal.h"
#include <iostream>

using namespace std;


string trans_8(int num, int type)
{
    if (type == 1)
        return func_to8_Str(num);
    else if (type == 2)
        return func_to8_Rev(num);
    else
        return func_to8_Add(num);
}
