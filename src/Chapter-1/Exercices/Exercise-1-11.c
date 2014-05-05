/*
 ============================================================================
 Name        : Exercise-1-11.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 04/12/2013
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : How would you test the word count program? What kinds of
 	 	 	   input are most likely to uncover bugs if there are any?
 ============================================================================
 */

/*
 * How would you test the word count program?
 *
 * I would:
 * 1) type my first name;
 * 2) press ENTER;
 * 3) type my second name
 * 4) press TAB
 * 5) type my last name
 * 6) press the spacebar and type period
 *
 * What kinds of input are most likely to uncover bugs if there are any?
 *
 * If the user tries to use double quote, the program will actually consider
 * the double quote as part of the word.
 * Ex: "daniel marchena" --> This would be separated like: "daniel, followed by marchena"
 * Having said that, the escape sequence '\"' should be treated in the program.
 * */
