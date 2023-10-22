#include <stdio.h>

int main() {
  float a, b;

	printf("Enter the value of a: ");
	scanf("%f", &a);
	printf("Enter the value of b: ");
	scanf("%f", &b);

	a = a + b;
	b = a - b;
	a = a - b;

	printf("After swapping, value of a = %.2f \n After swapping, value of b = %.2f", a, b);

    return 0;
}
