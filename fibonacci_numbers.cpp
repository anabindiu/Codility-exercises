/*  The Fibonacci number form a sequence of integers defined recursively
in the following way. The first two number in the Fibonacci sequence are 0 and 1
and each subsequent number is the sum of the previous two. The first few
elements in this sequence are: 0, 1, 1, 2, 3, 5, 8, 13. Write a program
that prints the Fibonacci numbers, not exceeding a given integer n.
*/

#include <stdio.h>
#include<iostream>
using namespace std;

int main(int argc, char * argv[]){
    int given_integer = 23;
    int first_number = 0;
    int second_number = 1;
    int third_number = 0;
    while(first_number <= given_integer){
        cout << first_number << endl;
        third_number = first_number + second_number;
        first_number = second_number;
        second_number = third_number;
    }
    return 0;
}