/*
 ============================================================================
 Name        : Exercise-5-2.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 10/07/2014
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Write getfloat, the floating-point analog of getint. What type
               does getfloat return as its function value?
 ============================================================================
 */

#include <stdio.h>
#include <ctype.h>

#define SIZE 100
#define BUFFSIZE 100

int getfloat(float *pn);
int getch(void);
void ungetch(int c);

char buf[BUFFSIZE]; /*buffer for ungetch*/
int bufp = 0; /*next free position in buff*/

int main(void)
{
	int n;
	float array[SIZE];
	for (n = 0; n < SIZE && getfloat(&array[n]) != EOF; n++)
		printf("%g ", array[n]);

	return 0;
}

/* getfloat: get next float from input into *pn */
int getfloat(float *pn)
{
   int c, sign, mark;
   float fract;

   while(isspace(c = getch())) //skip white space
       ;
   if(!isdigit(c) && c != EOF && c != '+' && c != '-' && c != '.')
   {
       ungetch(c); //it's not a number
       return 0;
   }
   sign = (c == '-') ? -1 : 1;
   if(c == '+' || c == '-')
   {
       mark = c; //remember a sign
       c = getch();
       if(!isdigit(c))
       {
           if(c != EOF)
               ungetch(c); //not a number - back on the input
           ungetch(mark); //back sign of the symvol on the input
           return 0;
       }
   }
   for(*pn = 0.0; isdigit(c); c = getch())
       *pn = 10.0 * *pn + (c - '0'); // collect integer part
   if(c == '.')
       c = getch();
   for(fract = 1.0; isdigit(c); c = getch())
   {
       *pn = 10.0 * *pn +(c - '0');
       fract *=10.0;
   }

   *pn *= sign/fract;
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
