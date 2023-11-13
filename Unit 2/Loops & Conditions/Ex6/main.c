/*
 * main.c
 *
 *  Created on: Nov 13, 2023
 *      Author: zeyad
 */

#include <stdio.h>

int main() {

    int n,x,sum;

    printf("Enter an integer: ");
    fflush(stdin);  fflush(stdout);
    scanf("%d",&n);

    sum=0;
    for (x=1 ; x<=n ;x++)
    {
        sum+=x;
    }
        printf("sum= %d",sum);

    return 0;
}

