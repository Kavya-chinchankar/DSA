// USING STRING
#include <stdio.h>
#include <string.h>

int binaryToDecimal(const char *binaryStr) {
    int decimalResult = 0;
    int binaryLength = strlen(binaryStr);

    for (int i = 0; i < binaryLength; i++) {
        if (binaryStr[i] == '1') {
            decimalResult += 1 << (binaryLength - 1 - i);
        } else if (binaryStr[i] != '0') {
            printf("Invalid character: %c\n", binaryStr[i]);
            return -1;
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
