/*
 ============================================================================
 Name        : 2.8-IncrementAndDecrementOperators-3.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 27/12/2013
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : A second version of the function strcat to show one more time
 	 	 	   the difference between both prefix and postfix on the unary
 	 	 	   operator ++ and --.
 ============================================================================
 */
#include <stdio.h>

#define MAXSIZE 100

void get_string(char string[], int size);
void strcar(char s[], char t[]);

int main(void)
{
	char string_1[MAXSIZE];
	char string_2[MAXSIZE+MAXSIZE];
	get_string(string_1, MAXSIZE);
	get_string(string_2, MAXSIZE+MAXSIZE);
	strcar(string_1, string_2);
	printf("%s\n", string_1);
	return 0;
}

/* strcat : concatenate t to end of s; s must be big enough */
void strcar(char s[], char t[])
{
	int i, j;

	i = j = 0;
	while(s[i] != '\0') /* find the end of s */
		i++;
	while((s[i++] = t[j++]) != '\0') /* copy t */
		;
}

void get_string(char string[], int size)
{
	int i, c;
	for(i = 0; i < (size-1) && (c = getchar()) != EOF && c != '\n'; i++)
		string[i] = c;
	string[i] = '\0';
}
