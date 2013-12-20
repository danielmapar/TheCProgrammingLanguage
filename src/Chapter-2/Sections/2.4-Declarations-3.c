/*
 ============================================================================
 Name        : 2.4-Declarations-3.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 18/12/2013
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : A function that uses the const qualifier.
 ============================================================================
 */

#include <stdio.h>

int strlen2(const char text[]);

int main(void)
{
	char text[] = "Text!";
	printf("%d\n", strlen2(text));
	return 0;
}
/* this won't change the char array */
int strlen2(const char text[])
{
	int i = 0;

	while(text[i] != '\0')
		++i;

	return i;
}
