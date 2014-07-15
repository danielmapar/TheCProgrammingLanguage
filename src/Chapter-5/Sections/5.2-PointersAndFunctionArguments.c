/*
 ============================================================================
 Name        : 5.2-PointersAndFunctionArguments.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 10/07/2014
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Pointer and functions arguments
 ============================================================================
 */

#include <stdio.h>
#include <ctype.h>

#define SIZE 100
#define BUFFSIZE 100

void swap(int *a, int *b);
int getint(int *pn);
int getch(void);
void ungetch(int c);

char buf[BUFFSIZE]; /*buffer for ungetch*/
int bufp = 0; /*next free position in buff*/

int main(void)
{
	int a = 1, b = 2;

	swap(&a, &b);
	printf("a -> %d and b -> %d\n\n",a ,b);

	int n, array[SIZE];
	for (n = 0; n < SIZE && getint(&array[n]) != EOF; n++)
		printf("%d ", array[n]);

	return 0;
}
/* function work with pointers */
void swap(int *pa, int *pb)
{
	int temp;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

/* getint: get next integer from input into *pn */
int getint(int *pn)
{
	int c, sign;

	while(isspace(c = getch())) /* skip white space */
		;

	if(!isdigit(c) && c != '+' && c != '-' && c != EOF)
	{
		//ungetch(c);  /* it is not a number */
		return 0;
	}

	sign = (c == '-') ? -1 : 1;
	if(c == '+' || c == '-')
		c = getch();
	for(*pn = 0; isdigit(c); c = getch())
		*pn = 10 * *pn + (c - '0');
	*pn *= sign;
	if(c != EOF)
		ungetch(c);
	return c;
}

int getch(void)/*get a (possibly pushed back) character*/
{
	return (bufp>0) ? buf[--bufp] : getchar();
}

void ungetch(int c)/*push character back on input*/
{
	if(bufp > BUFFSIZE)
		printf("ungetch: too many characters.");
	else
		buf[bufp++] = c;
}


