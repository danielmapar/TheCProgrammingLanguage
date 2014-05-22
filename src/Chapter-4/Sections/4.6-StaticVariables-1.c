/*
 ============================================================================
 Name        : 4.6-StaticVariables-1.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 22/05/2014
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Static variable example
 ============================================================================
 */

#include <stdio.h>

extern int fun_val;
//extern int local; // static declared, it will not work

//extern int justhere(void); // static declared, it will not work

extern int fun(void);

int main(void)
{
	printf("%d - %d - %d\n", fun(), fun(), fun_val);
	return 0;
}
