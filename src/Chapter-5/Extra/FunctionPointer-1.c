/*
 ============================================================================
 Name        : FunctionPointer-1.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 25/07/2014
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description :
 ============================================================================
 */

#include <stdio.h>
// int (*pointer)[13];
// function prototype
int subtract(int x, int y);

// function implementation
int subtract(int x, int y) {
  return x - y;
}

// calling from main
int main() {
  int (*subtractPtr)(int, int) = subtract;

  int y = (*subtractPtr)(10, 2);
  printf("Subtract gives: %d\n", y);

  int z = subtractPtr(10, 2);
  printf("Subtract gives: %d\n", z);
}
