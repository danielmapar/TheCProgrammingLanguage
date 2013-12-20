/*
 ============================================================================
 Name        : 2.3-Constants-4.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 18/12/2013
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Alternative to strlen standard function
 ============================================================================
 */

#include <stdio.h>

int strlen2(char s[]);

int main(void)
{
	printf("%d\n", strlen2("Daniel"));
	return 0;
}

int strlen2(char s[])
{
	int i;

	while(s[i] != '\0')
		++i;
	return i;
}


