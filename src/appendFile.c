#include <stdio.h>
#include <string.h>

void appendFile(const char *filename) {
    FILE *fp = fopen(filename, "a");
    if (fp == NULL) {
        perror("Error opening file for appending");
        return;
    }
    char data[500];
    printf("Enter text to append into the file: ");
    fgets(data, sizeof(data), stdin);
    fprintf(fp, "%s", data);
    printf("Data appended successfully.\n");
    fclose(fp);
}

