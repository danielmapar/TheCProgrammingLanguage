/*
 ============================================================================
 Name        : push-pop.c
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

char varsNames[MAXVAL]; /* variables matrix (name) */
double varsValues[MAXVAL]; /* variables matrix (value) */
int varPos = 0; /* last variable declared */

void push(double f);
void pushVarName(char v);
void pushVarValue(double n);
double pop(void);
double printtop(void);
void duplicate(void);
void swap(void);
void clear(void);

/* push:  push f onto value stack */
void push(double f)
{
	if (sp < MAXVAL)
		val[sp++] = f;
	else
		printf("error: stack full, can't push %g\n", f);
}

/* pushVarName:  push v into variables name list */
void pushVarName(char v)
{
	if (varPos < MAXVAL)
		varsNames[varPos] = v;
	else
		printf("error: variables list full, can't push %c\n", v);
}

/* pushVarValue:  push n in variables value list */
void pushVarValue(double n)
{
	if (varPos < MAXVAL)
		varsValues[varPos++] = n;
	else
		printf("error: variables matrix full, can't push %g\n", n);
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

/* printtop:  print top element from the stack */
double printtop(void)
{
	if (sp > 0)
		return val[sp-1];
	else {
		printf("error: stack empty\n");
		return 0.0;
	}
}

/* duplicate:  duplicate top element from the stack */
void duplicate(void)
{
	if (sp < MAXVAL)
	{
		val[sp] = val[sp-1];
		sp++;
	}
}

/* swap:  swap top elements from the stack */
void swap(void)
{
	double temp;
	temp = val[sp-1];
	val[sp-1] = val[sp-2];
	val[sp-2] = temp;
}

/* clear:  clear the entire stack */
void clear(void)
{
	int i;
	for(i = 0; i < MAXVAL; i++)
		val[i] = 0.0;
}
