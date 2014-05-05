/*
 ============================================================================
 Name        : Exercise-1-8.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 03/12/2013
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Write a program to count blanks, tabs, and newlines.
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
	int counter = 0, c;

	while((c = getchar()) != EOF)
		if(c == ' ' || c == '\t' || c == '\n')
			++counter;

	printf("Total: %d\n", counter);

	return 0;
}



