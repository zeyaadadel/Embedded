/*
 * main.c
 *
 *  Created on: Dec 24, 2023
 *      Author: zeyad
 */

#include <stdio.h>

int main () {
	int n,i,arr[15];
	int* p;

	printf("Enter the number of elements : ");
	fflush(stdin);   fflush(stdout);
	scanf("%d",&n);
	p=&arr[0];
	printf("Input %d number of elements in array: \n",n);
	for (i=0;i<n;i++)
	{
		printf("element -%d : ",i+1);
		fflush(stdin);   fflush(stdout);
		scanf("%d",p);
		p++;
	}
	p=&arr[n-1];
	printf("the element of array in reverse order are : \n");
	for (i=n;i>0;i--){
		printf("\n element -%d : %d",i,*p);
		p--;
	}

	return 0;
}
