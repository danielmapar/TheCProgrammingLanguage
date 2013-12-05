/*
 ============================================================================
 Name        : 1.7-Exercise.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 02/12/2013
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Write a program to print the value of EOF.
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
	/* Show EOF value as decimal, hexadecimal, octal and char */
	printf("decimal\thexadecimal\toctal\t\tchar\n");
	printf("%d\t%x\t%o\t%c\n", EOF,EOF,EOF,EOF);
}
