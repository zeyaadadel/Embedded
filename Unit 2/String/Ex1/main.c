/*
 * main.c
 *
 *  Created on: Nov 13, 2023
 *      Author: zeyad
 */

#include <stdio.h>
#include <string.h>

int main() {

    char a[1000],c ;
    int count =0;

    printf("Enter a string: ");
    fflush(stdin);  fflush(stdout);
    gets(a);

    printf("Enter a character to find frequency : ");
    fflush(stdin);  fflush(stdout);
    scanf("%c", &c);

    for (int i=0 ; a[i]!= '0' ; i++){
        if (a[i]==c)
            count++;
    }
    printf("Frequency of %c= %d", c,count);

    return 0;
}

