/*
 ============================================================================
 Name        : Pow.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 12/12/2013
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : n to the power of x program
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

int main() {
	double a=2, b=1024, c;

	c = pow(a,b);
	printf("%f^%f=%f\n", a,b,c);
	return 0;
}
