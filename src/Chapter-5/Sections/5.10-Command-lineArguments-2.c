/*
 ============================================================================
 Name        : 5.10-Command-lineArguments-2.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 25/07/2014
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Command-line Arguments
 ============================================================================
 */

#include <stdio.h>
#include <string.h>
#define MAXLINE 1000

int getline_x(char *line, int max);

/* find: print lines that match pattern from 1st arg */
int main(int argc, char *argv[])
{
	char line[MAXLINE];
	int found = 0;

	if(argc != 2)
		printf("Usage: find pattern\n");
	else
		while(getline_x(line, MAXLINE) > 0)
			if(strstr(line, argv[1]) != NULL)
			{
				printf("%s", line);
				found++;
			}
	return found;
}

int getline_x(char *line, int max)
{
	int c, i;
	for(i = 0; i < max && (c = getchar()) != EOF; i++)
		line[i] = c;
	line[i < max ? i : max-1] = '\0';
	return (i == 0) ? 0 : 1;
}
