/*
 ============================================================================
 Name        : Exercise-1-22.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 06/12/2013
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Write a program to ``fold'' long input lines into two or more
               shorter lines after the last non-blank character that occurs
               before the n-th column of input. Make sure your program does
               something intelligent with very long lines, and if there are
               no blanks or tabs before the specified column.
 ============================================================================
 */

#include <stdio.h>
#define MAXLINE 10

void start_vet(char vet[], int size);
int fold_line(char vet[], int size, int index);
int reset_vet(char vet[], int size, int index);

int main(void)
{
	int c, i, j;
	i = j = 0;
	char vet[MAXLINE];
	while((c = fold_line(vet, MAXLINE, i)) != EOF && c != '\n')
	{
		if(c > 0)
		{
			for(j = 0; j <= c; ++j)
				printf("%c", vet[j]);
			printf("\n");
			i = reset_vet(vet, MAXLINE, (c+1));
		}
		else
		{
			printf("%s\n", vet);
			start_vet(vet, MAXLINE);
			i = 0;
		}
	}
	printf("%s", vet);

	return 0;
}

void start_vet(char vet[], int size)
{
	int i;
	for(i = 0; i < (size-1); ++i)
		vet[i] = ' ';
	vet[i] = '\0';
}

int fold_line(char vet[], int size, int index)
{
	int i, c;
	int space_index = 0;
	for(i = index; i < (size-1) && (c = getchar()) != '\n' && c != EOF; ++i)
	{
		if(c == ' ' || c == '\t')
			space_index = i;
		vet[i] = c;
	}
	if(c == '\n')
	{
		vet[i] = c;
		++i;
	}
	vet[i] = '\0';

	if (c == EOF || c == '\n')
		return c;
	else
		return space_index;
}

int reset_vet(char vet[], int size, int index)
{
	int i, j;
	for(i = 0; vet[index] != '\0'; ++i)
	{
		vet[i] = vet[index];
		++index;
	}
	j = i;
	for(;i < (size-1); ++i)
		vet[i] = ' ';

	return j;
}
