/*
 ============================================================================
 Name        : 5.10-Command-lineArguments-3.c
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
	long lineno = 0;
	int c, except = 0, number = 0, found = 0;

	while(--argc > 0 && (*++argv)[0] == '-')
		switch ((*argv)[1])
		{
		case 'x':
			except = 1;
			break;
		case 'n':
			number = 1;
			break;
		default:
			printf("find: illegal option %c\n", c);
			argc = 0;
			found = -1;
			break;
		}
	if(argc != 1)
		printf("Usage: find -x -n pattern\n");
	else
		while(getline_x(line, MAXLINE) > 0)
		{
			lineno++;
			// In evaluating a[i], C converts it to *(a+i) immediately -- argv[3]
			if((strstr(line, *argv) != NULL) != except)
			{
				if(number)
					printf("%ld: ", lineno);
				printf("%s\n", line);
				found++;
			}
		}
	return found;
}

int getline_x(char *line, int max)
{
	int c, i;
	for(i = 0; i < max && (c = getchar()) != '\n'; i++)
		line[i] = c;
	line[i < max ? i : max-1] = '\0';
	return (i == 0) ? 0 : 1;
}

