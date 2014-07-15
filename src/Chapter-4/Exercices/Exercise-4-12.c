/*
 ============================================================================
 Name        : Exercise-4-12.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 09/07/2014
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Adapt the ideas of printd to write a recursive version of itoa;
               that is, convert an integer into a string by calling a
               recursive routine.
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
