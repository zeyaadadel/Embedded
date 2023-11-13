/*
 * main.c
 *
 *  Created on: Nov 13, 2023
 *      Author: zeyad
 */

#include <stdio.h>

int factorial(int num);

int main() {

    int n;

    printf("Enter an positive integer: ");
    fflush(stdin);  fflush(stdout);
    scanf("%d", &n);

    printf("Factorial of %d is: %d", n, factorial(n) );

    return 0;
}

int factorial(int num){

	if (num == 0 || num == 1){
		return 1;
	}
	else {
    return num*factorial(num-1);
	}
}

