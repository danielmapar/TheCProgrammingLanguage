/*
 ============================================================================
 Name        : 4.7-RegisterVariables.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 08/07/2014
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : 
 ============================================================================
 */


// The register declaration can only be applied to automatic variables
// and to the formal parameters of a function.

//register int x;
//register char c;

#include <stdio.h>

// prototype
int f(register unsigned m, register long n);

int main(void)
{
	printf("Output - %d\n", f(10, 20));
	printf("Output - %d\n", f(10, 20));
	return 0;
}

int f(register unsigned m, register long n)
{
	register int i = 10;
	static int ij = 10;
	int sum = (m+n+i+ij);
	ij = ij + 900;
	return sum;
}


