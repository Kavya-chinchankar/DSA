#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));

    int lowerBound, upperBound;

    // Set the range of numbers
    printf("Enter the lower bound of the number range: ");
    scanf("%d", &lowerBound);
    printf("Enter the upper bound of the number range: ");
    scanf("%d", &upperBound);

    // Check for valid range
    if (lowerBound >= upperBound) {
        printf("Invalid range. The upper bound must be greater than the lower bound.\n");
        return 1;
    }

    int secretNumber = rand() % (upperBound - lowerBound + 1) + lowerBound;

    int guess, attempts = 0;
    int maxAttempts = 10;

    printf("Welcome to the Number Guessing Game!\n");
    printf("Guess the number between %d and %d\n", lowerBound, upperBound);

    while (attempts < maxAttempts) {
        printf("Enter your guess: ");

        // Check for valid numeric input
        if (scanf("%d", &guess) != 1) {
            printf("Invalid input. Please enter a number.\n");
            // Clear input buffer
            while (getchar() != '\n');
            continue;
        }

        attempts++;

        if (guess == secretNumber) {
            printf("Congratulations! You guessed the correct number in %d attempts.\n", attempts);
            break;
        } else if (guess < secretNumber) {
            printf("Try again with a higher number.\n");
        } else {
            printf("Try again with a lower number.\n");
        }
    }

    if (attempts == maxAttempts) {
        printf("Sorry, you've reached the maximum number of attempts. The correct number was %d.\n", secretNumber);
    }

    return 0;
}
