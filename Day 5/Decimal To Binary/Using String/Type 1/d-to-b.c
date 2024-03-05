//STRING

#include <stdio.h>
#include <string.h>

void decimalToBinary(int decimalNumber) {
    char binaryNumber[32];
    int i = 0;

    do {
        binaryNumber[i++] = (decimalNumber % 2) + '0';
        decimalNumber = decimalNumber / 2;
    } while (decimalNumber > 0);

    printf("Binary Representation: ");

    if (i == 0) {
        printf("0");
    } else {
        for (int j = i - 1; j >= 0; j--) {
            printf("%c", binaryNumber[j]);
        }
    }

    printf("\n");
}

int main() {
    int decimalNumber;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    decimalToBinary(decimalNumber);

    return 0;
}
