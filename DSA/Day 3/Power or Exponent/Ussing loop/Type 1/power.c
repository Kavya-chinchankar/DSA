#include<stdio.h>

long long calculatePower(int base, int exponent) {
    long long result = 1;

    for (int i = 0; i < exponent; i++) {
        result *= base;
    }

    return result;
}

int main() {
    int  base;
    int exponent;

    printf("Enter the base: ");
    scanf("%d", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    long long result = calculatePower(base, exponent);
    printf("%d raised to the power of %d is: %.lld\n", base, exponent, result);

    return 0;
}
