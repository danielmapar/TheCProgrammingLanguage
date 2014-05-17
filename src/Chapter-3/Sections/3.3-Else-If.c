/*
 ============================================================================
 Name        : 3.3-Else-If.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 06/05/2014
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Binary search example
 ============================================================================
 */

#include <stdio.h>

int binsearch(int x, int v[], int n);

int main(void)
{
	int v[] = { 0, 4, 8, 10, 123, 1233, 1234, 1235, 12333, 222222 };
	printf("Output: %d", binsearch(11, v, 10));
	return 0;
}
int binsearch(int x, int v[], int n)
{
	int low, high, mid;

	low = 0;
	high = n - 1;
	while(low <= high)
	{
		mid = (low+high)/2;
		if(x < v[mid])
			high = mid - 1;
		else if(x > v[mid])
			low = mid + 1;
		else
			return mid;
	}
	return -1;
}
