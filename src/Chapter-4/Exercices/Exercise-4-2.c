/*
 ============================================================================
 Name        : Exercise-4-2.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 16/05/2014
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Extend atof to handle scientific notation of the form
               123.45e-6 where a floating-point number may be followed by e
               or E and an optionally signed exponent.
 ============================================================================
 */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define SIZE 100
#define TRUE 1
#define FALSE 0

double atof(char s[]);
void notation(char s[]);

int main(void)
{
	char s[SIZE] = "1231.2e-6";

	printf("%g\n", atof(s));
	//printf("%f", 123.45e-1); // 123,45 --> 12,345 comma left move
	return 0;
}

/* atof: convert string s to double */
double atof(char s[])
{
	double val, power;
	int i, sign;

	notation(s);

	for (i = 0; isspace(s[i]); i++) /* skip white space */
		;

	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-')
		i++;
	for (val = 0.0; isdigit(s[i]); i++)
		val = 10.0 * val + (s[i] - '0');
	if (s[i] == '.')
		i++;
	for (power = 1.0; isdigit(s[i]); i++) {
		val = 10.0 * val + (s[i] - '0');
		power *= 10;
	}
	return sign * val / power;
}

void notation(char s[])
{
	int i, j, gap;
	char zero = FALSE;
	char x[SIZE];

	if((s[strlen(s)-3] == 'e' || s[strlen(s)-3] == 'E') &&
		(s[strlen(s)-1] - '0') > 0)
	{
		for(i = 0; s[i] != '.' && s[i] != '\0'; i++)
			;
		gap = i - (s[strlen(s)-1] - '0');

		for(j = 0; gap <= 0; j++, gap++)
		{
			x[j] = '0';
			if(j == 0)
			{
				x[++j] = '.';
				zero = TRUE;
			}
		}

		for(i = 0; i < strlen(s)-3; i++)
		{
			if(isdigit(s[i]))
			{
				if(gap == i && zero == FALSE)
				{
					x[j] = '.';
					x[++j] = s[i];
				}
				else
					x[j] = s[i];
				j++;
			}
		}
		x[j] = '\0';

		for(i = 0; s[i] != '\0'; i++)
			s[i] = ' ';
		s[i] = ' ';

		for(i = 0; x[i] != '\0'; i++)
			s[i] = x[i];
		s[i] = '\0';
	}
	else
		s[strlen(s)-3] = '\0';
}
