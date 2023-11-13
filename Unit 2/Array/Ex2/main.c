/*
 * main.c
 *
 *  Created on: Nov 13, 2023
 *      Author: zeyad
 */

#include <stdio.h>

int main() {

    float a[100] ;
    float sum,average;
    int n,i;

    printf("Enter the number of data: ");
    fflush(stdin);  fflush(stdout);
    scanf("%d", &n);

    while (n>100 || n<=0)
    {
        printf("Error number should be in range");
        printf("Enter the number again");
        fflush(stdin);  fflush(stdout);
        scanf("%d",&n);
    }

    sum=0;
    for (i=0 ; i<n ; i++)
    {
        printf("%d. Enter number : ",i+1);
        fflush(stdin);  fflush(stdout);
        scanf("%f", &a[i]);
        sum+=a[i];
    }
    average = sum/n;
    printf("Average = %0.2f",average);

    return 0;
}

