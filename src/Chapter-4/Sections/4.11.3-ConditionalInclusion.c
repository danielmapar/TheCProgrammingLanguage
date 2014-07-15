/*
 ============================================================================
 Name        : 4.11.3-ConditionalInclusion.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 09/07/2014
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Conditional inclusion in pre-processing
 ============================================================================
 */

#include <stdio.h>

#if !defined(HDR)
	#if SYSTEM == SYSV
		#define HDR "apple.h"
	#elif SYSTEM == BSD
		#define HDR "bsd.h"
	#elif SYSTEM == MSDOS
		#define HDR "msdos.h"
	#else
		#define HDR "default.h"
	#endif
//#include HDR
#endif

#ifndef HDR // #ifndef (if not defined and if defined)
	#if SYSTEM == SYSV
		#define HDR "apple.h"
	#elif SYSTEM == BSD
		#define HDR "bsd.h"
	#elif SYSTEM == MSDOS
		#define HDR "msdos.h"
	#else
		#define HDR "default.h"
	#endif
//#include HDR
#endif


int main(void)
{

	return 0;
}
