/*
 ============================================================================
 Name        : 5.10-Command-lineArguments-1.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 25/07/2014
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Command-line Arguments
 ============================================================================
 */

#include <stdio.h>

/* echo command-line arguments; 1st version */
/* first value of argv is the function name it self */
int main(int argc, char *argv)
{
	int i;

	for(i = 1; i < argc; i++)
		printf("%s%s", argv[i], (i < argc-1) ? " " : "");
		//printf("%s%s", *++argv, (argc > 1) ? " " : "");
	printf("\n");
	return 0;
}
