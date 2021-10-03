#include "normal.h"
#include <iostream>

using namespace std;

string if_pos(int num, int type){
    string NumInTw;
    string NumInTw2;
    string NumInTw3;
    for (int i = 7; i >= 0; i--){
            if (num >= pow_but_cooler(2, i)){
                    num -= pow_but_cooler(2, i);
                    NumInTw += "1";
            }
            else{
                NumInTw += "0";
            }
            NumInTw += " ";
            NumInTw2 += " ";
        }
    NumInTw2 = NumInTw;
    NumInTw3 = NumInTw2;
    return NumInTw;
}
