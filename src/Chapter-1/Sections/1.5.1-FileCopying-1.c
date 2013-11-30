/*
 ============================================================================
 Name        : 1.5.1-FileCopying.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 14/11/2013
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : The simplest example is a program that
			   copies its input to its outptut one character at a time.
 ============================================================================
 */

#include <stdio.h>

/* copy input to output; 1st version */
int main(void)
{
	int c;

	c = getchar();
	while(c != EOF)
	{
		putchar(c);
		c = getchar();
	}

	return 0;
}
