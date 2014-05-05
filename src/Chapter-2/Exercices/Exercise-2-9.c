/*
 ============================================================================
 Name        : Exercise-2-9.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 16/04/2014
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : In a two's complement number system, x &= (x-1) deletes
               the rightmost 1-bit in x. Explain why. Use this observation
               to write a faster version of bitcount.
 ============================================================================
 */

/*
 * Answer: If x is odd, then (x-1) has the same bit representation as x except
 * that the rightmost 1-bit is now a 0. If x is even, then the representation of
 * (x-1) has the rightmost zeros of x becoming ones and the rightmost one becoming
 * a zero. Anding the two clears the rightmost 1-bit in x and all the rightmost 1-bits
 * from (x-1).
 * */

#include <stdio.h>

int bitcount(unsigned x);

int main(void)
{
	printf("Bitcount -> %d",bitcount(7));
	return 0;
}

 /* bitcount:  count 1 bits in x */
int bitcount(unsigned x)
{
    int b;

    for (b = 0; x != 0; x &= (x-1))
    	b++;
    return b;
}
