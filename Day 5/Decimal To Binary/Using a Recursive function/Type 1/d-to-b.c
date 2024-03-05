//RECURSION

#include <stdio.h>

void decimalToBinary(int decimalNumber) {
    if (decimalNumber > 0) {
        decimalToBinary(decimalNumber / 2);
        printf("%d", decimalNumber % 2);
    }
}

int main() {
    int decimalNumber;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    if (decimalNumber == 0) {

        printf("Binary representation: 0\n");

    } else {

        printf("Binary representation: ");
        decimalToBinary(decimalNumber);

        printf("\n");
    }

    return 0;
}
