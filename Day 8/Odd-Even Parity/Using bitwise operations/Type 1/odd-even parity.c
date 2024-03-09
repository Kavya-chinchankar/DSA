
#include <stdio.h>

// Function to calculate parity using bitwise XOR
int calculateParity(int data) {
    int parity = 0;

    while (data) {
        parity ^= data & 1;
        data >>= 1;
    }

    return parity;
}

// Function to set the parity bit
int setParityBit(int data) {
    int parity = calculateParity(data);

    // Set the parity bit at the most significant bit (MSB)
    return (data & 0x7F) | (parity << 7);
}

// Function to check if the parity is correct
int checkParity(int data) {
    return calculateParity(data) == 0;
}

int main() {
    int inputData;
    printf("Enter an 8-bit data: ");
    scanf("%d", &inputData);

    // Set parity bit
    int dataWithParity = setParityBit(inputData);

    printf("Data with parity bit: %d\n", dataWithParity);

    // Check parity
    if (checkParity(dataWithParity)) {
        printf("Parity check passed. Data is correct.\n");
    } else {
        printf("Parity check failed. Data is corrupted.\n");
    }

    return 0;
}
