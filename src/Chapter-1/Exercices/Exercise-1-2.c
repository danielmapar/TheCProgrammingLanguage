/*
 ============================================================================
 Name        : Exercise-1-2.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 02/11/2013
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Experiment to find out what happens when prints's argument
               string contains \c, where c is some character not listed
               above.
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
	printf("Hello, World\k");

	return 0;
}
