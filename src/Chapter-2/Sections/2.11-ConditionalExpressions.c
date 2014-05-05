/*
 ============================================================================
 Name        : 2.11-ConditionalExpressions.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 17/04/2014
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : 
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
	int i;
	char array[] = { '1', '2', '3', '4', '5', '6', '7', '8', '9', '!', '\0' };
	printf("%s\n",array);

	for (i = 0; i < 10; i++)
		printf("%6d%c", array[i], (i%10==9 || i==10-1) ? '\n' : ' ');

	return 0;
}


