/*
 * main.c
 *
 *  Created on: Nov 13, 2023
 *      Author: zeyad
 */

#include <stdio.h>

int main() {
  int x,y;

  printf("Enter two integers: ");
  fflush(stdin);  fflush(stdout);
  scanf("%d %d",&x,&y);
  printf("Sum: %d\n",x+y);

  return 0;
}

