// USING BASE AND REMINDER
#include <stdio.h>

int binaryToDecimal(long long binaryNumber) {
    int decimalNumber = 0, remainder, base = 1;

     // Loop until the binary number becomes 0
    while (binaryNumber > 0) {
        // Get the last digit (remainder) of the binary number
        remainder = binaryNumber % 10;

        // Multiply the remainder by the current base and add to the decimal number
        decimalNumber += remainder * base;

        // Update the binary number by removing the last digit
        binaryNumber /= 10;

        // Update the base for the next iteration (powers of 2)
        base *= 2;
    }
    return decimalNumber;
}

int main() {
    long long binaryNumber;

    printf("Enter the Binary Number: ");
    scanf("%lld",&binaryNumber);

    int decimalNumber = binaryToDecimal(binaryNumber);

    if (decimalNumber != -1) {
        printf("Decimal equivalent: %d\n", decimalNumber);
    } else {
        printf("Invalid Input\n");
    }

    return 0;
}
