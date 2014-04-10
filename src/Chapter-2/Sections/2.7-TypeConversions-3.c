/*
 ============================================================================
 Name        : 2.7-TypeConversions-3.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 25/12/2013
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Expression conversion program
 ============================================================================
 */

#include <stdio.h>

/* the prototype declaration makes possible an automatic coercion, without no need to cast*/
/* If the prototype declaration is removed, there is a need to cast types during function call */
void test(double);
void test2(long int li);

int main(void)
{
	float varf = 123423.0;
	double vard = 234234234.0;
	int vari = 2;
	char varc = 1;
	short i = 1;

	printf("%lu\n",sizeof(varf));
	test(varf);
	test((double) (varf + vari + varc));
	/* shot and char to int, and float to double */
	printf("%lu\n",sizeof(varf));
	test(vari + varc);
	printf("%lu\n",sizeof(varf));
	test2(vard);
	printf("%Lf", 1.0F + 2.0L);

	return 0;
}

void test(double d){
	printf("Test: %f\n", d);
}

void test2(long int li){
	printf("Test2: %ld\n", li);
}
