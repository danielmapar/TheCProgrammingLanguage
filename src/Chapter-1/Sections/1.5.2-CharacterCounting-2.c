/*
 ============================================================================
 Name        : 1.5.2-CharacterCounting-2.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 02/12/2013
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : The program counts characters; it is similar to the copy
 	 	 	   program v2.
 ============================================================================
 */

#include <stdio.h>

/* count characters in input; 2st version */
int main(void)
{
	double nc;

	for (nc = 0; getchar() != EOF; ++nc)
		;
	printf("%.0f\n", nc);

	return 0;
}
