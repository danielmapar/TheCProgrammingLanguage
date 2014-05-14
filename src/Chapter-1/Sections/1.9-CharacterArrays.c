/*
 ============================================================================
 Name        : 1.9-CharacterArrays.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 05/12/2013
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : A program that reads a set of text lines and prints the
 	 	 	   longest.
 ============================================================================
 */

#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */

int getline_new(char line[], int maxline); /* there is already a getline on stdio.h */
void copy(char to[], char from[]);

/* print the longest input line */
int main(void)
{
	int len;               /* current line length */
	int max;               /* maximum length seen so far */
	char line[MAXLINE];    /* current line saved here */
	char longest[MAXLINE]; /* longest line saved here */

	max = 0;
	while ((len = getline_new(line, MAXLINE)) > 0)
		if(len > max)
		{
			max = len;
			copy(longest, line);
		}
	if (max > 0) /* there was a line  */
		printf("%s", longest);

	return 0;
}

/* getline_new: read a line into s, return length */
int getline_new(char s[], int lim)
{
	int c, i;

	for(i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;

	if(c == '\n')
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
	int i;

	i = 0;
	while((to[i] = from[i]) != '\0')
		++i;
}
