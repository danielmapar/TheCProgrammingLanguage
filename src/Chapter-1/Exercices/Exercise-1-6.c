/*
 ============================================================================
 Name        : 1.6-Exercise.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 02/12/2013
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Verify that the expression getchar() != EOF is 0 or 1.
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
	int c;

	/* True = 1 and False = 0 */
	while((c = (getchar() != EOF)) != 0)
	{
		printf("%d", c);
	}

	printf("%d", c);

	return 0;
}
