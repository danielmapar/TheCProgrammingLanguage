/*
 ============================================================================
 Name        : Exercise-1-17.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 05/12/2013
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Write a program to print all input lines that are longer than
 	 	 	   80 characters.
 ============================================================================
 */

#include <stdio.h>
#define MAX_LINE_SIZE 1000 /* Vector size */
#define MINIMUM_LINE_SIZE 80 /* Minimum size of each line */

int line_length(char sentence[], int max_size);
void start_vet(char vet[], int size);

int main(void)
{
	int line_size = 0;
	char sentence[MAX_LINE_SIZE];

	while((line_size = line_length(sentence, MAX_LINE_SIZE)) > 0)
		if(line_size > MINIMUM_LINE_SIZE)
			printf("Valid line: %s\n",sentence);

	return 0;
}

int line_length(char sentence[], int max_size)
{
	int c, i, length = 0;

	/* Start vector with blanks */
	start_vet(sentence, max_size);

	for(i = 0; i < (max_size-1) && (c = getchar()) != EOF && c != '\n'; ++i)
	{
		sentence[i] = c;
		length += 1;
	}

	if(c == '\n')
		length += 1;
	sentence[i] = '\0';

	return length;
}

void start_vet(char vet[], int size)
{
	int i;
	for(i = 0; i < size; ++i)
		vet[i] = ' ';
}


