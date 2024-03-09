
#include <stdio.h>

// Function to clear the input buffer
void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// Function to get a valid integer input from the user
int getValidInteger() {
    int number;
    int isValidInput;

    do {
        printf("Enter an integer: ");

        isValidInput = scanf("%d", &number);

        clearInputBuffer();

        if (!isValidInput) {
            printf("Invalid input. Please enter a valid integer.\n");
        }

    } while (!isValidInput);

    return number;
}

int main() {
    int userInput;

    userInput = getValidInteger();

    printf("You entered: %d\n", userInput);

    return 0;
}
