/*
 ============================================================================
 Name        : 4.5-HeaderFiles-2.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 22/05/2014
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Header files use example
 ============================================================================
 */

#include <stdio.h>
#include "4.5-HeaderFiles.h"

int main(void)
{
	printf("--> %d\n",test());
	return 0;
}

int fun(void)
{
	return 10;
}
