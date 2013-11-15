/*
 ============================================================================
 Name        : 1.5-CharacterInputAndOutput-1.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 13/11/2013
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : getchar() and putchar() example
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
	int character;

	character = getchar(); /* get first character typed on the terminal */
	putchar(character); /* prints the first character typed on the terminal */

	getchar(); /* get the escape sequence \n*/
	getchar(); /* wait input to finish the program*/

	return 0;
}
