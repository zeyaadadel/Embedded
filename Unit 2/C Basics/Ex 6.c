#include <stdio.h>

int main() {
  float a,b;

    printf("Enter a value of a: ");
    scanf("%f",&a);
    printf("Enter a value of b: ");
    scanf("%f",&b);
    printf("Value of a : %.2f \n", b);
    printf("Value of b : %.2f", a);

    return 0;
}

####diff solution###

 #include <stdio.h>

int main() {
 float a,b,temp;

    printf("Enter a value of a: ");
    scanf("%f",&a);
    printf("Enter a value of b: ");
    scanf("%f",&b);
    temp=a;
    a=b;
    b=temp;
    printf("Value of a : %.2f \n", a);
    printf("Value of b : %.2f", b);

    return 0;
}

