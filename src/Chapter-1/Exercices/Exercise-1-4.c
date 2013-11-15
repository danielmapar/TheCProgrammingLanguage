/*
 ============================================================================
 Name        : Exercise-1-4.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 13/11/2013
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Write a program to print the corresponding Celsius to
 	 	 	   Fahrenheit table.
 ============================================================================
 */

#include <stdio.h>

/* print Celsius-Fahrenheit table
   for celsius = 0, 20, ..., 300; floating-point version */

int main(void)
{
	float fahr, celsius;
	float lower, upper, step;

	lower = 0; /* lower limit of temperature scale */
	upper = 300; /* upper limit */
	step  = 20; /* step size */

	/* Print table header */
	printf("Celsius-Fahrenheit table\n");

	celsius = lower;
	while(celsius <= upper)
	{
		fahr = ((celsius/5) * 9) + 32;
		printf("%3.0f %3.0f\n",celsius,fahr);
		celsius = celsius + step;
	}

	return 0;
}
