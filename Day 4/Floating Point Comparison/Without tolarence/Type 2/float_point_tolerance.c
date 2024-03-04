#include <stdio.h>

int main() {
    float num1 = 12345678;
    float num2 = 12345679;

    if (num1 == num2) {
        printf("The numbers are equal.\n");
    } else if (num1 < num2) {
        printf("num1 is less than num2.\n");
    } else {
        printf("num2 is less than num1.\n");
    }

    return 0;
}
