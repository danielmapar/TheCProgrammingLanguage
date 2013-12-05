/*
 ============================================================================
 Name        : Exercise-1-16-2.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 05/12/2013
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Revise the main routine of the longest-line program so it will
               correctly print the length of arbitrary long input lines, and
               as much as possible of the text v2.
 ============================================================================
*/

#include <stdio.h>
#define MAXLINE 10 /* maximum input line length */

int getline_new(char line[], int maxline); /* there is already a getline on stdio.h */
void copy(char to[], char from[]);

/* print the longest input line */
int main(void)
{
	int len;                    /* first line length */
	int len_tmp;                /* other lines temporarily length */
	int max_len;                /* maximum length seen so far */
	char first_line[MAXLINE];   /* first line saved here */
	char line_tmp[MAXLINE];     /* other lines temporarily saved here */
	char longest_line[MAXLINE]; /* longest line saved here */
	char end_line;              /* flag to determine end of line */

	max_len = 0;
	end_line = ' ';
	while ((len = getline_new(first_line, MAXLINE)) > 0)
	{
		if (len == (MAXLINE-1))
			while (end_line == ' ' && (len_tmp = getline_new(line_tmp, MAXLINE)) > 0)
			{
				len += len_tmp;
				if(len_tmp < (MAXLINE-1))
					end_line = 'X';
			}
		len_tmp = 0;
		end_line = ' ';
		if(max_len < len)
		{
			max_len = len;
			copy(longest_line, first_line);
		}
	}

	if (max_len > 0) /* there was a line  */
		printf("String: %s\nSize: %d\n", longest_line, max_len);

	return 0;
}

/* getline_new: read a line into s, return length */
int getline_new(char s[], int lim)
{
	int c, i;

	for(i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;

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
