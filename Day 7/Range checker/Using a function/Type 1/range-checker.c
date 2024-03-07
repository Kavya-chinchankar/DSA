
#include <stdio.h>

// Function to check if a number is within a range
int isInRange(int number, int lowerLimit, int upperLimit) {
    return (number >= lowerLimit && number <= upperLimit);
}

int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Define the range
    int lowerLimit = 10;
    int upperLimit = 100;

    // Check if the number is within the range using the function
    if (isInRange(number, lowerLimit, upperLimit)) {
        printf("The number is within the range.\n");
    } else {
        printf("The number is outside the range.\n");
    }

    return 0;
}
