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

double atof(char s[]);

int main(void)
{

	printf("%f\n", atof("12.312e-1"));
	//printf("%f", 123.45e-1); // 123,45 --> 12,345 comma left move
	return 0;
}

/* atof: convert string s to double */
double atof(char s[])
{
	char s2[100];
	double val, power;
	int i,j, point, sign;
	for (i = 0; isspace(s[i]); i++) /* skip white space */
		;

	if((s[strlen(s)-3] == 'e' || s[strlen(s)-3] == 'E') &&
	    s[strlen(s)-1] > 0)
	{
		for (j = 0; s[j] != '.'; j++)
			;
		point = j -  (s[strlen(s)-1] - '0');
		if(point < 0)
			for(j = 0; point < 0; j++, point++)
				s2[j] = '0';

		for (j = 0, i = 0; (s[i] != 'e' && s[i] != 'E') ; j++, i++)
		{
			if(i == point)
				s2[j] = '.';
			else if(isdigit(s[j]))
				s2[j] = s[i];
		}
		s2[j] = '\0';

		for(j = 0; s[j] != '\0'; j++)
			s[j] = ' ';
		s[j] = ' ';
		for(j = 0; s2[j] != '\0'; j++)
			s[j] = s2[j];
		s[j] = '\0';
	}

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
