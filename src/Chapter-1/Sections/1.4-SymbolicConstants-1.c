/*
 ============================================================================
 Name        : 1.4-SymbolicConstants-1.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 13/11/2013
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : There are plenty of different ways to write a program for a
 	 	 	   particular task. Let's try a variation on the temperature
 	 	 	   converter using symbolic constants.
 ============================================================================
 */

#include <stdio.h>

#define LOWER 0   /* lower limit of table */
#define UPPER 300 /* upper limit */
#define STEP  20  /* step size */

/* print Fahrenheit-Celsius table */
int main(void)
{
	int fahr;

	for(fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));

	return 0;
}
