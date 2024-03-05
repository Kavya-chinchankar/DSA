// USING STRING
//ASCII VALUE
#include <stdio.h>
#include <string.h>

int binaryToDecimal(const char *binaryStr) {
    int decimalResult = 0;
    int binaryLength = strlen(binaryStr);


    for (int i = 0; i < binaryLength; i++) {
        // Convert character to integer
        int convert = binaryStr[i] - '0';

        // Update decimalNumber by adding the bit at the correct position
        decimalResult = decimalResult * 2 + convert;


        // Check if the character is '0' or '1'
        if (binaryStr[i] != '0' && binaryStr[i] != '1') {
            return -1; // Invalid input, return -1
        }
    }

    return decimalResult;
}

int main() {
    char binaryString[100];

    printf("Enter the Binary Number: ");
    scanf("%s", binaryString);

    int decimalResult = binaryToDecimal(binaryString);

    if (decimalResult != -1) {
        printf("Decimal equivalent: %d\n", decimalResult);
    } else {
        printf("Invalid Input\n");
    }

    return 0;
}

