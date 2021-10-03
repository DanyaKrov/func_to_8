#include "normal.h"
#include <iostream>

using namespace std;

string func_to8_Str(int num){
    string arg;
    if (num >= 0)
        arg = if_pos(num, 1);
    else
        arg = if_neg(num, 1);
    return arg;
}
