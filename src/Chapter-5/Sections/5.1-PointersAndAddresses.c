/*
 ============================================================================
 Name        : 5.1-PointersAndAddresses.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 10/07/2014
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Assign variable address to a pointer
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
	/* & -> get var address and * -> get var value */
	int x = 1, y = 2, z[10];
	int *ip, *ipp; /* ip is a pointer to int  */
	ip = &x; /* ip now points to x */
	y = *ip; /* y is now 1 */
	*ip = 0; /* x is now 0 */
	ip = &z[0]; /* ip now points to z[0] */
	printf("x = %d and y = %d\n", x, y);

	ipp = &x; // you must assign a pointer to a variable, otherwise it will not work
	*ipp = *ipp + 10;
	printf("*ipp  = %d\n", *ipp);

	int *ip_x;
	ip_x = ipp;
	printf("*ip_x = %d\n", *ip_x);

	//double *dp, atof(char *);

	return 0;
}
