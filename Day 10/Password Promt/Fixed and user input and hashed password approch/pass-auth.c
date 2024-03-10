#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

// Fixed password approach
#define FIXED_PASSWORD "secret123"

// Function to check if the entered password matches the fixed password
bool authenticateFixedPassword() {
    char input[50];
    printf("Enter the password: ");
    scanf("%s", input);

    return strcmp(input, FIXED_PASSWORD) == 0;
}

// Prompt user for password approach
bool authenticateUserInput() {
    char password[50];
    char input[50];

    printf("Set a password: ");
    scanf("%s", password);

    printf("Enter the password: ");
    scanf("%s", input);

    return strcmp(input, password) == 0;
}

// Hashed password approach (for demonstration purposes, uses a simple hash function)
int simpleHash(const char *str) {
    int hash = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        hash = hash * 31 + str[i];
    }
    return hash;
}

bool authenticateHashedPassword() {
    char password[50];
    char input[50];

    printf("Set a password: ");
    scanf("%s", password);

    printf("Enter the password: ");
    scanf("%s", input);

    int hashedPassword = simpleHash(password);
    int hashedInput = simpleHash(input);

    return hashedPassword == hashedInput;
}

int main() {
    int choice;
    bool authenticated = false;

    do {
        printf("Choose an authentication method:\n");
        printf("1. Fixed Password\n");
        printf("2. User Input\n");
        printf("3. Hashed Password\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                authenticated = authenticateFixedPassword();
                break;
            case 2:
                authenticated = authenticateUserInput();
                break;
            case 3:
                authenticated = authenticateHashedPassword();
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }

        if (choice != 0) {
            if (authenticated) {
                printf("Authentication successful!\n");
            } else {
                printf("Authentication failed. Try again.\n");
            }
        }
    } while (choice != 0);

    return 0;
}
