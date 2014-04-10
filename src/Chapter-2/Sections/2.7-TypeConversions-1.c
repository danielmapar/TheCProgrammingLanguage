/*
 ============================================================================
 Name        : 2.7-TypeConversions-1.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 23/12/2013
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Simple implemantation of atoi
 ============================================================================
 */

#include <stdio.h>
#define LIMIT 100

/* prototype */
int atoi(char []);

int main(void)
{
	int c, i;
	char s[LIMIT];

	for(i = 0; i < LIMIT-1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	s[i] = '\0';

	printf("Decimal: %d\n", atoi(s));

	return 0;
}

int atoi(char s[])
{
	int i, n;

	for(i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
		n = 10 * n + (s[i] - '0');
	return n;
}
