#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Function to check if the input is a valid integer
int isInteger(const char *input) {
    if (input == NULL || *input == '\0' || isspace((unsigned char)*input))
        return 0;

    char *end;
    strtol(input, &end, 10);

    return (*end == '\0');
}

// Function to get a valid integer input from the user
int getValidInteger() {
    char buffer[100];
    int isValid = 0;
    int number;

    do {
        printf("Enter an integer: ");
        fgets(buffer, sizeof(buffer), stdin);

        size_t len = strlen(buffer);
        if (len > 0 && buffer[len - 1] == '\n') {
            buffer[len - 1] = '\0';
        }

        if (isInteger(buffer)) {
            number = atoi(buffer);
            isValid = 1;
        } else {
            printf("Invalid input. Please enter a valid integer.\n");
        }
    } while (!isValid);

    return number;
}

int main() {
    int userInput;

    userInput = getValidInteger();

    printf("You entered: %d\n", userInput);

    return 0;
}

