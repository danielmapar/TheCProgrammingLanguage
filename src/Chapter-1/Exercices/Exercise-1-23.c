/*
 ============================================================================
 Name        : Exercise-1-23.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 07/12/2013
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Write a program to remove all comments from a C program.
               Don't forget to handle quoted strings and character constants
               properly. C comments don't nest.
 ============================================================================
 */

#include <stdio.h>
#define MAXSIZE 10000
#define TRUE 'X'
#define FALSE ' '

void start_vet(char vet[], int size);

int main(void)
{
	int c, i;
	char vet[MAXSIZE];
	char quoted = FALSE;
	char commentary = FALSE;

	start_vet(vet, MAXSIZE);

	for(i = 0; i < (MAXSIZE-1) && (c = getchar()) != EOF; ++i)
	{
		if(c == '"' && commentary == FALSE)
		{
			if(quoted == TRUE)
				quoted = FALSE;
			else if(quoted == FALSE)
				quoted = TRUE;
		}
		/* open/close commentary */
		if(quoted == FALSE)
		{
			if(c == '/')
			{
				if((c = getchar()) == '*')
					commentary = TRUE;
				c = getchar();
			}
			else if(c == '*')
			{
				if((c = getchar()) == '/')
					commentary = FALSE;
				c = getchar();
			}
		}
		if(commentary == FALSE)
			vet[i] = c;
	}
	vet[i+1] = '\0';
	printf("--------------------\n");
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
