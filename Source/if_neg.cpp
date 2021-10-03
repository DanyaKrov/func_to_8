#include "normal.h"
#include <iostream>

using namespace std;

string if_neg(int num, int type){
    string NumInTw, NumInTw2, NumInTw3;
    NumInTw = "1 ";
        NumInTw2 = "1 ";
        num = num * -1;
        for (int i = 6; i >= 0; i--){
            if (num >= pow_but_cooler(2, i)){
                    num -= pow_but_cooler(2, i);
                    NumInTw += "1";
                    NumInTw2 += "0";
            }
            else{
                NumInTw += "0";
                NumInTw2 += "1";
            }
            NumInTw += " ";
            NumInTw2 += " ";
        }
    NumInTw2 = NumInTw;
    NumInTw3 = NumInTw2;
    if (type == 1)
        return NumInTw;
    else if (type == 2)
        return NumInTw2;
    else
        return NumInTw3;
}
