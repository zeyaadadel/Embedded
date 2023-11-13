/*
 * main.c
 *
 *  Created on: Nov 13, 2023
 *      Author: zeyad
 */

#include <stdio.h>

int main() {
  float a,b;

  printf("Enter a value of a: ");
  fflush(stdin);  fflush(stdout);
  scanf("%f",&a);
  printf("Enter a value of b: ");
  fflush(stdin);  fflush(stdout);
  scanf("%f",&b);
  printf("Value of a : %.2f \n", b);
  printf("Value of b : %.2f", a);

  return 0;
}
