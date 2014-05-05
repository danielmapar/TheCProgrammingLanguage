/*
 ============================================================================
 Name        : Exercise-2-10.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 17/04/2014
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Rewrite the function lower, which converts upper case
               letters to lower case, with a conditional expression instead
               of if-else.
 ============================================================================
 */

#include <stdio.h>

void lower (char characters[]);

int main(void)
{
	char characters[] = "AaBbbbB";
	printf("Upper case: %s\n", characters);
	lower(characters);
	printf("Lower case: %s\n", characters);
	return 0;
}

void lower (char characters[])
{
	int i;
	for(i = 0; characters[i] != '\0'; ++i)
		// distance between upper and lower case letters
		characters[i] += (characters[i] >= 'A' && characters[i] <= 'Z') ? 'a' - 'A' : 0;
}
