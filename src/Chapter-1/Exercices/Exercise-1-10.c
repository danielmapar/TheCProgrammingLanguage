/*
 ============================================================================
 Name        : Exercise-1-10.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 04/12/2013
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Write a program to copy its input to its output, replacing each
 	 	 	   tab by \t, each backspace by \b, and each backslash by \\.
  	  	  	   This makes tabs and backspaces visible in an unambiguous way.
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
	int c;

	while((c = getchar()) != EOF)
		if(c == '\t')
			printf("\\t");
		else if(c == '\b')
			printf("\\t");
		else if(c == '\\')
			printf("\\\\");

	return 0;
}
