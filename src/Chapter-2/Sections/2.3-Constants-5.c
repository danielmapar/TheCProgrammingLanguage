/*
 ============================================================================
 Name        : 2.3-Constants-5.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 18/12/2013
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Program that uses enumeration constants
 ============================================================================
 */

int main(void)
{
	enum escapes { BELL = '\a', BACKSPACE = '\b', TAB = '\t',
				   NEWLINE = '\n', VTAB = '\v', RETURN = '\r' };
	enum months { JAN = 1, FEB, MAR, APR, MAY, JUN,
		          JUL, AUG, SEP, OCT, NOV, DEC };
				   /* FEB = 2, MAR = 3, etc.. */

	/*
	 * Names in different enumerations must be distinct.
	 * Values need not be distinct in the same enumeration.
	 */
	enum months_2 { JAN0, JAN1 = 0, FEB0, MAR0, APR0, MAY0, JUN0,
			        JUL0, AUG0, SEP0, OCT0, NOV0, DEC0 };
				  /* JAN0 = 0, JAN1 = 0, FEB0 = 1, MAR0 = 2 */
	return 0;
}
