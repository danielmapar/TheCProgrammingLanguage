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
	float eps = 1e-2; /* exponential */
	float eps2 = 9e-1; /* exponential */

	printf("Float1: %f --- Float2: %.1f\n", eps, eps2);
	/* exponential number -- ex: 1e-2 = 0.01 and 9e-1 = 0.9 */


	return 0;
}
