
#include <stdio.h>

int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Define the range
    int lowerLimit = 10;
    int upperLimit = 100;

    // Check if the number is within the range
    if (number >= lowerLimit && number <= upperLimit) {
        printf("The number is within the range.\n");
    } else {
        printf("The number is outside the range.\n");
    }

    return 0;
}
