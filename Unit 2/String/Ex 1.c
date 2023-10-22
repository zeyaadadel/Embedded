#include <stdio.h>

int main() {

    char a[1000],c ;
    int i,count;

    printf("Enter a string: ");
    gets(a);

    printf("Enter a character to find frequency : ");
    scanf("%c", &c);

    for (i=0 ; a[i]!= '0' ; i++){
        if (c==a[i])
            count++;
    }
    printf("Frequency of %c= %d", c,count);

    return 0;
}
