#include <stdio.h>

int main(int argc, char **argv){
    int i = 0;
    for(i = 0; i < argc; i++){
        printf("%c\n", **argv);
        argv++;
    }
    return 0;
}
