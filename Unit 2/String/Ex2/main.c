/*
 * main.c
 *
 *  Created on: Nov 13, 2023
 *      Author: zeyad
 */

#include <stdio.h>

int main() {

     char s[1000] ;
     int c=0;

    printf("Enter a string: ");
    fflush(stdin);  fflush(stdout);
    gets(s);

    for(int i = 0; s[i] != '\0'; i++)
        c++;
    printf("Length of string: %d", c);

    return 0;
}

