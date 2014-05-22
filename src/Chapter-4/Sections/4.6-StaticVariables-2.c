/*
 ============================================================================
 Name        : 4.6-StaticVariables-2.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 22/05/2014
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Static variable example
 ============================================================================
 */

int fun_val = 2;

static int justhere(int local);

int fun(void)
{
	static int local = 1; // declared once, used staticly in every call of the function

	justhere(local);
	++local;
	return fun_val+local;
}

static int justhere(int local)
{
	return 3;
}
