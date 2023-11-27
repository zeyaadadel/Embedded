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
	struct Sstu S[10];
	int i;

	printf("Enter information for students: \n");
	for (i=0;i<10;++i) {
		S[i].roll=i+1;
		printf("\nFor roll number %d\n",S[i].roll);
		printf("Enter name: ");
		fflush(stdin);   fflush(stdout);
		scanf("%s",S[i].name);
		printf("Enter Marks: ");
		fflush(stdin);   fflush(stdout);
		scanf("%f",&S[i].mark);
		printf("\n");
	}
	printf("\n Displaying information of students: \n");
	for (i=0;i<10;++i) {
		printf("\n Information for roll number %d\n",i+1);
		printf(" Name: %s\n",S[i].name);
		printf(" Mark: %.2f",S[i].mark);
	}

	return 0;
}
