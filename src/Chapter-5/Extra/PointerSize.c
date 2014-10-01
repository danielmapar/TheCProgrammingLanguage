#include <stdio.h>

int main(void){

    int size_char = sizeof(char *);
    int size_int = sizeof(int *);
    int size_float = sizeof(float *);
    int size_double = sizeof(double *);
    int size_unsigned_int = sizeof(unsigned int);
    printf("char*: %d\nint *: %d\nfloat *: %d\ndouble *: %d\nunsigned int: %d\n",
            size_char, size_int, size_float, size_double, size_unsigned_int);

    return 0;
}
