//
// Created by mark on 1/27/20.
//

#include <iostream>
using std::cout;
using std::endl;

void printerFunction(int x = 1) {
    for (int i = 0; i < x; i++)
        cout << "an output statement from a function" << endl;
}
