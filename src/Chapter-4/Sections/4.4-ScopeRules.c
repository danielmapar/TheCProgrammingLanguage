/*
 ============================================================================
 Name        : 4.4-ScopeRules.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 22/05/2014
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Scope rules for variables and functions
 ============================================================================
 */

#include <stdio.h>

int c = 0;
//int foo(void);

int main(void)
{
	c++;
	test++; // this won't work, because test is declared after main
	test = foo(); // this won't work, because foo does not have a prototype before main
	return 0;
}

int foo(void)
{
	return 1;
}

int test = 0;
