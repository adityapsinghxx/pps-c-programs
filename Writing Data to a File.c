#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("data.txt", "w");

    if(fp == NULL) {
        printf("File cannot be opened");
        return 0;
    }

    fprintf(fp, "Welcome to File Handling in C");

    fclose(fp);
    return 0;
}
