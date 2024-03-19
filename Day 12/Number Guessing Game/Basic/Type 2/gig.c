#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));

    int lowerBound, upperBound;

    printf("Enter the lower bound of the number range: ");
    scanf("%d", &lowerBound);
    printf("Enter the upper bound of the number range: ");
    scanf("%d", &upperBound);

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

        if (scanf("%d", &guess) != 1) {
            printf("Invalid input. Please enter a number.\n");

            while (getchar() != '\n');
            continue;
        }

        attempts++;

        int difference = abs(secretNumber - guess);
        if (difference == 0) {
            printf("Congratulations! You guessed the correct number in %d attempts.\n", attempts);
            break;
        } else if (difference <= 10) {
            printf("Hot! Try again.\n");
        } else if (difference <= 20) {
            printf("Warm! Try again.\n");
        } else {
            printf("Cold! Try again.\n");
        }
    }

    if (attempts == maxAttempts) {
        printf("Sorry, you've reached the maximum number of attempts. The correct number was %d.\n", secretNumber);
    }

    return 0;
}

