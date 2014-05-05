/*
 ============================================================================
 Name        : 1.7-Functions-1.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 04/12/2013
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : A function to raise an integer m to a positive integer
 	 	 	   power n.
 ============================================================================
 */

#include <stdio.h>

/* prototype */
int power(int m, int n);

int main(void)
{
	int i;

	for(i = 0; i < 10; ++i)
		printf("%d %d %d\n", i, power(2,i), power(-3,i));

	return 0;
}

/* power: raise base to n-th power; n >= 0 */
int power(int base, int n)
{
	int i, p;

	p = 1;
	for(i = 1; i <= n; ++i)
		p = p * base;

	return p;
}
