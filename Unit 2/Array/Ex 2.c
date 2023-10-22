#include <stdio.h>

int main() {

    float a[100] ;
    float sum,average;
    int n,i;

    printf("Enter the number of data: ");
    scanf("%d", &n);

    while (n>100 || n<=0)
    {
        printf("Error number should be in range");
        printf("Enter the number again");
        scanf("%d",&n);
    }

    sum=0;
    for (i=0 ; i<n ; i++)
    {
        printf("%d. Enter number : ",i+1);
        scanf("%f", &a[i]);
        sum+=a[i];
    }
    average = sum/n;
    printf("Average = %0.2f",average);

    return 0;
}
