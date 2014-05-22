/*
 ============================================================================
 Name        : 4.3-ExternalVariables-3.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 19/05/2014
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : External variables example
 ============================================================================
 */

#include <ctype.h>
#include <stdio.h>

#define NUMBER '0' /* signal that a number was found */

int getch(void);
void ungetch(int);

/* getop: get next character or numeric operand */
int getop(char s[])
{
	int i, c;
    while ((s[0] = c = getch()) == ' ' || c == '\t')
    		;
    	s[1] = '\0';
    	if (!isdigit(c) && c != '.')
    		return c;      /* not a number */
    	i = 0;
    	if (isdigit(c))    /* collect integer part */
    		while (isdigit(s[++i] = c = getch()))
    			;
    	if (c == '.')      /* collect fraction part */
    		while (isdigit(s[++i] = c = getch()))
    			;
    	s[i] = '\0';
    	if (c != EOF)
    		ungetch(c);
    	return NUMBER;
}
