/*
 ============================================================================
 Name        : 2.9-BitwiseOperators.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 17/04/2014
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Get n bits from position p
 ============================================================================
 */

#include <stdio.h>

unsigned getbits(unsigned x, int p, int n);

int main(void)
{
	/* 00000001 & 00000011 --> 00000001 => 1 */
	printf("input: 8,4,2 -> output: %d\n", getbits(8,4,2)); // output 1
	return 0;
}

/* getbits: get n bits from position p */
unsigned getbits(unsigned x, int p, int n)
{
	return (x >> (p+1-n)) & ~(~0 << n);
}

