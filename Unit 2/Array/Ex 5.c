
#include <stdio.h>

int main() { 
    int a[30];
    int x,i,n;
    
    printf("Enter the elements number: ");
    scanf("%d",&n);
    
    for (i=0; i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d",&x);
    
   for(i = 1; i <= n; i++)
       { if(a[i] == x)
            { 
                printf("Number found at the location = %d", i+1 );
                break;
            }
            else if (i==n)
            printf("number not found");
       }
        

    return 0;
}