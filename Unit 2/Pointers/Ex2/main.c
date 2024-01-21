/*
 * main.c
 *
 *  Created on: Dec 24, 2023
 *      Author: zeyad
 */

#include <stdio.h>

int main() {
	int x;
	char* p;
	char alph[27];

	p = alph;
	for (x=0; x<26;x++)
	{
		*p = x+'A';
		p++;
	}
	p = alph;
	for (x=0;x<26;x++)
	{
		printf("%c",*p);
		p++;
	}

	return 0;
}
