// USING BITWISE
#include <stdio.h>

int binaryToDecimal(long long binaryNumber) {
    int decimalNumber = 0, bitPosition = 0;


      for (bitPosition = 0; binaryNumber > 0; ++bitPosition) {
        int bit = binaryNumber % 10;

        decimalNumber += (bit << bitPosition);

        binaryNumber /= 10;
    }

//    while (binaryNumber > 0) {
//        int bit = binaryNumber % 10;
//
//        decimalNumber += (bit << bitPosition);
//
//        binaryNumber /= 10;
//        bitPosition++;
//    }



    return decimalNumber;
}

int main() {
    long long binaryNumber;

    printf("Enter the Binary Number: ");
    scanf("%lld", &binaryNumber);

    int decimalNumber = binaryToDecimal(binaryNumber);

    printf("Decimal equivalent: %d\n", decimalNumber);

    return 0;
}
