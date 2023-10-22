#include <stdio.h>

int main() {

    int a[30] ;
    int x,y,i,l;

    printf("Enter number of elements: ");
    scanf("%d", &x);

    printf("Enter the elements : ");
    for (i=0 ; i<x ; i++)
    {
        scanf("%d", &a[i]);
    }

     printf("Enter the element to be inserted : ");
     scanf("%d", &y);
     printf("Enter the Location : ");
     scanf("%d", &l);

     for (i=x ; i>=l ; i--) {
        a[i]=a[i-1];
     }
     x++;
     a[l-1]=y;

     for (i=0 ; i<x ;i++)
        printf("\n %d",a[i]);


    return 0;
}
