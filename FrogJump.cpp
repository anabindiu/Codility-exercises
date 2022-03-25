/*
Find longest sequence of zeros in binary representation of an integer.
*/

#include <stdio.h>
#include<iostream>
using namespace std;

int main () {
    int X = 10;
    int Y = 85;
    int D = 30;
    int counter = (Y - X) / D;
    if ((Y - X) % D == 0) {
        return counter;
    }
    else{
        return counter + 1;
    }
}