/*
 ============================================================================
 Name        : 4.3-ExternalVariables-2.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 19/05/2014
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : External variables example
 ============================================================================
 */

#include <stdio.h>

#define MAXVAL 100 /* maximum depth of val stack */

int sp = 0;          /* next free stack position */
double val[MAXVAL];  /* value stack */

/* push:  push f onto value stack */
void push(double f)
{
	if (sp < MAXVAL)
		val[sp++] = f;
	else
		printf("error: stack full, can't push %g\n", f);
}

/* pop:  pop and return top value from stack */
double pop(void)
{
	if (sp > 0)
		return val[--sp];
	else {
		printf("error: stack empty\n");
		return 0.0;
	}
}
