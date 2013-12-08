/*
 ============================================================================
 Name        : CompactLinesIntoOne.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 06/12/2013
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : A program that compacts n lines into a single one.
 ============================================================================
 */

#include <stdio.h>
#define MAXLINE 100

void start_vet(char vet[], int size);
int read_line(char vet[], int size, int vet_pos);

int main(void)
{
	int vet_pos = 0; /* vector position */
	char vet[MAXLINE];
	while((vet_pos = read_line(vet, MAXLINE, vet_pos)) != EOF)
	{
		if(vet_pos == (MAXLINE-1))
		{
			printf("Compact line: %s\n",vet);
			vet_pos = 0;
			start_vet(vet, MAXLINE);
		}
	}
	/* last line */
	printf("Compact line: %s",vet);
	return 0;
}

void start_vet(char vet[], int size)
{
	int i;
	for(i = 0; i < size-1; ++i)
		vet[i] = ' ';
	vet[i] = '\0';
}

int read_line(char vet[], int size, int vet_pos)
{
	int i;
	int c;
	char space = ' ';

	for(i = vet_pos; i < size-1 && (c = getchar()) != '\n' && c != EOF; ++i)
	{
		if(c == '\t' || c == ' ')
		{
			if(space == ' ')
			{
				space = 'X';
				vet[i] = ' ';
			}
			else
				--i;
		}
		else
		{
			space = ' ';
			vet[i] = c;
		}
	}

	if(c != EOF)
	{
		if(i == size-1)
			vet[i] = '\0';
		return i;
	}

	return c;
}
