/*
 * main.c
 *
 *  Created on: Nov 27, 2023
 *      Author: zeyad
 */

#include <stdio.h>

struct Sstu {
	char name[100];
	int roll;
	float mark;
};

int main() {
	struct Sstu S;

	printf("Enter information for students: \n");
	printf("Enter name: ");
	fflush(stdin);   fflush(stdout);
	scanf("%s",S.name);
	printf("Enter roll number: ");
	fflush(stdin);   fflush(stdout);
	scanf("%d",&S.roll);
	printf("Enter Marks: ");
	fflush(stdin);   fflush(stdout);
	scanf("%f",&S.mark);
	printf("\n Displaying informations: \n");
	printf(" Name: %s\n",S.name);
	printf(" Roll number: %d\n",S.roll);
	printf(" Mark: %.2f",S.mark);

	return 0;
}
