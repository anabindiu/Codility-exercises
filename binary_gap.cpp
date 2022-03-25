// you can use includes, for example:
// #include <algorithm>
#include <stdio.h>
#include<iostream>
using namespace std;
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int main () {
    //first let's make a way to convert decimal to binary
    int array_for_remainder[1000];          //this array will keep track of the remainders
    int number;
    int remainder;
    cout << "Enter the number you want to find the binary gap of: \n";
    cin >> number;
    for(remainder = 0; number > 0; remainder++){
        array_for_remainder[remainder] = number%2;
        number= number/2;
    }

    //now we know that the binary number is stored in array_of_remainder[remainder]
    //now let's find a way to count the number of 0s and 1s in the binary number
    int count = 0;
    int maximum=0;
    for(remainder = remainder - 1; remainder >= 0; remainder--){
        //we want to check to see if there exists a one to begin with
        if(array_for_remainder[remainder] == 0){        
            count++;
        }
        if(array_for_remainder[remainder] == 1){
            maximum = max(maximum, count);
            count = 0;
        }
    }
    cout <<maximum <<endl;
    
    return maximum;
}
