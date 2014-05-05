/*
 ============================================================================
 Name        : Exercise-2-2.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 23/12/2013
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Write a loop equivalent to the for loop above without using
               && or ||.
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
	int i = 0;
	int lim = 100;
	int c;
	char s[lim];

	while(i < lim-1)
	{
		if((c = getchar()) != '\n')
		{
			if(c != EOF)
			{
				s[i] = c;
				++i;
			}
			else
				i = lim-1;
		}
	}
	s[i] = '\0';
	printf("String: %s\n", s);
}
