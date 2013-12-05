/*
 ============================================================================
 Name        : Backspace.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 04/12/2013
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Backspace escape sequence example
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
	/*
	  that is the word
                      ^ <= pointer to "print head", now it is the space
	*/
	printf("that is the word");

	/*
	  that is the word
                     ^ <= pointer to "print head", now it is 'd'
	*/
	printf("\b");

	/*
	  that is the word
                    ^ <= pointer to "print head", now it is 'r'
	*/
	printf("\b");

	/*
	  that is the wold

      ^ <= substitute 'r' by 'l' and pointer to "print head" on the next line
	*/
	printf("l\n");

	return 0;
}
