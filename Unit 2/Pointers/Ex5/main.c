/*
 * main.c
 *
 *  Created on: Dec 24, 2023
 *      Author: zeyad
 */

#include <stdio.h>

struct Person {
    char *name;
    int ID;
};

int main() {
    static struct Person emp1={"john",1001},emp2={"Jack",1003},emp3={"Alex",1002};
    struct Person(*arr[])= {&emp1,&emp2,&emp3};
    struct Person(*(*pt)[3])= &arr;

    printf("Employee Name: %s \n",(**(*pt+2)).name);
    printf("Employee ID: %d \n",(*(*pt+2))->ID);

    return 0;
}
