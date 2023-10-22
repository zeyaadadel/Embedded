#include <stdio.h>

int main() {

    float a;

    printf("Enter a number: ");
    scanf("%f",&a);

    if (a>0)
        printf("%.1f is positive ",a);
    else if (a<0)
        printf("%.1f is negative ",a);
    else
        printf("You entered Zero");

    return 0;
}
