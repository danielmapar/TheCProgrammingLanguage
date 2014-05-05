/*
 ============================================================================
 Name        : Exercise-2-7.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 16/04/2014
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Write a function invert(x,p,n) that returns x with the n
               bits that begin at position p inverted (i.e., 1 changed
               into 0 and vice versa), leaving the others unchanged.
 ============================================================================
 */

#include <stdio.h>

unsigned invert(unsigned char x, unsigned char p, unsigned char n);
void printbits(unsigned char v);

int main(void)
{
	printbits(invert(1,4,5));
	return 0;
}

unsigned invert(unsigned char x, unsigned char p, unsigned char n)
{
	unsigned char left,right, substitute;

	left = x >> (9-p);
	left = left << (9-p);

	right = x << (p+n-1);
	right = right >> (p+n-1);

	substitute = x << (p-1);
	substitute = substitute >> (8-n);
	substitute = ~substitute << (8-n);
	substitute = substitute >> (p-1);

	return(left | right | substitute);
}

void printbits(unsigned char v) {
  int i; // for C89 compatability
  for(i = 7; i >= 0; i--) putchar('0' + ((v >> i) & 1));
  printf("\n");
}

