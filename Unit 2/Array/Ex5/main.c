/*
 * main.c
 *
 *  Created on: Nov 13, 2023
 *      Author: zeyad
 */


#include <stdio.h>

int main() {
    int a[30];
    int x,i,n;

    printf("Enter the elements number: ");
    fflush(stdin);  fflush(stdout);
    scanf("%d",&n);

    for (i=0; i<n;i++)
    {
    	fflush(stdin);  fflush(stdout);
    	scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched: ");
    fflush(stdin);  fflush(stdout);
    scanf("%d",&x);

   for(i = 1; i <= n; i++)
       { if(a[i] == x)
            {
                printf("Number found at the location = %d", i+1 );
                break;
            }
            else if (i==n)
            printf("number not found");
       }


    return 0;
}
