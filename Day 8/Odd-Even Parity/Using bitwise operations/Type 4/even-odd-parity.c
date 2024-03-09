
#include <stdio.h>

// Function to calculate parity using bitwise XOR
int calculateParity(int data) {
    int parity = 0;

    while (data) {
        parity ^= 1; // Toggle parity for each set bit
        data &= (data - 1); // Clear the least significant set bit
    }

    return parity;
}

// Function to set even parity bit
int setEvenParity(int data) {
    int evenParity = calculateParity(data);

    // Set the parity bit at the most significant bit (MSB)
    return (data & 0x7F) | (evenParity << 7);
}

// Function to set odd parity bit
int setOddParity(int data) {
    int oddParity = calculateParity(data);

    // Toggle the parity bit for odd parity
    return (data & 0x7F) | ((oddParity ^ 1) << 7);
}

// Function to check if the parity is correct
int checkParity(int data) {
    return calculateParity(data) == 0;
}

int main() {
    int inputData;
    printf("Enter an 8-bit data: ");
    scanf("%d", &inputData);

    // Set even parity bit
    int dataWithEvenParity = setEvenParity(inputData);
    printf("Data with even parity bit: %d\n", dataWithEvenParity);
    printf("Parity check: %s\n", checkParity(dataWithEvenParity) ? "Passed" : "Failed");

    // Set odd parity bit
    int dataWithOddParity = setOddParity(inputData);
    printf("Data with odd parity bit: %d\n", dataWithOddParity);
    printf("Parity check: %s\n", checkParity(dataWithOddParity) ? "Passed" : "Failed");

    return 0;
}
