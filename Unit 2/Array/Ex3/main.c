/*
 * main.c
 *
 *  Created on: Nov 13, 2023
 *      Author: zeyad
 */

#include <stdio.h>

int main() {

    int a[10][10],t[10][10] ;
    int x,y,i,j;

    printf("Enter number of rows and coloums: ");
    fflush(stdin);  fflush(stdout);
    scanf("%d %d", &x,&y);

    printf("Enter elements of matrix: ");
    for (i=0 ; i<x ; i++)
        for (j=0 ; j<y ; j++)
    {
        printf("Enter Elements a%d%d: ",i+1,j+1);
        fflush(stdin);  fflush(stdout);
        scanf("%d", &a[i][j]);
    }

     printf("\n Entered matrix : ");
     for (i=0 ; i<x ; i++)
        for (j=0 ; j<y ; j++)
    {
        printf("%d ",a[i][j]);
        if (j==y-1) printf("\n\n ");
    }

    for (i=0 ; i<x ; i++)
        for (j=0 ; j<y ; j++)
    {
        t[j][i]=a[i][j];
    }

    printf("\n transpose of matrix : ");
     for (i=0 ; i<y ; i++)
        for (j=0 ; j<x ; j++)
    {
        printf("%d ",t[i][j]);
        if (j==x-1) printf("\n\n ");
    }


    return 0;
}

