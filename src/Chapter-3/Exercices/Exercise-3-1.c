/*
 ============================================================================
 Name        : Exercise-3-1.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 07/05/2014
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Our binary search makes two tests inside the loop, when one
 	 	 	   would suffice (at the price of more tests outside.) Write a
 	 	 	   version with only one test inside the loop and measure the
 	 	 	   difference in run-time.
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
	mid = (low+high) / 2;
	while(low <= high && x != v[mid])
	{
		if(x < v[mid])
			high = mid - 1;
		else
			low = mid + 1;

		mid = (low+high) / 2;
	}
	return (x == v[mid]) ? mid : -1;
}
