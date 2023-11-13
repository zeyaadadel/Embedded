/*
 * main.c
 *
 *  Created on: Nov 13, 2023
 *      Author: zeyad
 */

#include <stdio.h>

int main() {
  float a, b;

	printf("Enter the value of a: ");
	fflush(stdin);  fflush(stdout);
	scanf("%f", &a);
	printf("Enter the value of b: ");
	fflush(stdin);  fflush(stdout);
	scanf("%f", &b);

	a = a + b;
	b = a - b;
	a = a - b;

	printf("After swapping, value of a = %.2f \n After swapping, value of b = %.2f", a, b);

    return 0;
}
