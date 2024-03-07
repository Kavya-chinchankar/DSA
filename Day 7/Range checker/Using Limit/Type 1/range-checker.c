
#include <stdio.h>
#include <limits.h>

int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Define the range using limits
    int lowerLimit = INT_MIN;
    int upperLimit = INT_MAX;

    // Check if the number is within the range
    if (number >= lowerLimit && number <= upperLimit) {
        printf("The number is within the range.\n");
    } else {
        printf("The number is outside the range.\n");
    }

    return 0;
}
