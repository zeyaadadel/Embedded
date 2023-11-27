/*
 * main.c
 *
 *  Created on: Nov 27, 2023
 *      Author: zeyad
 */

/*
 * main.c
 *
 *  Created on: Nov 27, 2023
 *      Author: zeyad
 */

#include <stdio.h>

struct Scomplex {
	float real;
	float img;
}d1,d2,sum;

int main() {

	printf("For 1st complex number: \n");
	printf("Enter real and imaginary respectively: ");
	fflush(stdin);   fflush(stdout);
	scanf("%f %f",&d1.real,&d1.img);

	printf("For 2nd complex number: \n");
	printf("Enter real and imaginary respectively: ");
	fflush(stdin);   fflush(stdout);
	scanf("%f %f",&d2.real,&d2.img);

	sum.real = d1.real + d2.real;
	sum.img = d1.img + d2.img;

	printf("\n Sum= %.2f + %.2fi",sum.real,sum.img);

	return 0;
}


