// USING BASE
//USING POINTER

#include <stdio.h>
#include <string.h>

int binaryToDecimal(const char *binaryNumber) {
    int decimalNumber = 0;
    int length = strlen(binaryNumber);

    for (int i = length - 1, base = 1; i >= 0; i--, base *= 2) {
        // Update the decimal value by adding the current bit multiplied by the base
        decimalNumber += (binaryNumber[i] - '0') * base;
    }

    return decimalNumber;
}

int main() {
    char binaryNumber[64]; // Assuming a maximum length of 63 bits

    // Input binary number from the user
    printf("Enter a binary number: ");
    scanf("%s", binaryNumber);

    // Call the function to convert binary to decimal
    int decimalNumber = binaryToDecimal(binaryNumber);

    // Display the result
    printf("Decimal equivalent: %d\n", decimalNumber);

    return 0;
}
