/*
 ============================================================================
 Name        : 3.1-StatementsAndBlocks.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 03/05/2014
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Semicolon determines a statement
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
	int teste = 1;
	char x = 1;

	teste = ++x;

	printf("%d", teste);
	return 0;
}
