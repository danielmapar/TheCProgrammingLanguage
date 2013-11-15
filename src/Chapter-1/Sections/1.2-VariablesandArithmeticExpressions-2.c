/*
 ============================================================================
 Name        : 1.2-VariablesandArithmeticExpressions-2.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 02/11/2013
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Single statement without braces
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
	int i = 0;
	int j = 100;

	while(i <= 100)
		printf("Number -> %d\n", i++);

	return 0;
}
