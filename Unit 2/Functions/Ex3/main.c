/*
 * main.c
 *
 *  Created on: Nov 13, 2023
 *      Author: zeyad
 */

#include <stdio.h>

void Reverse();

int main() {

    printf("Enter a sentence: ");
    fflush(stdout);
    Reverse();

    return 0;
}

void Reverse(){
    char c;

    scanf("%c",&c);
    if (c!='\n'){
        Reverse();
        printf("%c",c);
    }
}

