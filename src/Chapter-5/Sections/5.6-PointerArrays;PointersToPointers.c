/*
 ============================================================================
 Name        : 5.6-PointerArrays;PointersToPointers.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 14/07/2014
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Line sorting
 ============================================================================
 */

#include <stdio.h>
#include <string.h>

#define MAXLINES 5000 /* max #lines to be sorted */
#define MAXLEN 1000 /* max length of any input line */

char *lineptr[MAXLINES]; /* pointers to text lines */
int getline2(char *, int);
char *alloc(int);
int readlines(char *lineptr[], int nlines);
void writelines(char *lineptr[], int nlines);
void strcpy2(char *s, char *t);
void qsort(char *lineptr[], int left, int right);

/* sort input lines */
int main()
{
	int nlines; /* number of input lines read */

	if((nlines = readlines(lineptr, MAXLINES)) >= 0)
	{
		qsort(lineptr, 0, nlines-1);
		writelines(lineptr, nlines);
		return 0;
	} else {
		printf("error: input too big to sort\n");
		return 1;
	}
}

/* readlines: read input lines */
int readlines(char *lineptr[], int maxlines)
{
	int len, nlines;
	char *p, line[MAXLEN];

	nlines = 0;
	while((len = getline2(line, MAXLEN)) > 0)
		if(nlines >= maxlines || (p = alloc(len)) == NULL)
			return -1;
		else {
			line[len-1] = '\0'; /* delete newline */
			strcpy2(p, line);
			lineptr[nlines++] = p;
		}
	return nlines;
}

/* writelines : write output lines */
void writelines(char *lineptr[], int nlines)
{
	int i;
	printf("\n\n\nOutput:\n");
	for(i = 0; i < nlines; i++)
		printf("%s\n", lineptr[i]);
}

/* getline2:  read a line into s, return length  */
int getline2(char *s,int lim)
{
	int c, i;
	for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
		s[i] = c;
    	if (c == '\n') {
    		s[i] = c;
    		++i;
    	}
    	s[i] = '\0';
    	return i;
}

#define ALLOCSIZE 100000 /* size of available space */
static char allocbuf[ALLOCSIZE]; /* storage for alloc */
static char *allocp = allocbuf; /* next free position */

char *alloc(int n) /* return pointer to n characters */
{
	if(allocbuf + ALLOCSIZE - allocp >= n) { /* it fits */
		allocp += n;
		return allocp - n; /* old p */
	}else /* not enough room */
		return 0;
}

/* strcpy:  copy t to s; pointer version 3 */
void strcpy2(char *s, char *t)
{
	while((*s++ = *t++) != '\0')
		;
}

/* qsort: sort v[left]...v[right] into increasing order */
void qsort(char *v[], int left, int right)
{
	int i, last;
	void swap(char *v[], int i, int j);

	if (left >= right) /* do nothing if array contains */
		return; /* fewer than two elements */
    	swap(v, left, (left + right)/2);
    	last = left;
    	for (i = left+1; i <= right; i++)
    		if (strcmp(v[i], v[left]) < 0)
    			swap(v, ++last, i);
    swap(v, left, last);
    qsort(v, left, last-1);
    qsort(v, last+1, right);
}

/* swap:  interchange v[i] and v[j] */
void swap(char *v[], int i, int j)
{
	char *temp;
    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}
