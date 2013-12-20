/*
 ============================================================================
 Name        : 2.4-Declarations-2.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 18/12/2013
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : A program that uses the const qualifier.
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
	const double e = 2.71828182845905;
	const char msg[] = "warning: ";

	printf("%s%.15f\n", msg, e);

	return 0;
}
