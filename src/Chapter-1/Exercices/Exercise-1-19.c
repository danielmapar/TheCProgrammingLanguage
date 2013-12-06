/*
 ============================================================================
 Name        : Exercise-1-19.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 06/12/2013
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Write a function reverse(s) that reverses the character
 	 	 	   string s. Use it to write a program that reverses its input
 	 	 	   a line at a time.
 ============================================================================
 */

#include <stdio.h>
#define MAX_LINE_SIZE 1000 /* Vector size */

int format_line(char sentence[], int max_size);
void start_vet(char vet[], int size);
void revert_line(char vet[], int last_char);

int main(void)
{
	int c;
	char sentence[MAX_LINE_SIZE];

	while((c = format_line(sentence, MAX_LINE_SIZE)) != EOF)
		if(c != '\n')
			printf("Inverted sentence: %s\n",sentence);

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
			/* ignore empty newline */
			if(i == 0)
				return c;
			else
			{
				stop = 'X';
				--i;
			}
		}
		else
			sentence[i] = c;
	}

	if(c != EOF)
	{
		sentence[i] = c = '\0';
		revert_line(sentence, i);
	}

	return c;
}

void start_vet(char vet[], int size)
{
	int i;
	for(i = 0; i < size; ++i)
		vet[i] = ' ';
}

void revert_line(char vet[], int last_char)
{
	char char_tmp;
	int i, j;

	i = last_char-1; /* The character before \0 */

	/* No need for parameter last_char */
	/*for(i = 0; vet[i] != '\0'; ++i)
		;
	--i;*/

	for(j = 0; i > j; ++j)
	{
		char_tmp = vet[i];
		vet[i] = vet[j];
		vet[j] = char_tmp;
		--i;
	}
	vet[last_char] = '\0';
}


