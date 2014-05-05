/*
 ============================================================================
 Name        : 1.5.4-WordCounting-1.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 04/12/2013
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Count lines, words, and characters in input
 ============================================================================
 */

#include <stdio.h>
#define IN  1 /* inside a word */
#define OUT 0 /* outside a word */

/* count lines, words, and characters in input */
int main(void)
{
	int c, nl, nw, nc, state;

	state = OUT;
	nl = nw = nc = 0;
	while((c = getchar()) != EOF)
	{
		++nc;
		if(c == '\n')
			++nl;
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if(state == OUT)
		{
			state = IN;
			++nw;
		}
	}

	printf("%d %d %d\n", nl, nw, nc);

	return 0;
}
