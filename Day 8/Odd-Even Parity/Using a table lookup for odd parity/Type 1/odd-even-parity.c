
#include <stdio.h>

// Function to generate a table of odd parity for 8-bit values
void generateOddParityTable(int oddParityTable[256]) {
    for (int i = 0; i < 256; ++i) {
        int parity = 0;
        for (int j = 0; j < 8; ++j) {
            parity ^= (i >> j) & 1;
        }
        oddParityTable[i] = parity;
    }
}

// Function to set odd parity bit using the lookup table
int setOddParity(int data, int oddParityTable[256]) {
    int oddParity = oddParityTable[data];

    // Toggle the parity bit for odd parity
    return (data & 0x7F) | ((oddParity ^ 1) << 7);
}

// Function to check if the parity is correct using the lookup table
int checkParity(int data, int oddParityTable[256]) {
    return oddParityTable[data] == 0;
}

int main() {
    int inputData;
    printf("Enter an 8-bit data: ");
    scanf("%d", &inputData);

    // Generate the odd parity lookup table
    int oddParityTable[256];
    generateOddParityTable(oddParityTable);

    // Set odd parity bit
    int dataWithOddParity = setOddParity(inputData, oddParityTable);
    printf("Data with odd parity bit: %d\n", dataWithOddParity);
    printf("Parity check: %s\n", checkParity(dataWithOddParity, oddParityTable) ? "Passed" : "Failed");

    return 0;
}
