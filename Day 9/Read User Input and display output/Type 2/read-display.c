#include <stdio.h>

// Function to read user input using scanf
void readInputScanf() {
    int number;
    printf("Enter a number using scanf: ");
    scanf("%d", &number);
    printf("You entered: %d\n", number);
}

// Function to read user input using fgets and sscanf
void readInputFgetsSscanf() {
    char buffer[100];
    int number;

    printf("Enter a number using fgets and sscanf: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &number);

    printf("You entered: %d\n", number);
}

// Function to read user input using gets (deprecated, be cautious)
void readInputGets() {
    char buffer[100];

    printf("Enter a string using gets (deprecated, be cautious): ");
    gets(buffer);

    printf("You entered: %s\n", buffer);
}

// Function to read user input using fgets
void readInputFgets() {
    char buffer[100];

    printf("Enter a string using fgets: ");
    fgets(buffer, sizeof(buffer), stdin);

    printf("You entered: %s\n", buffer);
}

int main() {

    readInputScanf();

    readInputFgetsSscanf();

    readInputGets();

    readInputFgets();

    return 0;
}

