/*
 ============================================================================
 Name        : 5.4-AddressArithmetic.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 14/07/2014
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : alloc function
 ============================================================================
 */

#include <stdio.h>

#define ALLOCSIZE 1000 /* size of available space */

int strlen2(char *s);
char *alloc(int n);
void afree(char *p);

static char allocbuf[ALLOCSIZE]; /* storage for alloc */
static char *allocp = allocbuf; /* next free position */
// static char *allocp = &allocbug[0]

int main(void)
{
	char *p;
	p = alloc(10);
	*p = 'D';
	*(p+1) = 'a';
	*(p+2) = 'n';
	*(p+3) = 'i';
	*(p+4) = 'e';
	*(p+5) = 'l';
	*(p+6) = '\0';
	int i;
	for(i = 0; *(p+i) != '\0'; i++)
		printf("%c", *(p+i));
	printf("\n");
	int size = strlen2(p);
	printf("Size of string -> %d\n", size);

	return 0;
}

char *alloc(int n) /* return pointer to n characters */
{
	if(allocbuf + ALLOCSIZE - allocp >= n) { /* it fits */
		allocp += n;
		return allocp - n; /* old p */
	}else /* not enough room */
		return 0;
}

void afree(char *p)
{
	if(p >= allocbuf && p < allocbuf + ALLOCSIZE)
		allocp = p;
}

/* strlen2: return lenght of string s */
int strlen2(char *s)
{
	char *p = s;

	while(*p != '\0')
		p++;
	return p - s;
}
