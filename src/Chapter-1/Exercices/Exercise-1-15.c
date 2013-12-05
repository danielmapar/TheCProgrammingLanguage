/*
 ============================================================================
 Name        : Exercise-1-15.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 05/12/2013
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Rewrite the temperature conversion program of Section 1.2 to
               use a function for conversion.
 ============================================================================
 */

#include <stdio.h>
#define LOWER 0.0
#define UPPER 300.0
#define STEP  20.0

float convert_to_celsius(float fahr);

int main(void)
{

	float fahr;
	float lower, upper, step;

	lower = LOWER; /* lower limit of temperature scale */
	upper = UPPER; /* upper limit */
	step  = STEP;  /* step size */

	fahr = lower;
	while(fahr <= upper)
	{
		printf("%3.0f %6.1f\n", fahr, convert_to_celsius(fahr));
		fahr = fahr + step;
	}

	return 0;
}

float convert_to_celsius(float fahr)
{
	return (5.0/9.0) * (fahr-32.0);
}
