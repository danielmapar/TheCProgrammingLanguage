/*
 ============================================================================
 Name        : 1.6-Arrays-1.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 04/12/2013
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Count lines, words, and characters in input v2
 ============================================================================
 */

#include <stdio.h>

/* count  */
int main(void)
{
	int c, i, nwhite, nother;
	int ndigit[10];

	nwhite = nother = 0;
	for(i = 0; i < 10; ++i)
		ndigit[i] = 0;

	while((c = getchar()) != EOF)
		if(c >= '0' && c <= '9')
			++ndigit[c-'0'];
		else if(c == ' ' || c == '\n' || c == '\t')
			++nwhite;
		else
			++nother;

	printf("digits =");
	for(i = 0; i < 10; ++i)
		printf(" %d", ndigit[i]);
	printf(", white space = %d, other = %d\n",
			nwhite, nother);

	return 0;
}
