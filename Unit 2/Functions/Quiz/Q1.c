#include<stdio.h>
#include<string.h>

int main (){

    char name[100];
    char username[]="zeyad";
    int x;

    printf("Enter your username: ");
    gets(name);

    x = strcmp(username,name);
    if (x==0)
        printf("correct username");
    else printf("wrong username");

    return 0;

}