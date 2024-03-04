#include <stdio.h>
#include <math.h>

int compareFloats(double a, double b, double epsilon) {
    return fabs(a - b) < epsilon;
}

int main() {
    double num1, num2, tolerance;


    printf("Enter the first floating-point number: ");
    scanf("%lf", &num1);

    printf("Enter the second floating-point number: ");
    scanf("%lf", &num2);

    printf("Enter the tolerance for comparison: ");
    scanf("%lf", &tolerance);

    if (compareFloats(num1, num2, tolerance)) {
        printf("The numbers are approximately equal.\n");
    } else {
        printf("The numbers are not equal.\n");
    }

    return 0;
}
