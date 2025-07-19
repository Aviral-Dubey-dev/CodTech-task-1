#include <stdio.h>
#include <string.h>

void readFile(const char *filename) {
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        perror("Error reading file");
        return;
    }
    char ch;
    printf("\nFile Content:\n");
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
    printf("\n");
    fclose(fp);
}

