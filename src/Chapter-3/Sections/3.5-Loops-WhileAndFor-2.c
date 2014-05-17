/*
 ============================================================================
 Name        : 3.5-Loops-WhileAndFor-2.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 07/05/2014
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Shell sort
 ============================================================================
 */

#include <stdio.h>

void shellsort(int v[], int n);
void printintarray(int v[], int n);

int main(void)
{
	int v[] = { 5, 1, 0, 9, 8, 2, 7, 2, 4, 2, 5, 1, 0, 9, 8, 2, 7, 2, 4, 2 };
	shellsort(v, 20);
}

/* shellsort: sort v[0]...v[n-1] into increasing order */
void shellsort(int v[], int n)
{
	int gap, i, j, temp;
	printintarray(v, n);
	for(gap = n/2; gap > 0; gap /= 2)
		for(i = gap; i < n; i++)
			for(j=i-gap; j >= 0 && v[j] > v[j+gap]; j-= gap)
			{
				temp = v[j];
				v[j] = v[j+gap];
				v[j+gap] = temp;
				printintarray(v, n);
			}
}

void printintarray(int v[], int n)
{
	int i;
	for(i = 0; i < n; i++)
		printf("%d ", v[i]);
	printf("%c",'\n');
}
