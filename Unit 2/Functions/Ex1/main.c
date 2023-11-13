/*
 * main.c
 *
 *  Created on: Nov 13, 2023
 *      Author: zeyad
 */

#include <stdio.h>

int checkprime(int num);

int main() {

    int n,x,i,flag;

    printf("Enter two numbers (intervals): ");
    fflush(stdin);  fflush(stdout);
    scanf("%d %d", &n,&x);

    printf("prime number between %d and %d are: ",n,x);
    for (i=n+1;i<x;i++)
    {
        flag=checkprime(i);
        if (flag==0)
        printf("%d\n",i);
    }

    return 0;
}

int checkprime(int num){

    int flag=0;
    for (int j=2;j<=num/2;j++)
    {
        if (num %j == 0){
            flag=1;
            break;
        }
    }
    return flag;
}

