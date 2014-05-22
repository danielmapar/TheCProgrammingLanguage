/*
 ============================================================================
 Name        : getop.c
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
#define NEGATIVE -1 /* negative number */
#define POSITIVE  1 /* positive number */

int getch(void);
void ungetch(int);

/* getop: get next character or numeric operand */
int getop(char s[])
{
	char sign = POSITIVE;
	int i = 0, c;
    while ((s[0] = c = getch()) == ' ' || c == '\t')
    		;
    	s[1] = '\0';
    	if (!isdigit(c) && c != '.' && c != '-')
		return c;  /* not a number */

    if(s[0] == '-')
    {
    		/* next char after '-' sign is not a number */
    		if(!isdigit(c = getch()))
    		{
    			ungetch(c);   /* return char back to buffer */
    			return s[0];
    		}
    		else
    			s[++i] = c;
    }

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
