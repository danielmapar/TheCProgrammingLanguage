/*
 ============================================================================
 Name        : 3.5-Loops-WhileAndFor-1.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 07/05/2014
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : atoi: convert s to integer; version 2
 ============================================================================
 */

#include <stdio.h>

int atoi(char s[]);

int main(void)
{
	printf("%d", atoi("123"));
}

/* atoi: convert s to integer; version 2 */
int atoi(char s[])
{
	int i, n, sign;

	for(i = 0; isspace(s[i]); i++);
		;
	sign = (s[i] == '-') ? -1 : 1;
	if(s[i] == '+' || s[i] == '-')
		i++;

	for(n = 0; isdigit(s[i]); i++)
		n = 10 * n + (s[i] - '0');

	return sign * n;
}
