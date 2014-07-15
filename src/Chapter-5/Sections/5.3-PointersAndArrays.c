/*
 ============================================================================
 Name        : 5.3-PointersAndArrays.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 10/07/2014
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Pointers and arrays
 ============================================================================
 */

#include <stdio.h>
#include <string.h>

int strlen2(char *s);
int strlen3(char s[]);

int main(void)
{
	char vet[] = "Daniel";
	int i;
	char *p;
	p = &vet[0];
	//p = &vet[0];

	printf("pointer it self -> %x\n", (p+1)); /* gets the actual variable address in memory*/
	printf("pointer it self -> %d\n", (p+2));
	printf("from array --> %c\n", *vet);

	for(i = 0; i < strlen3(vet); i++, p++)
		printf("%c", *p);
	printf("\n");

	//printf("%c", vet[-1]);

	return 0;
}

/* strlen2: return lenght of string s */
int strlen2(char *s)
{
	int n;

	for(n = 0; *s != '\0'; s++)
		n++;
	return n;
}

/* strlen3: return lenght of string s */
int strlen3(char s[])
{
	int n;

	for(n = 0; *s != '\0'; s++)
		n++;
	return n;
}
