/*
 ============================================================================
 Name        : Exercise-3-5.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 16/05/2014
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Write the function itob(n,s,b) that converts the integer n
               into a base b character representation in the string s. In
               particular, itob(n,s,16) formats s as a hexadecimal integer
               in s.
 ============================================================================
 */

#include <stdio.h>
#include <string.h>

void itob(int n, char s[], int b);
void reverse(char s[]);

int main(void)
{
    char s[64];
    itob(-255, s, 8);
    printf("%s\n", s);
    return 0;
}

/* itob:  comvert n to characters in base b in s */
void itob(int n, char s[], int b)
{
    int i, sign;
    char symbols[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    if (2 > b || b > strlen(symbols) )
        return;     /* not a valid base */

    sign = n;
    i = 0;
    do {
        s[i++] = symbols[abs(n % b)];
    } while (n /= b);
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
