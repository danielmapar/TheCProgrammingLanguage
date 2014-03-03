/*
 ============================================================================
 Name        : 2.8-IncrementAndDecrementOperators-2.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 27/12/2013
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : A squeeze function example to illustrate the unary operator
 	 	 	   ++ in its postfix and prefix form.
 ============================================================================
 */
#include <stdio.h>

#define MAXSIZE 100

void squeeze(char s[], int c);
void get_string(char string[], int size);

int main(void)
{
	char string[MAXSIZE];
	get_string(string, MAXSIZE);
	squeeze(string, getchar());
	printf("%s\n", string);
	return 0;
}

/* squeeze: delete all c from s */
void squeeze(char s[], int c)
{
	int i, j;
	for(i = j = 0; s[i] != '\0'; i++)
		if(s[i] != c)
			s[j++] = s[i];
	/*
	 * This is exact equivalent to:
	 * if (s[i] != c)
	 * {
     *  	   s[j] = s[i];
	 *  	   j++;
	 * }
	 */
	s[j] = '\0';
}

void get_string(char string[], int size)
{
	int i, c;
	for(i = 0; i < (size-1) && (c = getchar()) != EOF && c != '\n'; i++)
		string[i] = c;
	string[i] = '\0';
}
