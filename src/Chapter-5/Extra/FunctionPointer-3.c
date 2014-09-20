/*
 ============================================================================
 Name        : FunctionPointer-2.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 25/07/2014
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : 
 ============================================================================
 */
#include <stdio.h>

// function prototype
void subtractAndPrint(int x, int y);

// function implementation
void subtractAndPrint(int x, int y) {
  int z = x - y;
  printf("Simon says, the answer is: %d\n", z);
}

// calling from main
int main() {
  void (*sapPtr)(int, int) = subtractAndPrint;
  (*sapPtr)(10, 2);
  sapPtr(10, 2);
}
