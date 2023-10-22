#include <stdio.h>

int factorial(int num);

int main() {

    int n;

    printf("Enter an positive integer: ");
    scanf("%d", &n);

    printf("Factorial of %d is: %ld",&n,factorial(n));

    return 0;
}

int factorial(int num){

    if (num!=1)
    return n*factorial(num-1);
}
