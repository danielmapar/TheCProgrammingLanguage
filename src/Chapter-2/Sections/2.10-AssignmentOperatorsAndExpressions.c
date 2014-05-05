/*
 ============================================================================
 Name        : 2.10-AssignmentOperatorsAndExpressions.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 17/04/2014
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : As an example, the function bitcount counts the number of
               1-bits in its integer argument.
 ============================================================================
 */

#include <stdio.h>

int bitcount(unsigned x);

int main(void)
{
	printf("Number of 1s: %d\n",bitcount(1));
	return 0;
}

/* bitcount: count 1 bits in x */
int bitcount(unsigned x)
{
	int b;
	for (b = 0; x != 0; x >>= 1)
		if (x & 01) // octal 01 -> decimal 1 -> binary 00000001
			b++;
	return b;
}
