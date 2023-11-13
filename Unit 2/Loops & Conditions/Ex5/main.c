/*
 * main.c
 *
 *  Created on: Nov 13, 2023
 *      Author: zeyad
 */

#include <stdio.h>

int main() {

    char c;

    printf("Enter a character: ");
    fflush(stdin);  fflush(stdout);
    scanf("%c",&c);

    if (( c>='A' && c <='Z') || (c>='a' && c<='z'))
        printf("%c is an alphabet ",c);
    else
        printf("%c is not alphabet",c);

    return 0;
}

