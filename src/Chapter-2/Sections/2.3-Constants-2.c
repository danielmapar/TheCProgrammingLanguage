/*
 ============================================================================
 Name        : 2.3-Constants-2.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 18/12/2013
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Certain characters can be represented in character and string
               constants by escape sequences like \n (newline); these
               sequences look like two characters, but represent only one.
               In addition, an arbitrary byte-sized bit pattern can be specified
               by the example above.
 ============================================================================
 */

#include <stdio.h>
#define VTAB_O '\013'  /* ASCII vertical tab */
#define BELL_O '\007'  /* ASCII bell character */
#define VTAB_H '\xb'   /* ASCII vertical tab */
#define BELL_H '\x7'   /* ASCII bell character */

int main(void)
{
	printf("VTAB_O: %c, BELL_O: %c, VTAB_H: %c, BELL_H: %c",VTAB_O, BELL_O, VTAB_H, BELL_H);
	return 0;
}
