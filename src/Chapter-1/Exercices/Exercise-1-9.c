/*
 ============================================================================
 Name        : Exercise-1-9.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 03/12/2013
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Write a program to copy its input to its output, replacing
  	  	  	   each string of one or more blanks by a single blank.
 ============================================================================
 */

#include <stdio.h>
/* 1 = True and 0 = False */
#define BLANK_SPACE_YES 1
#define BLANK_SPACE_NO  0

int main(void)
{
	char blank_space = BLANK_SPACE_NO;
	int c;

	while((c = getchar()) != EOF)
	{
		if(c == ' ')
		{
			blank_space = BLANK_SPACE_YES;
			continue; /* Get back to the beginning of while */
		}
		else if(blank_space == BLANK_SPACE_YES)
		{
			printf(" ");
			blank_space = BLANK_SPACE_NO;
		}
		printf("%c",c);
	}

	return 0;
}
