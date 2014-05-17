/*
 ============================================================================
 Name        : Exercise-3-6.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 16/05/2014
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Write a version of itoa that accepts three arguments instead
               of two. The third argument is a minimum field width; the
               converted number must be padded with blanks on the left if
               necessary to make it wide enough.
 ============================================================================
 */

#include <stdio.h>
#include <limits.h>

void itoa(int n, char s[], int x);
void reverse(char s[]);

int main(void)
{
    int n = 123;
    char s[32];

    itoa(1233, s, 8);
    printf("%s\n", s);
    itoa(n, s, 32);
    printf("%s\n", s);

    return 0;
}

void itoa(int n, char s[], int x)
{
    int i, sign;

    sign = n;
    i = 0;
    do {
        s[i++] = abs(n % 10) + '0';
    } while (n /= 10);

    if (sign < 0)
        s[i++] = '-';
    while (i < x)
        s[i++] = ' ';

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
