/*
 ============================================================================
 Name        : ASCIITable.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 02/11/2013
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Generates ASCII table
 ============================================================================
 */

#include <stdio.h>
#define LIMIT 255

int main(void)
{

	int counter = 0;

	printf("decimal\thexadecimal\toctal\tchar\n");

	do
		printf("%d\t%x\t\t%o\t%c\n", counter,counter,counter,counter);
	while(counter++ < LIMIT);

	return 0;
}
