/*
 ============================================================================
 Name        : Exercise-2-1.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 12/12/2013
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Write a program to determine the ranges of char, short, int,
               and long variables, both signed and unsigned, by printing
               appropriate values from standard headers and by direct
               computation. Harder if you compute them: determine the ranges
               of the various floating-point types.
 ============================================================================
 */

#include <limits.h>
#include <float.h>
#include <stdio.h>

int main(void)
{
	/* 2 ^ 8 = 256 */
	/* 2 ^ 16 = 65,536 */
	/* 2 ^ 32 = 4,294,967,296 */
	/* 2 ^ 64 = 18,446,744,073,709,551,615 */
	/* 2 ^ 128 = 340,282,346,638,528,859,811,704,183,484,516,925,440.000000 */
	/* 2 ^ 256 = 115,792,089,237,316,195,423,570,985,008,687,907,853,269,984,665,640,564,039,457,584,007,913,129,639,936.000000 */
	/* 2 ^ 512 = 13,407,807,929,942,597,099,574,024,998,205,846,127,479,365,820,592,393,377,723,561,443,721,764,030,073,546,976,801,874,298,166,903,427,690,031,858,186,486,050,853,753,882,811,946,569,946,433,649,006,084,096.000000*/
	/* 2 ^ 1024 = 179,769,313,486,231,570,814,527,423,731,704,356,798,070,567,525,844,996,598,917,476,803,157,260,780,028,538,760,589,558,632,766,878,171,540,458,953,514,382,464,234,321,326,889,464,182,768,467,546,703,537,516,986,049,910,576,551,282,076,245,490,090,389,328,944,075,868,508,455,133,942,304,583,236,903,222,948,165,808,559,332,123,348,274,797,826,204,144,723,168,738,177,180,919,299,881,250,404,026,184,124,858,368.000000000000000 */

	/* char */
	printf("|--------|CHAR|--------|\n");
	printf("CHAR_BIT (Number of bits in a char): %d\n",CHAR_BIT);
	printf("CHAR_MAX (Maximum value of a char): %d\n",CHAR_MAX);
	printf("CHAR_MIN (Minimum value of a char): %d\n",CHAR_MIN);
	printf("UCHAR_MAX (Maximum value of a unsigned char): %d\n",UCHAR_MAX);
	printf("UCHAR_MIN (Minimum value of a unsigned char): %d\n",0);
	printf("SCHAR_MAX (Maximum value of a signed char): %d\n",SCHAR_MAX);
	printf("SCHAR_MIN (Minimum value of a signed char): %d\n",SCHAR_MIN);
	/* int */
	printf("|--------|INT|--------|\n");
	printf("INT_MAX (Maximum value of a int): %d\n", INT_MAX);
	printf("INT_MIN (Minimum value of a int): %d\n", INT_MIN);
	printf("UINT_MAX (Maximum value of a unsigned int): %ud\n", UINT_MAX);
	printf("LONG_MAX (Maximum value of a long int): %ld\n", LONG_MAX);
	printf("LONG_MIN (Minimum value of a long int): %ld\n", LONG_MIN);
	printf("ULONG_MAX (Maximum value of a unsigned long int): %lu\n", ULONG_MAX);
	printf("SHRT_MAX (Maximum value of a short int): %d\n", SHRT_MAX);
	printf("SHRT_MIN (Minimum value of a short int): %d\n", SHRT_MIN);
	printf("USHRT_MAX (Maximum value of a unsigned short int): %d\n", USHRT_MAX);
	/* float, 6 precision */
	printf("|--------|FLOAT|--------|\n");
	printf("FLT_RADIX (radix of exponent, representation): %d\n", FLT_RADIX);
	printf("FLT_ROUNDS (floating-point rounding mode for addition): %d\n", FLT_ROUNDS);
	printf("FLT_DIG (decimal digits of precision): %d\n", FLT_DIG);
	printf("FLT_EPSILON (smallest number x such that 1.0+x != 1.0): %f\n", FLT_EPSILON);
	printf("FLT_MANT_DIG (number of base FLT_RADIX in mantissa): %d\n", FLT_MANT_DIG);
	printf("FLT_MAX (maximum floating-point number): %f\n", FLT_MAX);
	printf("FLT_MAX_EXP (maximum n such that FLT_RADIXn-1 is representable): %d\n", FLT_MAX_EXP);
	printf("FLT_MIN (minimum normalized floating-point number): %f\n", FLT_MIN);
	printf("FLT_MIN_EXP (minimum n such that 10n is a normalized number): %d\n", FLT_MIN_EXP);
	/* double, 15 precision*/
	printf("|--------|DOUBLE|--------|\n");
	printf("DBL_DIG (decimal digits of precision): %d\n", DBL_DIG);
	printf("DBL_EPSILON (smallest number x such that 1.0+x != 1.0): %f\n", DBL_EPSILON);
	printf("DBL_MANT_DIG (number of base FLT_RADIX in mantissa): %d\n", DBL_MANT_DIG);
	printf("DBL_MAX (maximum double floating-point number): %.15f\n", DBL_MAX);
	printf("DBL_MAX_EXP (maximum n such that FLT_RADIXn-1 is representable): %d\n", DBL_MAX_EXP);
	return 0;
}
