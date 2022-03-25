/* Print a triangle made of asterisks ('*') separated by spaces and consisting
of n rows but this triangle will be upside down and symmetrical and will contain
2n-1 asteriks 
*/
#include <stdio.h>

int main(int argc, char * argv[])
{
    int n = 5;
    for(int i = n; i > 0; i--){    //print one row of the triangle 
        for(int j = 0; j < n - i; j++){ //loop through the row if the asteriks number is lower than total of rows minus number of rows left, then u add the difference in as a space 
            printf(" ");
        }
        for(int j = 0 ; j <  2 * i - 1; j++){ //print the asterisks
            printf("*");
        }
        printf("\n");
    }
    return 0;
}