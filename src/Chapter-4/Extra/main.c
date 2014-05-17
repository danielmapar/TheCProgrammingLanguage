/*
 ============================================================================
 Name        : main.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 16/05/2014
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Main
 ============================================================================
 */

#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */

char pattern[] = "ould";

/* find all lines matching pattern */
int main(void)
{
	char line[MAXLINE];
	int found = 0;

	while (getlinev2(line, MAXLINE) > 0)
		if (strindexv2(line, pattern) >= 0) {
			printf("%s", line);
			found++;
		}
	return found;
}
