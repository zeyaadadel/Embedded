/*
 * main.c
 *
 *  Created on: Nov 13, 2023
 *      Author: zeyad
 */

#include <stdio.h>
#include <string.h>

int main() {

     char s[1000] ;
     int c=0;

    printf("Enter a string: ");
    fflush(stdin);  fflush(stdout);
    gets(s);
    c = strlen(s);

    printf("Reverse string is : ");

    for(int i = c; i >= 0; i--)
        printf("%c", s[i]);

    return 0;
}

