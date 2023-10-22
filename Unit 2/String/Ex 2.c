#include <stdio.h>

int main() {

     char s[1000] ;
     int i,c=0;

    printf("Enter a string: ");
    gets(s);

    for(i = 0; s[i] != '\0'; i++)
        c++;
    printf("Length of string: %d", c);

    return 0;
}
