/*
 ============================================================================
 Name        : Exercise-2-4.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 27/12/2013
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Write an alternative version of squeeze(s1,s2) that deletes
               each character in s1 that matches any character in the string
               s2.
 ============================================================================
 */
#include <stdio.h>

#define MAXSIZE 100

void squeeze(char s[], char f[]);
void get_string(char string[], int size);

int main(void)
{
	char string_1[MAXSIZE];
	char string_2[MAXSIZE];
	get_string(string_1, MAXSIZE);
	get_string(string_2, MAXSIZE);
	squeeze(string_1, string_2);
	printf("%s\n", string_1);
	return 0;
}

/* squeeze: delete all f from s */
void squeeze(char s[], char f[])
{
	int i, j, x;
	x = 0;
	for(i = 0; s[i] != '\0'; i++)
	{
		for(j = 0; f[j] != '\0' && f[j] != s[i]; j++)
			;
		if(f[j] != '\0')
			x += 1;
		else
			s[i-x] = s[i];

		if(x > 0)
			s[i] = ' ';
	}
}

void get_string(char string[], int size)
{
	int i, c;
	for(i = 0; i < (size-1) && (c = getchar()) != EOF && c != '\n'; i++)
		string[i] = c;
	string[i] = '\0';
}
