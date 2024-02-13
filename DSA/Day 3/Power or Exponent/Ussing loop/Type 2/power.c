#include<stdio.h>

double calculatePower(double base, int exponent) {
    double result = 1.0;

    for (int i = 0; i < exponent; i++) {
        result *= base;
    }

    return result;
}

int main() {
    double base, result;
    int exponent;

    printf("Enter the base: ");
    scanf("%lf", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    result = calculatePower(base, exponent);
    printf("%.2lf raised to the power of %d is: %.2lf\n", base, exponent, result);

    return 0;
}
