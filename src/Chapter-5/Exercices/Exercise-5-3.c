/*
 ============================================================================
 Name        : Exercise-5-3.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 14/07/2014
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Write a pointer version of the function strcat that we showed
 	 	 	   in Chapter 2: strcat(s,t) copies the string t to the end of s.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void strcat2(char *s, char *t);

int main(void)
{
	int i = 0;
	char *pe = "Marchena"; // you can't modify string literals.
	char *ps = malloc(strlen(pe) + 10);  //  Allocate memory
	*ps = 'D';
	*(ps+(++i)) = 'a';
	*(ps+(++i)) = 'n';
	*(ps+(++i)) = 'i';
	*(ps+(++i)) = 'e';
	*(ps+(++i)) = 'l';
	*(ps+(++i)) = ' ';
	*(ps+(++i)) = '\0';
	printf("Start - %s and End - %s\n\n", ps, pe); /* pointer to first letter, D in this case */
	strcat2(ps, pe);
	printf("%s\n", ps);
	return 0;
}

/* strcat: concatenate t to end of s; s must be big enough */
void strcat2(char *s, char *t)
{
	int i, j;
	i = j = 0;
    while (*(s+i) != '\0') /* find end of s */
    		i++;
    while ((*(s+i) = *(t+j)) != '\0')
    		j++, i++; /* copy t */
}
