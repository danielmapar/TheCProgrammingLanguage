/*
 ============================================================================
 Name        : Sizeof.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 25/12/2013
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Size of each C type
 ============================================================================
 */
#include <stdio.h>

int main(void)
{
	printf("char: %lu\n", sizeof(char));
	printf("unsigned char: %lu\n", sizeof(unsigned char));
	printf("signed char: %lu\n", sizeof(signed char));
	printf("int: %lu\n", sizeof(int));
	printf("short int: %lu\n", sizeof(short int));
	printf("long int: %lu\n", sizeof(long int));
	printf("unsigned int: %lu\n", sizeof(unsigned int));
	printf("signed int: %lu\n", sizeof(signed int));
	printf("float: %lu\n", sizeof(float));
	printf("double: %lu\n", sizeof(double));
	printf("long double: %lu\n", sizeof(long double));
	printf("long long: %lu\n", sizeof(long long));
	return 0;
}
