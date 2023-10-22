#include <stdio.h>

int power(int i,int j);

int main() {
    int x,n;

    printf("Enter base number: ");
    scanf("%d",&x);
    printf("Enter power number: ");
    scanf("%d",&n);

    printf("%d^%d=%d",x,n,power(x,n));
 
    return 0;
}

int power(int x,int n){

    if (n!=0)
        return (x*power(x,n-1));
    else 
    return 1;
}
