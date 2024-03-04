#include <stdio.h>

int compareFloats(double a, double b) {
    return a == b;
}

int main() {
    double num1, num2;

    printf("Enter the first floating-point number: ");
    scanf("%lf", &num1);

    printf("Enter the second floating-point number: ");
    scanf("%lf", &num2);


    if (compareFloats(num1, num2)) {
        printf("The numbers are equal.\n");
    } else {
        printf("The numbers are not equal.\n");
    }

    return 0;
}
