/*
 ============================================================================
 Name        : Exercise-1-14.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 04/12/2013
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Write a program to print a histogram of the frequencies of
 	 	 	   different characters in its input.
 ============================================================================
 */

#include <stdio.h>

#define VET_SIZE 256
#define LAYOUT_ESCAPE_SEQUENCE '\t'

int main(void)
{
	int c, counter = 0;
	int vet[VET_SIZE], i, j, most_frequent = 0;
	char vet_layout[VET_SIZE];

	for(i = 0; i < VET_SIZE; i++)
	{
		vet[i] = 0;
		vet_layout[i] = '0';
	}

	/* get characters and count each one based on extended ASCII  */
	while((c = getchar()) != EOF)
		if(c != ' ' && c != '\n' && c != '\t')
			++vet[c];

	printf("\nHorizontal histogram");

	/* build the horizontal histogram */
	for(i = 0; i < VET_SIZE; ++i)
		for(j = 0; j < vet[i]; ++j)
		{
			/* title */
			if(j == 0)
				printf("\n%c: ", i);
			/* value */
			printf("|");
		}

	printf("\nVertical histogram");

	/* build the vertical histogram */
	for(i = 0; i < VET_SIZE; ++i)
	{
		/* verify most frequent word off all */
		if(most_frequent < vet[i])
			most_frequent = vet[i];
		/* fill vet_tab based on vet values */
		if(vet[i] > 0)
			vet_layout[i] = LAYOUT_ESCAPE_SEQUENCE;
	}

	/* value */
	printf("\n");
	for(i = most_frequent; i > 0; --i)
	{
		for(j = 0; j < VET_SIZE; ++j)
		{
			if(vet[j] == i)
			{
				printf("_");
				--vet[j];
			}
			if(vet_layout[j] != '0')
				printf("%c",vet_layout[j]);
		}
		printf("\n");
	}

	/* title */
	printf("\n");
	for(i = 0; i < VET_SIZE; ++i)
		if(vet_layout[i] != '0')
			printf("%c%c", i, vet_layout[i]);


	printf("\n");

	return 0;
}
