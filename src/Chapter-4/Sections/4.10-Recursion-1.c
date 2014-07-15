/*
 ============================================================================
 Name        : 4.10-Recursion-1.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 08/07/2014
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : C functions may be used recursively; that is, a function
               may call itself either directly or indirectly. Consider
               printing a number as a character string. As we mentioned
               before, the digits are generated in the wrong order:
               low-order digits are available before high-order digits,
               but they have to be printed the other way around.
 ============================================================================
 */

#include <stdio.h>

void printd(int n);

int main(void)
{
	printd(123);
	return 0;
}

/* printd: print n in decimal */
void printd(int n)
{
	if(n < 0)
	{
		putchar('-');
		n = -n;
	}
	// truncates the fractional value and leaves when 0
	if(n / 10)
		printd(n / 10);
	putchar(n % 10 + '0');
}
