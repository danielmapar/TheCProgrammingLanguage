/*
 ============================================================================
 Name        : 2.12-PrecedenceAndOrderOfEvaluation.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 03/05/2014
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Function precedence
 ============================================================================
 */

#include <stdio.h>

char power(unsigned char, unsigned char);

int main(void)
{
	unsigned char n = 0;
	unsigned char vet[] = { '1', '2', '3', '\0' };
	//++n;
	/* ++n will not be evaluated before the call of the power function
	 *
	 * can produce different results with different compilers, depending on whether
	 * n is incremented before power is called. The solution, of course, is to write
	 * ++n;
	 *
	 *
	 * */
	printf("%d %d\n", ++n, power(2, n));
	vet[n] = vet[n]++; // from 2 to 3
	printf("%s", vet);
	return 0;
}

char power(unsigned char x, unsigned char n)
{
	return x*n;
}
