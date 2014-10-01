#include <stdio.h>
#include <string.h>
#define MAX 1000

int getline_x(char line[], int max);
void clear_arr(char line[]);

int main(int argc, char **argv){
    char line[MAX];
    int found = 0;

    if(argc != 2)
        printf("Usage: find pattern\n");
    else {
        while(getline_x(line,MAX) > 0){
            clear_arr(line);
            if(strstr(line, *(argv+1)) != NULL){
                printf("%s", line);
                found++;
            }
        }
    }
    return found;
}

int getline_x(char line[], int max){
    int i = 0, c = 0;
    for(i = 0; i < max && (c = getchar()) != EOF; i++)
        line[i] = c;
    line[i] = '\0';
    return strlen(line);
}

void clear_arr(char line[]){
    int i = 0;
    for(i = 0; line[i] != '\0'; i++)
        line[i] = ' ';
    line[i] = ' ';
}
