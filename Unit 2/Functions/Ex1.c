#include <stdio.h>

int checkprime(int num);

int main() {

    int n,x,i,flag;

    printf("Enter two numbers (intervals): ");
    scanf("%d %d", &n,&x);

    printf("prime number between %d and %d are: ",&n,&x);
    for (i=n+1;i<x;i++)
    {
        flag=checkprime(i);
        if (flag==0)
        printf("%d",i);
    }

    return 0;
}

int checkprime(int num){

    int j,flag=0;
    for (j=2;j<num/2;j++)
    {
        if (num%j==0){
            flag=1;
            break;
        }
    }
    return flag;
}
