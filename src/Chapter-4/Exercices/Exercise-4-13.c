/*
 ============================================================================
 Name        : Exercise-4-13.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 09/07/2014
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Write a recursive version of the function reverse(s), which
               reverses the string s in place.
 ============================================================================
 */

#include <stdio.h>
#include <string.h>

void reverse(char s[], int i, int j);
void swap(char v[], int i, int j);

int main(void)
{
	char s[] = "Daniel";
	reverse(s, 0, strlen(s)-1);
	printf("---> %s\n", s);
	return 0;
}

void reverse(char s[], int i, int j)
{
	if(i < j)
	{
		swap(s, i, j);
		reverse(s, ++i, --j);
	}
}

/* swap:  interchange v[i] and v[j] */
void swap(char v[], int i, int j)
{
	char temp;
	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}
