#include<iostream>
using namespace std;

#include "Box.h"

void Box::draw() {
    for (int n = 0; n < height; n++) {
        for (int m = 0; m < width; m++) cout << fill;
        cout << endl;
    }
}
