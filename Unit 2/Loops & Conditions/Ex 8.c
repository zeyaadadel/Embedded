#include <stdio.h>

int main() {

    char c;
    float x,y ;

    printf("Enter operator either + or - or * divide: ");
    scanf("%c",&c);
    printf("Enter two operands: ");
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
