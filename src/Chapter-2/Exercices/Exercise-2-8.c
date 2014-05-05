/*
 ============================================================================
 Name        : Exercise-2-8.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 16/04/2014
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Write a function rightrot(x,n) that returns the value
 	 	 	   of the integer x rotated to the right by n positions.
 ============================================================================
 */

/*
 *
 * Another form of shift is the circular shift or bit rotation.
 * In this operation, the bits are "rotated" as if the left and
 * right ends of the register were joined. The value that is
 * shifted in on the right during a left-shift is whatever
 * value was shifted out on the left, and vice versa.
 * This operation is useful if it is necessary to retain all
 * the existing bits, and is frequently used in digital cryptography.
 *
 * */

#include <stdio.h>

unsigned char rightrot(unsigned char x, unsigned char n);
void printbits(unsigned char v);

int main(void)
{
	printbits(7);
	printbits(rightrot(7,3));
	return 0;
}
unsigned char rightrot(unsigned char x, unsigned char n)
{
	enum size { BYTE = (sizeof(unsigned char)*8) };
	return ((x << (BYTE-n)) | (x >> n));
}

void printbits(unsigned char v) {
  int i; // for C89 compatability
  for(i = 7; i >= 0; i--) putchar('0' + ((v >> i) & 1));
  printf("\n");
}


