#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main() {
    char filename[100];
    int choice;
    printf("Enter the file name: ");
    scanf("%s", filename);
    getchar(); // Clear newline character

    while (1) {
        printf("\n--- FILE OPERATIONS ---\n");
        printf("1. Create File\n2. Write to File\n3. Append to File\n4. Read File\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1: createFile(filename); break;
            case 2: writeFile(filename); break;
            case 3: appendFile(filename); break;
            case 4: readFile(filename); break;
            case 5: exit(0);
            default: printf("Invalid choice!\n");
        }
    }
    return 0;
}
