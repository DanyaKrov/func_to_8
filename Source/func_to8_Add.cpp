//перевод в дополнительный код
#include "normal.h"
#include <iostream>

using namespace std;
string func_to8_Add(int num)
{
    string arg;
    if (num >= 0)
        arg = if_pos(num, 3);
    else
        arg = if_neg(num, 3);
    return arg;
}
