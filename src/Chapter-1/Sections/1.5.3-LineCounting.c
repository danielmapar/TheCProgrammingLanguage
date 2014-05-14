/*
 ============================================================================
 Name        : 1.5.3-LineCounting.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 03/12/2013
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Program that counts input lines
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
	int c, nl;

	nl = 0;
	while((c = getchar()) != EOF)
		if(c == '\n')
			++nl;

	printf("%d\n", nl);

	return 0;
}
