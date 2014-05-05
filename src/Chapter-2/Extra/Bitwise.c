/*
 ============================================================================
 Name        : Bitwise.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 27/12/2013
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Bitwise operator examples.
 ============================================================================
 */
#include <stdio.h>

unsigned getbits(unsigned x, int p, int n);

int main(void)
{
	/*
	 * The shift operators << and >> perform left and right shifts of their left operand by the number
	   of bit positions given by the right operand, which must be non-negative. Thus x << 2 shifts
	   the value of x by two positions, filling vacated bits with zero; this is equivalent to
	   47 multiplication by 4. Right shifting an unsigned quantity always fits the vacated bits with
       zero. Right shifting a signed quantity will fill with bit signs (``arithmetic shift'') on some
       machines and with 0-bits (``logical shift'') on others.
	 * */

	/* The C language treats any number that starts with 0 as octal and OX as hexadecimal */
	printf("Decimal value: %d, Binary value: %s",0177, "01111111");

	/* 1 = true and 0 = false
	 *  Table example:
	 *  1011 -> -5
	 *  1100 -> -4
	 *  1101 -> -3
	 *  1110 -> -2
	 *  1111 -> -1
	 *  0000 ->  0
	 *  0001 ->  1
	 *  0010 ->  2
	 *  0011 ->  3
	 *  0100 ->  4
	 *  0101 ->  5
	 * */
	/* AND */
	printf("AND\n");
	printf("%d\n", 1 & 2); /* 0000001 and 0000010 = 0000000 - 0 */
	printf("%d\n", 1 & 3); /* 0000001 and 0000011 = 0000001 - 1 */
	printf("%d\n", 3 & 3); /* 0000011 and 0000011 = 0000011 - 3 */
	printf("%d\n", 3 & -3); /* 00000011 and 11111101 = 00000001 - 1 */

	/* OR */
	printf("OR\n");
	printf("%d\n", 1 | 2); /* 0000001 or 0000010 = 0000011 - 3 */
	printf("%d\n", 1 | 3); /* 0000001 or 0000011 = 0000011 - 3 */
	printf("%d\n", 3 | 3); /* 0000011 or 0000011 = 0000011 - 3 */

	/* EXCLUSIVE OR */
	printf("EXCLUSIVE OR\n");
	printf("%d\n", 1 ^ 2); /* 0000001 exclusive or 0000010 = 0000011 - 3 */
	printf("%d\n", 1 ^ 3); /* 0000001 exclusive or 0000011 = 0000010 - 2 */
	printf("%d\n", 3 ^ 3); /* 0000011 exclusive or 0000011 = 0000011 - 0 */

	/* LEFT SHIFT OPERATOR */
	printf("LEFT SHIFT OPERATOR\n");
	/* Obs: Move the bits to the left accordingly to the number of leaps */
	printf("%d\n", 1 << 2); /* 00000001 shift 2 positions to the left = 00000100 -> decimal 4 */
	printf("%d\n", 3 << 2); /* 00000011 shift 2 positions to the left = 00001100 -> decimal 12 */
	printf("%d\n", 4 << 2); /* 00000100 shift 2 positions to the left = 00010000 -> decimal 16*/
	printf("%d\n", -1 << 2); /* 11111111 shift 2 positions to the left = 11111100 -> decimal -4*/

	/* RIGHT SHIFT OPERATOR */
	printf("RIGHT SHIFT OPERATOR\n");
	/* Obs: Move the bits to the right accordingly to the number of leaps */
	printf("%d\n", 1 >> 2); /* 00000001 shift 2 positions to the right = 00000000 -> decimal 0 */
	printf("%d\n", 3 >> 2); /* 00000011 shift 2 positions to the right = 00000000 -> decimal 0 */
	printf("%d\n", 4 >> 2); /* 00000100 shift 2 positions to the right = 00000001 -> decimal 1*/
	/*
	 * In computer programming, an arithmetic shift is a shift operator,
	 * sometimes known as a signed shift (though it is not restricted to signed operands).
	 * The two basic types are the arithmetic left shift and the arithmetic right shift.
	 * For binary numbers it is a bitwise operation that shifts all of the bits of its operand;
	 * every bit in the operand is simply moved a given number of bit positions, and the vacant
	 * bit-positions are filled in. Instead of being filled with all 0s, as in logical shift,
	 * when shifting to the right, the leftmost bit (usually the sign bit in signed integer
	 * representations) is replicated to fill in all the vacant positions (this is a kind of
	 * sign extension).
	 *
	 * Obs: Instead of filling the vacant positions with 0s like the left shift operation,
	 * right shift operation fill it with the leftmost bit (which is 1 in this case).
	 * Warning: This is machine dependent.
	 * */

	printf("%d\n", -1 >> 2); /* 11111111 shift 2 positions = 11111111 -> decimal -1 */
	printf("%d\n", -4 >> 1); /* 11111100 shift 1 positions = 11111110 -> decimal -2 */
	printf("%d\n", -5 >> 1); /* 11111011 shift 1 positions = 11111101 -> decimal -3 */

	/*
	 * The unary operator ~ yields the one's complement of an integer; that is, it converts each 1-bit
	   into a 0-bit and vice versa.
	 *
	 * */
	/* NEGATION OPERATOR */
	printf("NEGATION OPERATOR\n");
	printf("%d\n", ~1);  /* 00000001 = 11111110 -> decimal -2 */
	printf("%d\n", ~4);  /* 00000100 = 11111011 -> decimal -5 */
	printf("%d\n", ~-5); /* 11111011 = 00000100 -> decimal 4 */

	/* NEGATION OPERATOR */
	printf("GETBIT FUNCTION\n");
	/* 00000010 & 00000111 --> 00000010 => 2 */
	printf("input: 8,4,3 -> output: %d\n", getbits(8,4,3)); // output 2
	/* 00000001 & 00000011 --> 00000001 => 1 */
	printf("input: 8,4,2 -> output: %d\n", getbits(8,4,2)); // output 1
	return 0;
}

/* getbits: get n bits from position p */
unsigned getbits(unsigned x, int p, int n)
{
	return (x >> (p+1-n)) & ~(~0 << n);
}

