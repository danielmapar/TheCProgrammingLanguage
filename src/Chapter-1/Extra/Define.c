/*
 ============================================================================
 Name        : Define.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 11/12/2013
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Program using some define power
 ============================================================================
 */

#include <stdio.h>

#define MAIN int main(void)
#define BRACKET_OPEN {
#define BRACKET_CLOSE }
#define RETURN return 0;
#define PRINT printf("Hello World!\n");

MAIN
BRACKET_OPEN
	PRINT
	RETURN
BRACKET_CLOSE

