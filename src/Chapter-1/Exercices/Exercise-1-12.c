/*
 ============================================================================
 Name        : Exercise-1-12.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 04/12/2013
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Write a program that prints its input one word per line.
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
	int c;

	while((c = getchar()) != EOF)
	{
		if(c == ' ' || c == '\n' || c == '\t' ||  c == '\\')
			printf("\n");
		else
			putchar(c);
	}

	return 0;
}
