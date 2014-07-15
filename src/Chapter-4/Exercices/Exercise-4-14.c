/*
 ============================================================================
 Name        : Exercise-4-14.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 09/07/2014
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Define a macro swap(t,x,y) that interchanges two arguments of
               type t. (Block structure will help.)
 ============================================================================
 */

#include <stdio.h>

#define swap(t, x, y) { if(sizeof(x) == sizeof(int) && sizeof(y) == sizeof(int)) \
						{ \
							t tmp; \
							tmp = x; \
							x = y; \
							y = tmp; \
						} \
	                   }

int main(void)
{
	int x = 0, y = 1;
	printf("before --> x - %d, y - %d\n", x, y);
	swap(int, x, y);
	printf("after --> x - %d, y - %d\n", x, y);
	return 0;
}
