/*
 * main.c
 *
 *  Created on: Nov 13, 2023
 *      Author: zeyad
 */

#include <stdio.h>

int main() {

    float a;

    printf("Enter a number: ");
    fflush(stdin);  fflush(stdout);
    scanf("%f",&a);

    if (a>0)
        printf("%.1f is positive ",a);
    else if (a<0)
        printf("%.1f is negative ",a);
    else
        printf("You entered Zero");

    return 0;
}

