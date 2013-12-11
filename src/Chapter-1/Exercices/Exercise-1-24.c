/*
 ============================================================================
 Name        : Exercise-1-24.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 09/12/2013
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Write a program to check a C program for rudimentary syntax
               errors like unmatched parentheses, brackets and braces. Don't
               forget about quotes, both single and double, escape sequences,
               and comments. (This program is hard if you do it in full
               generality.)
 ============================================================================
 */

#include <stdio.h>

#define MAXSIZE 10000
#define OPEN  2
#define CLOSE 1
#define NONE ' '
#define BRACKET_1 "{}"
#define BRACKET_2 "()"
#define BRACKET_3 "[]"
#define BRACKET_4 "<>"
#define SINGLE_QUOTE '\''
#define DOUBLE_QUOTE '"'
#define COMMENTARY "/**/"
#define UNMATCHED_BRACKET "UNMATCHED_BRACKET"
#define UNMATCHED_COMMENTARY "UNMATCHED_COMMENTARY"
#define UNMATCHED_SINGLE_QUOTE "UNMATCHED_SINGLE_QUOTE"
#define UNMATCHED_DOUBLE_QUOTE "UNMATCHED_DOUBLE_QUOTE"

void start_vet(char vet[], int size);
void read_input(char vet[], int size);
void check_error(char vet[]);
int check_bracket_open(char vet[], int i, char symbol[]);
int check_bracket_close(char vet[], int i, char symbol[]);
int check_commentary_close(char vet[], int i, char symbol[]);
int check_quote_close(char vet[], int i, char symbol);
void copy(char to[], char from[]);

int main(void)
{
	char vet[MAXSIZE];

	start_vet(vet, MAXSIZE);
	read_input(vet, MAXSIZE);
	check_error(vet);

	return 0;
}

void start_vet(char vet[], int size)
{
	int i;
	for(i = 0; i < (size-1); ++i)
		vet[i] = ' ';
	vet[i] = '\0';
}

void read_input(char vet[], int size)
{
	int c, i;
	for(i = 0; i < (size-1) && (c = getchar()) != EOF; ++i)
		vet[i] = c;
	vet[i] = '\0';
}

void check_error(char vet[])
{
	int i, line = 1, size = 100;
	char error_txt[size];
	char commentary, single_quote, double_quote;

	commentary = single_quote = double_quote = CLOSE;
	for(i = 0; vet[i] != '\0'; ++i)
	{
		/* clear error text */
		start_vet(error_txt, size);

		/* increment input line */
		if(vet[i] == '\n')
			++line;

		if(vet[i] == COMMENTARY[0] && vet[i+1] == COMMENTARY[1])
		{
			commentary = OPEN;
			if(check_commentary_close(vet, i, COMMENTARY) == OPEN)
				copy(error_txt, UNMATCHED_COMMENTARY);
		}
		else if(vet[i] == COMMENTARY[2] && vet[i+1] == COMMENTARY[3])
		{
			if(commentary == CLOSE)
				copy(error_txt, UNMATCHED_COMMENTARY);
			commentary = CLOSE;
		}
		else if(commentary == CLOSE)
		{
			if(double_quote == OPEN && vet[i] == DOUBLE_QUOTE)
				double_quote = CLOSE;
			else if(single_quote == OPEN && vet[i] == SINGLE_QUOTE)
				single_quote = CLOSE;
			else if(vet[i] == DOUBLE_QUOTE)
			{
				double_quote = OPEN;
				if(check_quote_close(vet, i, DOUBLE_QUOTE) == OPEN)
					copy(error_txt, UNMATCHED_DOUBLE_QUOTE);
			}
			else if(vet[i] == SINGLE_QUOTE)
			{
				single_quote = OPEN;
				if(check_quote_close(vet, i, SINGLE_QUOTE) == OPEN)
					copy(error_txt, UNMATCHED_SINGLE_QUOTE);
			}
			else if(single_quote == CLOSE && double_quote == CLOSE)
			{
				/* check bracket */
				if(vet[i] == BRACKET_1[0] && check_bracket_close(vet, i, BRACKET_1) == OPEN)
					copy(error_txt, UNMATCHED_BRACKET);
				else if(vet[i] == BRACKET_2[0] && check_bracket_close(vet, i, BRACKET_2) == OPEN)
					copy(error_txt, UNMATCHED_BRACKET);
				else if(vet[i] == BRACKET_3[0] && check_bracket_close(vet, i, BRACKET_3) == OPEN)
					copy(error_txt, UNMATCHED_BRACKET);
				else if(vet[i] == BRACKET_4[0] && check_bracket_close(vet, i, BRACKET_4) == OPEN)
					copy(error_txt, UNMATCHED_BRACKET);
				/* check bracket inverted */
				else if(vet[i] == BRACKET_1[1] && check_bracket_open(vet, i, BRACKET_1) == CLOSE)
					copy(error_txt, UNMATCHED_BRACKET);
				else if(vet[i] == BRACKET_2[1] && check_bracket_open(vet, i, BRACKET_2) == CLOSE)
					copy(error_txt, UNMATCHED_BRACKET);
				else if(vet[i] == BRACKET_3[1] && check_bracket_open(vet, i, BRACKET_3) == CLOSE)
					copy(error_txt, UNMATCHED_BRACKET);
				else if(vet[i] == BRACKET_4[1] && check_bracket_open(vet, i, BRACKET_4) == CLOSE)
					copy(error_txt, UNMATCHED_BRACKET);
			}
		}
		if(error_txt[0] != NONE)
			printf("Line: %d - Character position: %d (%c) - Erro: %s\n", line, i+1, vet[i], error_txt);
	}
}

