
#include <stdio.h>

// Recursive function to calculate odd parity
int calculateOddParityRecursive(int data, int bitIndex) {
    if (bitIndex < 0) {
        return 0;
    }

    int currentBit = (data >> bitIndex) & 1;
    return currentBit ^ calculateOddParityRecursive(data, bitIndex - 1);
}

// Function to set odd parity bit
int setOddParity(int data) {
    int oddParity = calculateOddParityRecursive(data, 7);

    // Toggle the parity bit for odd parity
    return (data & 0x7F) | ((oddParity ^ 1) << 7);
}

// Function to check if the parity is correct
int checkOddParity(int data) {
    int oddParity = calculateOddParityRecursive(data, 7);
    return oddParity == 0;
}

int main() {
    int inputData;
    printf("Enter an 8-bit data: ");
    scanf("%d", &inputData);

    // Set odd parity bit
    int dataWithOddParity = setOddParity(inputData);
    printf("Data with odd parity bit: %d\n", dataWithOddParity);
    printf("Parity check: %s\n", checkOddParity(dataWithOddParity) ? "Passed" : "Failed");

    return 0;
}
