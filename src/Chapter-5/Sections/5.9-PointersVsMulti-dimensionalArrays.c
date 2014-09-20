/*
 ============================================================================
 Name        : 5.9-PointersVsMulti-dimensionalArrays.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 25/07/2014
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : 
 ============================================================================
 */

// Pointer to unlimited lenght strings
char *name[] = { "Illegal month", "Jan", "Feb", "Mar" };
// This way we have strings with maximum 15 lenght
char aname[][15] = { "Illegal month", "Jan", "Feb", "Mar" };


/* month_name: return name of n-th month */
