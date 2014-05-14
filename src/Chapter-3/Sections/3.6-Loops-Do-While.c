/*
 ============================================================================
 Name        : 3.6-Loops-Do-While.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 14/05/2014
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : itoa:  convert n to characters in s
 ============================================================================
 */

#include <stdio.h>

void itoa(int n, char s[]);
void reverse(char s[]);

int main(void)
{
	char s[100];
	itoa(1234, s);
	printf("Output:%s\n", s);
	return 0;
}

/* itoa: convert n to characters in s */
void itoa(int n, char s[])
{
	int i, sign;

	if((sign = n) < 0) /* record sign */
		n = -n; /* make n positive */

	i = 0;
	do{ /* generate digits in reverse order */
		s[i++] = n % 10 + '0'; /* get next digit */
	}while((n /= 10) > 0);

	if(sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	reverse(s);
}

void reverse(char s[])
{
	int i, j, end;
	char c;

	for(i = 0; s[i] != '\0'; i++)
		;
	end = i--;
	for(j = 0; (i != j) && (j < i); j++, i--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
	s[end] = '\0';
}
