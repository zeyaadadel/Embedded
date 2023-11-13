/*
 * main.c
 *
 *  Created on: Nov 13, 2023
 *      Author: zeyad
 */

#include <stdio.h>

int main() {
  char x;

  printf("Enter a character: ");
  fflush(stdin);  fflush(stdout);
  scanf("%c",&x);
  printf("ASCII value of %c = %d\n", x, x);

 return 0;
}

