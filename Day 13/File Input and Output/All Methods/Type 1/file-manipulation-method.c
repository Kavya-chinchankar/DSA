
#include <stdio.h>

int main() {
    // Method 1: Using FILE pointers
    FILE *filePointer;

    // Method 2: Opening a file for writing (creates a new file or overwrites existing)
    filePointer = fopen("example.txt", "w");

    if (filePointer == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    // Method 3: Writing to a file using fprintf
    fprintf(filePointer, "Hello, File I/O in C!\n");
    fprintf(filePointer, "This is another line.\n");

    // Method 4: Closing the file
    fclose(filePointer);

    // Method 5: Opening a file for reading
    filePointer = fopen("example.txt", "r");

    if (filePointer == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    // Method 6: Reading from a file using fscanf
    char buffer[100];
    fscanf(filePointer, "%[^\n]", buffer);
    printf("Read from file: %s\n", buffer);

    // Method 7: Closing the file
    fclose(filePointer);

    // Method 8: Opening a file for appending (does not overwrite existing content)
    filePointer = fopen("example.txt", "a");

    if (filePointer == NULL) {
        printf("Error opening file for appending!\n");
        return 1;
    }

    // Method 9: Appending to a file using fprintf
    fprintf(filePointer, "Appending more text!\n");

    // Method 10: Closing the file
    fclose(filePointer);

    // Method 11: Opening a file for reading line by line
    filePointer = fopen("example.txt", "r");

    if (filePointer == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    // Method 12: Reading line by line using fgets
    printf("Contents of the file:\n");
    while (fgets(buffer, sizeof(buffer), filePointer) != NULL) {
        printf("%s", buffer);
    }

    // Method 13: Closing the file
    fclose(filePointer);

    return 0;
}
