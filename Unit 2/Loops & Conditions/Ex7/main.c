/*
 * main.c
 *
 *  Created on: Nov 13, 2023
 *      Author: zeyad
 */

#include <stdio.h>

int main() {

    int n,x;
    unsigned long long int sum ;

    printf("Enter an integer: ");
    fflush(stdin);  fflush(stdout);
    scanf("%d",&n);

    if (n>0)
    {
    sum=1;
    for (x=1 ; x<=n ;++x)
    {sum*=x;}
    printf("Factorial= %llu",sum);
    }
    else if (n<0)
        printf("Error!!! Factorial of negative number does not exist");
    else
        printf("Factorial= 1");

    return 0;
}

