/*
 ============================================================================
 Name        : 3.8-GotoAndLabels.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 16/05/2014
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Goto and labels example
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
	int i;
	for(i = 0; i < 100; i++)
		if(i == 12)
		{
			printf("Entered goto\n");
			goto test; // goto statement
		}

	test: // Label
		printf("Goto worked!\n");

	printf("End");

	return 0;
}
