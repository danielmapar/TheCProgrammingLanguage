/*
 ============================================================================
 Name        : 2.5-ArithmeticOperators.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 18/12/2013
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Check if it is a leap year or not (use of modulus).
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h> /* atoi */

#define YEAR_DIGITS 5 /* including \0 */

int main(void)
{
	int year;
	char string[YEAR_DIGITS];
	int c, i;

	for(i = 0; i < YEAR_DIGITS-1 && (c = getchar()) != EOF; ++i)
		string[i] = c;
	string[i] = '\0';

	year = atoi(string);

	/* modulus operator % */
	if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		printf("%d is a leap year\n", year);
	else
		printf("%d is not a leap year\n", year);

	return 0;
}
