/*
 ============================================================================
 Name        : Exercise-1-18.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 06/12/2013
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Write a program to remove trailing blanks and tabs from each
               line of input, and to delete entirely blank lines.
 ============================================================================
 */

#include <stdio.h>
#define MAX_LINE_SIZE 1000 /* Vector size */

int format_line(char sentence[], int max_size);
void start_vet(char vet[], int size);

int main(void)
{
	int c;
	char sentence[MAX_LINE_SIZE];

	while((c = format_line(sentence, MAX_LINE_SIZE)) != EOF)
		if(c != '\n')
			printf("Formatted line: %s\n",sentence);

	return 0;
}

int format_line(char sentence[], int max_size)
{
	int c, i;
	char stop = ' ';

	/* Start vector with blanks */
	start_vet(sentence, max_size);

	for(i = 0; stop == ' ' && i < (max_size-1) && (c = getchar()) != EOF; ++i)
	{
		if(c == '\n')
		{
			if(i == 0)
				return c;
			else
			{
				stop = 'X';
				--i;
			}
		}
		else
		{
			if(c != ' ' && c != '\t')
				sentence[i] = c;
			else
				--i;
		}
	}

	if(c != EOF)
		sentence[i] = c = '\0';

	return c;
}

void start_vet(char vet[], int size)
{
	int i;
	for(i = 0; i < size; ++i)
		vet[i] = ' ';
}
