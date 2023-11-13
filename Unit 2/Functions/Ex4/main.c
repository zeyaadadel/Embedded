/*
 * main.c
 *
 *  Created on: Nov 13, 2023
 *      Author: zeyad
 */

#include <stdio.h>

int power(int i,int j);

int main() {
    int x,n;

    printf("Enter base number: ");
    fflush(stdin);  fflush(stdout);
    scanf("%d",&x);
    printf("Enter power number: ");
    fflush(stdin);  fflush(stdout);
    scanf("%d",&n);

    printf("%d^%d=%d",x,n,power(x,n));

    return 0;
}

int power(int x,int n){

    if (n!=0)
        return (x*power(x,n-1));
    else
    return 1;
}

