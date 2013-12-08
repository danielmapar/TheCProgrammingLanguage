/*
 ============================================================================
 Name        : Exercise-1-21.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 06/12/2013
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Write a program entab that replaces strings of blanks by the
               minimum number of tabs and blanks to achieve the same spacing.
               Use the same tab stops as for detab. When either a tab or a
               single blank would suffice to reach a tab stop, which should
               be given preference?
 ============================================================================
 */

#include <stdio.h>
#define MAXSIZE 100
#define TAB 4

void start_vet(char vet[], int size);
int format_line(char vet[], int size, int tab);

int main(void)
{
	char vet[MAXSIZE];
	int c;

	while((c = format_line(vet, MAXSIZE, TAB)) != EOF)
		if(c != '\n')
			printf("%s", vet);
	return 0;
}

void start_vet(char vet[], int size)
{
	int i;
	for(i = 0; i < size; ++i)
		vet[i] = ' ';
	vet[i] = '\0';
}

int format_line(char vet[], int size, int tab)
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
				stop = 'X';
		}
		/* treat blanks */
		if(c == ' ')
		{
			++j;
			--i;
		}
		/* write tabs and blanks */
		else
		{
			while(j >= tab)
			{
				vet[i] = '\t';
				j = j - tab;
				++i;
			}
			while(j > 0)
			{
				vet[i] = ' ';
				j = j - 1;
				++i;
			}
			vet[i] = c;
		}
	}

	if(c != EOF)
		vet[i] = c = '\0';

	return c;
}
