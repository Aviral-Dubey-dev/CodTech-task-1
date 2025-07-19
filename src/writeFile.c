#include <stdio.h>
#include <string.h>

void writeFile(const char *filename) {
    FILE *fp = fopen(filename, "w");
    if (fp == NULL) {
        perror("Error opening file for writing");
        return;
    }
    char data[500];
    printf("Enter text to write into the file: ");
    fgets(data, sizeof(data), stdin);
    fprintf(fp, "%s", data);
    printf("Data written successfully.\n");
    fclose(fp);
}
