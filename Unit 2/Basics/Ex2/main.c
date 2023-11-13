/*
 * main.c
 *
 *  Created on: Nov 13, 2023
 *      Author: zeyad
 */

#include <stdio.h>

int main() {
  int x;

  printf("Enter a integer: ");
  fflush(stdin);  fflush(stdout);
  scanf("%d",&x);
  printf("You entered: %d\n",x);

  return 0;
}

