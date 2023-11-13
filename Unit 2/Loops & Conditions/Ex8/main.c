/*
 * main.c
 *
 *  Created on: Nov 13, 2023
 *      Author: zeyad
 */

#include <stdio.h>

int main() {

    char c;
    float x,y ;

    printf("Enter operator either + or - or * divide: ");
    fflush(stdin);  fflush(stdout);
    scanf("%c",&c);
    printf("Enter two operands: ");
    fflush(stdin);  fflush(stdout);
    scanf("%f %f",&x,&y);

    switch (c) {
         case '+':
              printf("%.1f+%.1f=%.1f" , x,y,x+y);
              break;
         case '-':
              printf("%.1f-%.1f=%.1f" , x,y,x-y);
              break;
         case '*':
              printf("%.1f*%.1f=%.1f ", x,y,x*y);
              break;
        case '/':
              printf("%.1f/%.1f=%.1f" , x,y,x/y);
              break;
        default:
            printf("Error! operator is not correct");
            break;
    }
    return 0;
}

