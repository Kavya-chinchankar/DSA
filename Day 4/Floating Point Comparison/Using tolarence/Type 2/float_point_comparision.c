#include <stdio.h>
#include <math.h>

#define EPSILON 1e-9

int compareFloats(double a, double b, double epsilon) {
    return fabs(a - b) < epsilon;
}

int main() {
    double num1, num2;

    printf("Enter the first floating-point number: ");
    scanf("%lf", &num1);

    printf("Enter the second floating-point number: ");
    scanf("%lf", &num2);

    if (compareFloats(num1, num2, EPSILON)) {
        printf("The numbers are approximately equal.\n");
    } else {
        printf("The numbers are not equal.\n");
    }

    return 0;
}

