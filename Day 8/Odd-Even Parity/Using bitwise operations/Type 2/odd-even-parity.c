
#include <stdio.h>

// Function to count the number of set bits (1s) in a binary number
int countSetBits(int num) {
    int count = 0;

    while (num) {
        count += num & 1;
        num >>= 1;
    }

    return count;
}

// Function to set odd parity
int setOddParity(int data) {
    int numSetBits = countSetBits(data);

    // If the number of set bits is even, set the parity bit to 1
    if (numSetBits % 2 == 0) {
        return data | (1 << 7);
    }

    return data;
}

// Function to check if the parity is correct
int checkParity(int data) {
    return countSetBits(data) % 2 == 0; // Even parity check
}

int main() {
    int inputData;
    printf("Enter an 8-bit data: ");
    scanf("%d", &inputData);

    // Set odd parity bit
    int dataWithParity = setOddParity(inputData);

    printf("Data with odd parity bit: %d\n", dataWithParity);

    // Check parity
    if (checkParity(dataWithParity)) {
        printf("Parity check passed. Data is correct.\n");
    } else {
        printf("Parity check failed. Data is corrupted.\n");
    }

    return 0;
}
