/*
 ============================================================================
 Name        : 1.5.2-CharacterCounting-1.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 02/12/2013
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : The program counts characters; it is similar to the copy
 	 	 	   program.
 ============================================================================
 */

#include <stdio.h>

/* count characters in input; 1st version */
int main(void)
{
	long nc;

	nc = 0;
	while(getchar() != EOF)
		++nc;

	printf("%ld\n", nc);

	return 0;
}
