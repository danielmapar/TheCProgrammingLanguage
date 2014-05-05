/*
 ============================================================================
 Name        : Exercise-2-3.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 26/12/2013
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Write a function htoi(s), which converts a string of
               hexadecimal digits (including an optional 0x or 0X) into its
               equivalent integer value. The allowable digits are 0 through
               9, a through f, and A through F.
 ============================================================================
 */

#include <stdio.h>
#include <ctype.h>
#define SIZE 5

int htoi_new(char string[]);
void get_string(char string[], char size);

int main(void)
{
	char string[SIZE];
	get_string(string, SIZE);
	printf("Decimal equivalent: %d\n", htoi_new(string));
	return 0;
}

int htoi_new(char string[])
{
	enum bool {FALSE, TRUE};

	char i = 0;
	int num = 0;
	char first_entry = TRUE;

	if(string[i] == '0' && (string[i+1] == 'x' || string[i+1] == 'X'))
		i = 2;

	/* Works with ASCII character set */
	for(;string[i] != '\0'; ++i)
	{
		if (isdigit(string[i]) && first_entry)
			num = (int) string[i] - 48;
		else if (!isdigit(string[i]) && first_entry)
			if(islower(string[i]))
				return (int) +(string[i] - 87);
			else
				return (int) +(string[i] - 55);
		else if(!isdigit(string[i]))
			if(islower(string[i]))
				return ((num * (int) '\xF') + ((int) +(string[i] - 87)) + num);
			else
				return ((num * (int) '\xF') + ((int) +(string[i] - 55)) + num);
		else if(isdigit(string[i]))
			num = (num * 10) + +(string[i] - 48) + (num * 6);

		first_entry = FALSE;
	}
	return num;
}

void get_string(char string[], char size)
{
	int c, i;
	for(i = 0; i < (SIZE-1) && (c = getchar()) != EOF && c != ' ' && c != '\n'; ++i)
		string[i] = c;

	string[i] = '\0';
}
