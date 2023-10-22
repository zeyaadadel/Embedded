#include <stdio.h>

int main() {

    int n,x,sum;

    printf("Enter an integer: ");
    scanf("%d",&n);

    sum=0;
    for (x=1 ; x<=n ;x++)
    {
        sum+=x;
    }
        printf("sum= %d",sum);

    return 0;
}
