/*
 ============================================================================
 Name        : 1.5-Exercise.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 13/11/2013
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Modify the temperature conversion program to print the table
               in reverse order, that is, from 300 degrees to 0.
 ============================================================================
 */

#include <stdio.h>

/* print Fahrenheit-Celsius table */

int main(void)
{
	int fahr;

	for(fahr = 300; fahr >= 0; fahr = fahr - 20)
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));

	return 0;
}
