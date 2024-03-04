#include <stdio.h>
#include <string.h>

void calculateCharacterFrequency(const char *str) {
    int frequency[256] = {0}; // Assuming ASCII characters

    // Counting character frequency
    for (int i = 0; i < strlen(str); i++) {
        frequency[(int)str[i]]++;
    }

    // Displaying character frequency
    printf("Character Frequency:\n");
    for (int i = 0; i < 256; i++) {
        if (frequency[i] > 0) {
            printf("%c: %d\n", (char)i, frequency[i]);
        }
    }
}

int main() {
    char inputString[100];

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Remove newline character from the input
    inputString[strcspn(inputString, "\n")] = '\0';

    calculateCharacterFrequency(inputString);

    return 0;
}
