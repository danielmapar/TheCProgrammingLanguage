/*
 ============================================================================
 Name        : 2.7-TypeConversions-2.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 23/12/2013
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Another example of char to int conversion is the function
               lower, which maps a single character to lower case for the
               ASCII character set. If the character is not an upper case
               letter, lower returns it unchanged.
 ============================================================================
 */

#include <stdio.h>

int lower(int);

int main(void)
{
	printf("Lower case: %c\n", lower(getchar()));
	return 0;
}

int lower(int c)
{
	if(c >= 'A' && c <= 'Z')
		return (c + 'a' - 'A');
	else
		return c;
}
