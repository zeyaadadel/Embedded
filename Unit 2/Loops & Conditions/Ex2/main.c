/*
 * main.c
 *
 *  Created on: Nov 13, 2023
 *      Author: zeyad
 */

#include <stdio.h>

int main() {

    char c;

    printf("Enter an alphabet: ");
    fflush(stdin);  fflush(stdout);
    scanf("%c",&c);

    if (c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='a'||c=='o'||c=='i'||c=='e'||c=='u')
        printf("%c is a vowel",c);
    else
        printf("%c is consonant",c);

    return 0;
}

