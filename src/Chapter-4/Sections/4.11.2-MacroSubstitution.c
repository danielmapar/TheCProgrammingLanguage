/*
 ============================================================================
 Name        : 4.11.2-MacroSubstitution.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 09/07/2014
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : 
 ============================================================================
 */

#include <stdio.h>

#define max(A, B) (A) > (B) ? (A) : (B)
#define square(x) x * x /* WRONG */
#define test(x) x + x
#undef test // undef test to assure it is a real function, not a macro

#define dprint(expr) printf(#expr " = %d\n", expr) // #expr is the actual argument name
#define paste(front, back) front ## back // concatenation to the actual argument
#define swap(t, x, y) { t tmp; tmp = x; x = y; y = tmp; }

int test(int x);

int main(void)
{
	int a = 1, b = 0;
	int aux1 = 1, aux2 = 2;
    char paste(name, 1)[] = "daniel test";
	int x = max(++a, ++b); // ++a > ++b ? ++a : ++b -- double increment
	int l = square(2+1); // 2 + (1 * 2) + 1 -- precedence of evaluation
	int k = test(10);
	dprint(x/l); // printf("x/y" " = &d\n", x/y); --> printf("x/y = &d\n", x/y);
	printf("--> result-1: %d\n", x);
	printf("--> result-2: %d\n", l);
	printf("--> result-3: %d\n", k);
	printf("--> %s\n", paste(name, 1));

	//swap(int, aux1, aux2);
	int h = 1, u = 2;
	swap(int, h, u);
	printf("--> %d, %d", h, u);

	return 0;
}

int test(int x)
{
	return x+1;
}
