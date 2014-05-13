/*
 ============================================================================
 Name        : 3.5-Loops-WhileAndFor-3.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 07/05/2014
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Comma operator
 ============================================================================
 */

#include <string.h>
#include <stdio.h>

void reverse(char s[]);

int main(void)
{
	char s[] = "Daniel Marchena Parreira";
	reverse(s);
	return 0;
}

/* reverse: reverse string s in place */
void reverse(char s[])
{
	int c, i, j;

	for(i = 0, j = (strlen(s)-1); i < j; i++, j--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
	printf("%s",s);
}
