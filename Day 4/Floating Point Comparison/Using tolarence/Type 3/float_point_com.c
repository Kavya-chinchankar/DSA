#include <stdio.h>
#include <math.h>

int compareFloat(float a, float b, float tolerance) {
    float diff = a - b;

    if (fabs(diff) < tolerance) {
        return 0;  // Numbers are equal within the specified tolerance
    } else if (diff < 0) {
        return -1; // num1 is less than num2
    } else {
        return 1;  // num2 is less than num1
    }
}

int main() {
    float num1 = 12345678;
    float num2 = 12345679;
    float tolerance = 0.000001;

    int result = compareFloat(num1, num2, tolerance);

    if (result == 0) {
        printf("The numbers are equal in the specified tolerance.\n");
    } else if (result < 0) {
        printf("num1 is less than num2.\n");
    } else {
        printf("num2 is less than num1.\n");
    }

    return 0;
}
