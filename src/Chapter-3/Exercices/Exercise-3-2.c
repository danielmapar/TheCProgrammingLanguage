/*
 ============================================================================
 Name        : Exercise-3-2.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 07/05/2014
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Write a function escape(s,t) that converts characters like
               newline and tab into visible escape sequences like \n and
               \t as it copies the string t to s. Use a switch. Write
               a function for the other direction as well, converting escape
               sequences into the real characters.
 ============================================================================
 */

#include <stdio.h>

void escape(char s[],char t[]);

int main(void)
{
	enum array { SIZE = 100 };
	int c, i;
	char s[SIZE], t[SIZE];

	for(i = 0; i < SIZE && (c = getchar()) != EOF; i++)
		s[i] = c;
	s[i] = '\0';
	escape(s, t);
	printf("String: %s\n", t);
	return 0;
}

void escape(char s[], char t[])
{
	int i, j = 0;
	for(i = 0; s[i] != '\0'; ++i && ++j)
		switch(s[i])
		{
			case '\0':
				t[j] = '\\';
				t[++j] = '0';
				break;
			case '\n':
				t[j] = '\\';
				t[++j] = 'n';
				break;
			case '\t':
				t[j] = '\\';
				t[++j] = 't';
				break;
			default:
				t[j] = s[i];
				break;
		}
	t[j] = '\0';
}

