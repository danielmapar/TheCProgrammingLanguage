/*
 ============================================================================
 Name        : 4.10-Recursion-2.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 08/07/2014
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Quicksort
 ============================================================================
 */

#include <stdio.h>

void qsort(int v[], int left, int right);
void swap(int v[], int i, int j);

int main(void)
{
	int i;
	int v[] = { 10, 20, 1, 40, 50 };
	// before qs
	printf("before --> ");
	for(i = 0; i < 5; i++)
		printf("%d ", v[i]);
	printf("\n");

	qsort(v, 0, 4);

	// after qs
	printf("after --> ");
	for(i = 0; i < 5; i++)
		printf("%d ", v[i]);
	printf("\n");
	return 0;
}

/* qsort: sort v[left]...v[right] into increasing order */
void qsort(int v[], int left, int right)
{
	int i, last;

	if(left >= right) /* do nothing if array contains */
		return;

	swap(v, left, (left + right) / 2); /* move partition elem */
	last = left;  /* to v[0] */
	for(i = left + 1; i <= right; i++) /* partition */
		if(v[i] < v[left])
			swap(v, ++last, i);
	swap(v, left, last);     /* restore partition elem  */
	qsort(v, left, last-1);
	qsort(v, last+1, right);
}

/* swap:  interchange v[i] and v[j] */
void swap(int v[], int i, int j)
{
	int temp;
	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}
