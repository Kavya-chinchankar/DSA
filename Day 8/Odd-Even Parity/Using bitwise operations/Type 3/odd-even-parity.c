
#include <stdio.h>

// Function to calculate odd parity using bitwise XOR
int calculateOddParity(int data) {
    int parity = 0;

    while (data) {
        parity ^= 1; // XOR with 1 for each set bit
        data &= (data - 1); // Clear the least significant set bit
    }

    return parity;
}

// Function to set odd parity bit
int setOddParity(int data) {
    int oddParity = calculateOddParity(data);

    // Set the parity bit at the most significant bit (MSB)
    return (data & 0x7F) | (oddParity << 7);
}

// Function to check if the odd parity is correct
int checkOddParity(int data) {
    return calculateOddParity(data) == 0;
}

int main() {
    int inputData;
    printf("Enter an 8-bit data: ");
    scanf("%d", &inputData);

    // Set odd parity bit
    int dataWithParity = setOddParity(inputData);

    printf("Data with odd parity bit: %d\n", dataWithParity);

    // Check parity
    if (checkOddParity(dataWithParity)) {
        printf("Parity check passed. Data is correct.\n");
    } else {
        printf("Parity check failed. Data is corrupted.\n");
    }

    return 0;
}

