#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *inputFile, *outputFile;
    char filename[100];
    char ch;
    int wordCount = 0;

    // Prompt the user to enter the input file name
    printf("Enter the input file name: ");
    scanf("%s", filename);

    // Open the input file for reading
    inputFile = fopen(filename, "r");

    if (inputFile == NULL) {
        perror("Error opening input file");
        return 1;
    }

    // Read the input file character by character and count words
    while ((ch = fgetc(inputFile)) != EOF) {
        if (ch == ' ' || ch == '\n' || ch == '\t') {
            wordCount++;
        }
    }

    // Close the input file
    fclose(inputFile);

    // Prompt the user to enter the output file name
    printf("Enter the output file name: ");
    scanf("%s", filename);

    // Open the output file for writing
    outputFile = fopen(filename, "w");

    if (outputFile == NULL) {
        perror("Error opening output file");
        return 1;
    }

    // Write the word count to the output file
    fprintf(outputFile, "Word count: %d\n", wordCount);

    // Close the output file
    fclose(outputFile);

    printf("Word count has been written to the output file.\n");

    return 0;
}

