/*
 * main.c
 *
 *  Created on: Nov 27, 2023
 *      Author: zeyad
 */

#include <stdio.h>
#define PI 3.14
#define area(r) (PI*(r)*(r))

int main() {
	int radius;
	float area;

	printf("Enter the redius: ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&radius);
	area = area(radius);
	printf("Area = %.2f ",area);

	return 0;
}
