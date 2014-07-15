/*
 ============================================================================
 Name        : Exercise-5-4.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 14/07/2014
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Write the function strend(s,t), which returns 1 if the string
 	 	 	   t occurs at the end of the string s, and zero otherwise.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strend(char *s, char *t);

int main(void)
{
	int i = 0;
	char *s = malloc(sizeof(char) * 30);
	char *t = "Marchena";
	*s = 'D';
	*(s+(++i)) = 'a';
	*(s+(++i)) = 'n';
	*(s+(++i)) = 'i';
	*(s+(++i)) = 'e';
	*(s+(++i)) = 'l';
	*(s+(++i)) = ' ';
	*(s+(++i)) = 'M';
	*(s+(++i)) = 'a';
	*(s+(++i)) = 'r';
	*(s+(++i)) = 'c';
	*(s+(++i)) = 'h';
	*(s+(++i)) = 'e';
	*(s+(++i)) = 'n';
	*(s+(++i)) = 'a';
	*(s+(++i)) = '\0';

	printf("Output -> %d\n", strend(s, t));

}

int strend(char *s, char *t)
{
	int size_s = strlen(s), size_t = strlen(t);

	if(size_s > size_t)
	{
		while(*t != '\0' && *(s+(size_s-size_t--)) == *(t++))
			;
		if(*t == '\0' && *(s+(size_s-size_t)) == '\0')
			return 1;
	}
	return 0;
}
