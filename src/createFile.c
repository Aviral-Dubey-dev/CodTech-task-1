#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void createFile(const char *filename) {
    FILE *fp = fopen(filename, "w");
    if (fp == NULL) {
        perror("Error creating file");
        exit(EXIT_FAILURE);
    }
    printf("File '%s' created successfully !!\n", filename);
    fclose(fp);
}
