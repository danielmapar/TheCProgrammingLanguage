/*
 ============================================================================
 Name        : 5.5-CharacterPointersAndFunctions.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 14/07/2014
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : strcpy with pointers
 ============================================================================
 */

#include <stdio.h>

void strcpy3(char *s, char *t);
void strcpy2(char *s, char *t);
void strcpy4(char *s, char *t);
void strcpy5(char *s, char *t);
int strcmp1(char *s, char *t);
int strcmp2(char *s, char *t);

int main(void)
{

}

/* strcpy3:  copy t to s; array subscript version */
void strcpy3(char *s, char *t)
{
	int i;

	i = 0;
	while((s[i] = t[i]) != '\0')
		i++;
}

/* strcpy2:  copy t to s; pointer version */
void strcpy2(char *s, char *t)
{
	int i;
    i = 0;
    while ((*s = *t) != '\0') {
    		s++;
    		t++;
    }
}

/* strcpy4: copy t to s; pointer version 2 */
void strcpy4(char *s, char *t)
{
	while((*s++ = *t++) != '\0')
		;
}

/* strcpy:  copy t to s; pointer version 3 */
void strcpy5(char *s, char *t)
{
       while (*s++ = *t++)
           ;
}

/* strcmp1: return <0 if s < t, 0 if s==t, >0 if s > t */
int strcmp1(char *s, char *t)
{
	int i;
	for(i = 0; s[i] == t[i]; i++)
	{
		if(s[i] == '\0')
			return 0;
		return s[i] - t[i];
	}
}

/* strcmp2: return <0 if s < t, 0 if s==t, >0 if s > t */
int strcmp2(char *s, char *t)
{
	for(; *s == *t; s++, t++)
		if(*s == '\0')
			return 0;
	return *s - *t;
}
