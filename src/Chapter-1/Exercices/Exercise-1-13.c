/*
 ============================================================================
 Name        : Exercise-1-13.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 04/12/2013
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Write a program to print a histogram of the lengths of words
  	  	  	   in its input. It is easy to draw the histogram with the bars
  	  	  	   horizontal; a vertical orientation is more challenging.
 ============================================================================
 */

#include <stdio.h>

#define VET_SIZE 1000000
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

	/* get characters and count each word */
	while((c = getchar()) != EOF)
	{
		if(c == ' ' || c == '\n' || c == '\t')
		{
			if(counter > 0)
				++vet[counter];
			counter = 0;
		}
		else
			++counter;
	}

	printf("\nHorizontal histogram");

	/* build the horizontal histogram */
	for(i = 1; i < VET_SIZE; ++i)
		for(j = 0; j < vet[i]; ++j)
		{
			if(j == 0)
				printf("\n%d: ", i);
			printf("|");
		}

	printf("\nVertical histogram");

	/* build the vertical histogram */
	for(i = 1; i < VET_SIZE; ++i)
	{
		/* verify most frequent word off all */
		if(most_frequent < vet[i])
			most_frequent = vet[i];
		/* fill vet_tab based on vet values */
		if(vet[i] > 0)
			vet_layout[i] = LAYOUT_ESCAPE_SEQUENCE;
	}

	/* values */
	printf("\n");
	for(i = most_frequent; i > 0; --i)
	{
		for(j = 1; j < VET_SIZE; ++j)
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

	/* titles */
	printf("\n");
	for(i = 1; i < VET_SIZE; ++i)
		if(vet_layout[i] != '0')
			printf("%d%c", i, vet_layout[i]);


	printf("\n");

	return 0;
}
