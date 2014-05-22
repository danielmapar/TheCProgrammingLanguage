/*
 ============================================================================
 Name        : main.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 19/05/2014
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : External variables example
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>  /* for  atof() */
#include <math.h> /* sin, exp and pow */

#define MAXOP 100 /* max size of operand or operator */
#define NUMBER '0' /* signal that a number was found */

#define TRUE '1'
#define FALSE '0'

int getop(char []);
void push(double);
void pushVarName(char v);
void pushVarValue(double n);
double pop(void);
double printtop(void);
void duplicate(void);
void swap(void);
void clear(void);

extern char varsNames[]; /* variables matrix (name) */
extern double varsValues[]; /* variables matrix (value) */
extern int varPos; /* last variable declared */

/* reverse Polish calculator */
int main()
{
	int type;
	double op2;
	char s[MAXOP];
	char varDetected = FALSE;

	while ((type = getop(s)) != EOF) {
		switch (type) {
		case NUMBER:
			if(varDetected == TRUE)
			{
				pushVarValue(atof(s));
				varDetected = FALSE;
				printf("%c -> %g", varsNames[varPos-1], varsValues[varPos-1]);
			}
			else
				push(atof(s));
			break;
		case '+':

			push(pop() + pop());
			break;
		case '*':
			push(pop() * pop());
			break;
		case '-':
			op2 = pop();
			push(pop() - op2);
			break;
		case '/':
			op2 = pop();
			if (op2 != 0.0)
				push(pop() / op2);
			else
				printf("error: zero divisor\n");
			break;
		case '%':
			op2 = pop();
			if (op2 != 0.0)
				push((int) pop() % (int) op2);
			else
				printf("error: zero divisor (modulus)\n");
			break;
		case '=': // assign variable
			varDetected = TRUE;
			break;
		case 'S': // Compute sine
			push(sin(pop()));
			break;
		case 'E': // Compute exponential function
			push(exp(pop()));
			break;
		case '^': // Raise to power
			op2 = pop();
			push(pow(pop(), op2));
			break;
		case 'P': // print top element from the stack
			printf("Top element is: %g\n", printtop());
			break;
		case 'D': // duplicate top element from the stack
			duplicate();
			break;
		case '>': // swap top elements from the stack
			swap();
			break;
		case 'C': //clear entire stack
			clear();
			break;
		case '\n':
			//printf("\t%.8g\n", pop());
			break;
		default:
			if(type >= 'a' && type <= 'z')
				pushVarName(type);
			else
				printf("error: unknown command %s\n", s); break;
		}
	}
return 0;
}