int check_bracket_open(char vet[], int i, char symbol[])
{
	int counter;
	char single_quote, double_quote, commentary;
	single_quote = double_quote = commentary = CLOSE;

	for(counter = 0; i >= 0; --i)
	{
		if(vet[i] == '\'' && single_quote == CLOSE)
			single_quote = OPEN;
		else if(vet[i] == '\'' && single_quote == OPEN)
			single_quote = CLOSE;

		if(vet[i] == '"' && double_quote == CLOSE)
			double_quote = OPEN;
		else if(vet[i] == '"' && double_quote == OPEN)
			double_quote = CLOSE;

		if(vet[i] == '/' && vet[i-1] == '*' && commentary == CLOSE)
			commentary = OPEN;
		else if(vet[i] == '*' && vet[i-1] == '/' && commentary == OPEN)
			commentary = CLOSE;

		if(single_quote == CLOSE && double_quote == CLOSE && commentary == CLOSE)
		{
			if(vet[i] == symbol[0])
				--counter;
			else if(vet[i] == symbol[1])
				++counter;
			if(counter == 0)
				return OPEN;
		}
	}
	return CLOSE;
}

int check_bracket_close(char vet[], int i, char symbol[])
{
	int counter;
	char single_quote, double_quote, commentary;
	single_quote = double_quote = commentary = CLOSE;

	for(counter = 0; vet[i] != '\0'; ++i)
	{
		if(vet[i] == '\'' && single_quote == CLOSE)
			single_quote = OPEN;
		else if(vet[i] == '\'' && single_quote == OPEN)
			single_quote = CLOSE;

		if(vet[i] == '"' && double_quote == CLOSE)
			double_quote = OPEN;
		else if(vet[i] == '"' && double_quote == OPEN)
			double_quote = CLOSE;

		if(vet[i] == '/' && vet[i+1] == '*' && commentary == CLOSE)
			commentary = OPEN;
		else if(vet[i] == '*' && vet[i+1] == '/' && commentary == OPEN)
			commentary = CLOSE;

		if(single_quote == CLOSE && double_quote == CLOSE && commentary == CLOSE)
		{
			if(vet[i] == symbol[0])
				++counter;
			else if(vet[i] == symbol[1])
				--counter;
			if(counter == 0)
				return CLOSE;
		}
	}
	return OPEN;
}

int check_commentary_close(char vet[], int i, char symbol[])
{
	int counter;

	for(counter = 0; vet[i] != '\0'; ++i)
	{
		if(vet[i] == symbol[0] && vet[i+1] == symbol[1])
			++counter;
		else if(vet[i] == symbol[2] && vet[i+1] == symbol[3])
			--counter;
		if(counter == 0)
			return CLOSE;
	}
	return OPEN;
}

int check_quote_close(char vet[], int i, char symbol)
{
	if(symbol == SINGLE_QUOTE)
	{
		if(vet[i+2] == symbol)
			return CLOSE;
		return OPEN;
	}
	else if(symbol == DOUBLE_QUOTE)
	{
		for(i = i+1; vet[i] != '\0'; ++i)
		{
			if(vet[i] == DOUBLE_QUOTE)
				return CLOSE;
		}
		return OPEN;
	}
	return NONE;
}

void copy(char to[], char from[])
{
	int i;
	for(i = 0; from[i] != '\0'; ++i)
		to[i] = from[i];
	to[i] = '\0';
}
