/*
 * main.c
 *
 *  Created on: Nov 27, 2023
 *      Author: zeyad
 */

#include <stdio.h>

struct SDistance {
	int feet;
	float inch;
}d1,d2,sum;

int main() {

	printf("Enter information of 1st Distance: \n");
	printf("Enter feet: ");
	fflush(stdin);   fflush(stdout);
	scanf("%d",&d1.feet);
	printf("Enter inch: ");
	fflush(stdin);   fflush(stdout);
	scanf("%f",&d1.inch);

	printf("Enter information of 2st Distance: \n");
	printf("Enter feet: ");
	fflush(stdin);   fflush(stdout);
	scanf("%d",&d2.feet);
	printf("Enter inch: ");
	fflush(stdin);   fflush(stdout);
	scanf("%f",&d2.inch);

	sum.feet = d1.feet + d2.feet;
	sum.inch = d1.inch + d2.inch;
	if (sum.inch>12) {
		sum.inch=sum.inch - 12;
		++sum.feet;
	}

	printf("\n Sum of distances= %d\'-%.2f\"",sum.feet,sum.inch);

	return 0;
}

