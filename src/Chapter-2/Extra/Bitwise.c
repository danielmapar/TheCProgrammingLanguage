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

int main(void)
{
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

	return 0;
}
