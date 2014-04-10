/*
 ============================================================================
 Name        : 2.3-Constants-1.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 13/12/2013
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Testing variable types
 ============================================================================
 */

#include <stdio.h>
#define FLOAT 1.1F
#define DOUBLE_1 1.1L
#define DOUBLE_2 1.1
#define INTEGER_1 1
#define INTEGER_2 1L
#define EXPONENT 4e-15 // 0.4 if 4e-2 --> 0.04
#define OCTAL 037
#define HEXADECIMAL_1 0x1F
#define HEXADECIMAL_2 0x1f
#define OCTAL_UL 037UL
#define HEXADECIMAL_1_UL 0x1FUL
#define HEXADECIMAL_2_UL 0x1fUL

int main(void)
{
	short int shortint = 1;
	long int longint = 2L;
	int integer = 3;

	signed int intsigned = -1;
	unsigned int intunsigned = 1U;
	unsigned long int intlongunsigned = 1LU;

	signed char charsigned = -1;
	unsigned char charunsigned = 1U;

	printf("%d\n", shortint);
	printf("%ld\n", longint);
	printf("%d\n", integer);

	printf("%d\n", intsigned);
	printf("%d\n", intunsigned);
	printf("%lu\n", intlongunsigned);

	printf("%d\n", charsigned);
	printf("%d\n", charunsigned);

	printf("%f\n", FLOAT);
	printf("%Lf\n", DOUBLE_1);
	printf("%f\n", DOUBLE_2);

	printf("%d\n", INTEGER_1);
	printf("%ld\n", INTEGER_2);

	printf("%0.15f\n", EXPONENT);

	printf("OCTAL: %o - DECIMAL: %d\n", OCTAL, OCTAL);
	printf("HEXADECIMAL_1: %x - DECIMAL: %d\n", HEXADECIMAL_1, HEXADECIMAL_1);
	printf("HEXADECIMAL_2: %x - DECIMAL: %d\n", HEXADECIMAL_2, HEXADECIMAL_2);

	printf("OCTAL_UL: %lo - DECIMAL: %ld\n", OCTAL_UL, OCTAL_UL);
	printf("HEXADECIMAL_1_UL: %lx - DECIMAL: %ld\n", HEXADECIMAL_1_UL, HEXADECIMAL_1_UL);
	printf("HEXADECIMAL_2_UL: %lx - DECIMAL: %ld\n", HEXADECIMAL_2_UL, HEXADECIMAL_2_UL);

	return 0;
}
