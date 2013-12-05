/*
 ============================================================================
 Name        : 1.5.1-FileCopying-2.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 02/12/2013
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : The simplest example is a program that
			   copies its input to its outptut one character at a time v2.
 ============================================================================
 */

#include <stdio.h>

/* copy input to output; 2nd version */
int main(void)
{
	int c;

	while((c = getchar()) != EOF)
	{
		putchar(c);
	}

	return 0;
}
