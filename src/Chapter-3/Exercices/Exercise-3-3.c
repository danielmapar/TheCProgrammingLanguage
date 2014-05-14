/*
 ============================================================================
 Name        : Exercise-3-3.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 13/05/2014
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Write a function expand(s1,s2) that expands shorthand
               notations like a-z in the string s1 into the equivalent
               complete list abc...xyz in s2. Allow for letters of either
               case and digits, and be prepared to handle cases like a-b-c
               and a-z0-9 and -a-z. Arrange that a leading or trailing - is
               taken literally.
 ============================================================================
 */

#include <stdio.h>
#define SIZE 100

void getinput(char input[], int size);
void expand(char s1[], char s2[], int size);

int main(void)
{
	char input[SIZE], output[SIZE];
	getinput(input, SIZE);
	expand(input, output, SIZE);
	printf("Output - %s\n", output);
	return 1;
}

void expand(char s1[], char s2[], int size)
{
	int i, j = 0;
	char c;
	for(i = 0; s1[i] != '\0'; i++)
		if(s1[i] == '-' && (i-1) >= 0)
		{
			c = s1[i-1];
			for( ;j < size && c <= s1[i+1]; j++)
				s2[j] = c++;
			j--;
		}
}

void getinput(char input[], int size)
{
	int i, c;
	for(i = 0; i < size && (c = getchar()) != EOF; i++)
		input[i] = c;
	input[i] = '\0';
}
