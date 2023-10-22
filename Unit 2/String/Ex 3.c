#include <stdio.h>

int main() {

     char s[1000] ;
     int i, c=0;

    printf("Enter a string: ");
    gets(s);
    c=strlen(S);

    printf("Reverse string is : ");

    for(int i = c; i >= 0; i--)
        printf("%c", s[i]);

    return 0;
}
