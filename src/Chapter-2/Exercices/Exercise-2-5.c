/*
 ============================================================================
 Name        : Exercise-2-5.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 27/12/2013
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Write the function any(s1,s2), which returns the first
               location in a string s1 where any character from the string
               s2 occurs, or -1 if s1 contains no characters from s2.
               (The standard library function strpbrk does the same job but
               returns a pointer to the location.)
 ============================================================================
 */
#include <stdio.h>

#define MAXSIZE 100

int any(char s[], char f[]);
void get_string(char string[], int size);

int main(void)
{
	char string_1[MAXSIZE];
	char string_2[MAXSIZE];
	get_string(string_1, MAXSIZE);
	get_string(string_2, MAXSIZE);
	printf("%d\n", any(string_1, string_2));
	return 0;
}

/* any: find first appearance from f on s */
int any(char s[], char f[])
{
	int i, j;

	for(i = 0; s[i] != '\0'; i++)
	{
		for(j = 0; f[j] != '\0' && f[j] != s[i]; j++)
			;
		if(f[j] != '\0')
			return i;
	}
	return -1;
}

void get_string(char string[], int size)
{
	int i, c;
	for(i = 0; i < (size-1) && (c = getchar()) != EOF && c != '\n'; i++)
		string[i] = c;
	string[i] = '\0';
}
