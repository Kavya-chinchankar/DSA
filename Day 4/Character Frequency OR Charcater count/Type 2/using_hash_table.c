#include <stdio.h>
#include <string.h>

#define HASH_TABLE_SIZE 256

void calculateCharacterFrequency(const char *str) {
    int frequency[HASH_TABLE_SIZE] = {0}; // Assuming ASCII characters


    for (int i = 0; i < strlen(str); i++) {
        frequency[(int)str[i]]++;
    }


    printf("Character Frequency:\n");
    for (int i = 0; i < HASH_TABLE_SIZE; i++) {
        if (frequency[i] > 0) {
            printf("%c: %d\n", (char)i, frequency[i]);
        }
    }
}

int main() {
    char inputString[100];

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    inputString[strcspn(inputString, "\n")] = '\0';

    calculateCharacterFrequency(inputString);

    return 0;
}
