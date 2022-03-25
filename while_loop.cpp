/*
    Given a positive integer n, how can we count the number of digits in its
    decimal represantion without converting the integer to a string then counting
    the characters?
*/
#include <stdio.h>
#include<iostream>
using namespace std;

int main(int argc, char * argv[]){
    int number = 0; //lets say we have numebr 3456 --> we have 4 digits
    int n = 34567;
    while(n > 0){   //check to see if the number is bigger than 0 
        n = n / 10; //divide the number by 10 as everytime the number will decrease by 1 decimal
        number +=1; //count the amount of times we can divide the number by 10
    }
    cout << number << endl;

    return 0;
}