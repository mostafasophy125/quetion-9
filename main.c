/*
 Write a C program to input a number and check whether it is divisible by both 5 and 11 using if-else.
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int x;
    puts("Enter num:");
    scanf("%d",&x);
    if(x%5==0&&x%11==0){
        printf("Divisible by both 5 and 11");
    }
    else{
        printf("Not Divisible by both 5 and 11");

    }
}
