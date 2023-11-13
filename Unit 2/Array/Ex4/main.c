/*
 * main.c
 *
 *  Created on: Nov 13, 2023
 *      Author: zeyad
 */

#include <stdio.h>

int main() {

    int a[30] ;
    int x,y,i,l;

    printf("Enter number of elements: ");
    fflush(stdin);  fflush(stdout);
    scanf("%d", &x);

    printf("Enter the elements : ");
    for (i=0 ; i<x ; i++)
    {
    	fflush(stdin);  fflush(stdout);
        scanf("%d", &a[i]);
    }

     printf("Enter the element to be inserted : ");
     fflush(stdin);  fflush(stdout);
     scanf("%d", &y);
     printf("Enter the Location : ");
     fflush(stdin);  fflush(stdout);
     scanf("%d", &l);

     for (i=x ; i>=l ; i--) {
        a[i]=a[i-1];
     }
     x++;
     a[l-1]=y;

     for (i=0 ; i<x ;i++)
        printf("\n %d",a[i]);


    return 0;
}

