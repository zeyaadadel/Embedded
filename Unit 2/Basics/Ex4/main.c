/*
 * main.c
 *
 *  Created on: Nov 13, 2023
 *      Author: zeyad
 */

#include <stdio.h>

int main() {
  float x,y;

  printf("Enter two numbers: ");
  fflush(stdin);  fflush(stdout);
  scanf("%f %f",&x,&y);
  printf("product: %f\n",x*y);

  return 0;
}

