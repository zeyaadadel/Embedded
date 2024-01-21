/*
 * main.c
 *
 *  Created on: Dec 24, 2023
 *      Author: zeyad
 */

#include <stdio.h>

int main () {
	char str[100],rev[100];
	char *pstr;
	char *prev;
	int i;

	pstr = str;
	prev = rev;
	printf("Input a string: ");
	fflush(stdin);   fflush(stdout);
	scanf("%s",str);
	while (*pstr)
	{
		pstr++;
		i++;
	}
	while (i>=0) {
		pstr--;
		*prev = *pstr;
		prev++;
		--i;
	}
	*prev='\0';

	printf("Reverse of the string is : %s\n",rev);

	return 0;
}
