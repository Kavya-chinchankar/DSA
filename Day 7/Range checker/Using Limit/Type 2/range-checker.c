
#include <stdio.h>
#include <limits.h>

int main() {
    int number, lowerLimit, upperLimit;

    printf("Enter an integer: ");
    scanf("%d", &number);

    printf("Enter the lower limit: ");
    scanf("%d", &lowerLimit);

    printf("Enter the upper limit: ");
    scanf("%d", &upperLimit);

    // Check if the number is within the specified range
    if (number >= lowerLimit && number <= upperLimit) {
        printf("The number is within the range.\n");
    } else {
        printf("The number is outside the range.\n");
    }

    return 0;
}
