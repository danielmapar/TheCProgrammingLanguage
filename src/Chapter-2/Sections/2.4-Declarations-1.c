/*
 ============================================================================
 Name        : 2.4-Declarations-1.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 18/12/2013
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : A variable may also be initialized in its declaration. If the
               name is followed by an equals sign and an expression, the
               expression serves as an initializer, as in this program.
 ============================================================================
 */

#include <stdio.h>

#define MAXLINE 100

int main(void)
{
	char esc = '\\';
	int i = 0;
	int limit = MAXLINE+1;
	float eps = 1.0e-5; /* exponential */

	printf("Float: %f\n", eps);


	return 0;
}
