/*
 ============================================================================
 Name        : Exercise-1-20.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 06/12/2013
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Write a program detab that replaces tabs in the input with the
               proper number of blanks to space to the next tab stop. Assume
               a fixed set of tab stops, say every n columns. Should n be a
               variable or a symbolic parameter?
 ============================================================================
 */
#include <stdio.h>
#define MAXSIZE 100
#define TAB 4
#define COL 4

void start_vet(char vet[], int size);
int format_line(char vet[], int size, int col, int tab);

int main(void)
{
	char vet[MAXSIZE];
	int c;

	while((c = format_line(vet, MAXSIZE, COL, TAB)) != EOF)
		if(c != '\n')
			printf("%s", vet);
	return 0;
}

void start_vet(char vet[], int size)
{
	int i;
	for(i = 0; i < size; ++i)
		vet[i] = ' ';
}

int format_line(char vet[], int size, int col, int tab)
{
	int c, i, j = 0;
	char stop = ' ';

	/* Start vector with blanks */
	start_vet(vet, size);

	for(i = 0; stop == ' ' && i < (size-1) && (c = getchar()) != EOF; ++i)
	{
		if(c == '\n')
		{
			/* ignore empty newline */
			if(i == 0)
				return c;
			else
			{
				stop = 'X';
				--i;
			}
		}
		++j;
		if(c == '\t')
		{
			while(j > (col+tab))
				j = j - (col+tab);

			j = (col+tab) - j;

			for(;j >= 0; --j)
			{
				vet[i] = ' ';
				++i;
			}
		}
		else
			vet[i] = c;
	}

	if(c != EOF)
		vet[i] = c = '\0';

	return c;
}

