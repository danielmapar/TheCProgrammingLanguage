/*
 ============================================================================
 Name        : Exercise-3-4.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 16/05/2014
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : In a two's complement number representation, our version of
               itoa does not handle the largest negative number, that is, the
               value of n equal to -(2wordsize-1). Explain why not. Modify it
               to print that value correctly, regardless of the machine on
               which it runs.
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

void itoa(int n, char s[])
{
    int i;
    int sign = (n < 0) ? -1 : 1;

    i = 0;
    do {
        s[i++] = sign * (n % 10) + '0';
    } while ((n /= 10) != 0);
    if (sign < 0)
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
