
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed for random number generation
    srand(time(0));

    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;

    int low = 1, high = 100, guess, attempts = 0;

    printf("Welcome to the Number Guessing Game!\n");
    printf("Guess the number between 1 and 100\n");

    do {
        // Use binary search to guess the number
        guess = (low + high) / 2;
        attempts++;

        printf("Is the number %d?\n", guess);

        int response;
        printf("Enter 1 if the guess is correct, 2 if too high, and 3 if too low: ");
        scanf("%d", &response);

        if (response == 1) {
            printf("Congratulations! You guessed the correct number in %d attempts.\n", attempts);
            break;
        } else if (response == 2) {
            high = guess - 1;
        } else if (response == 3) {
            low = guess + 1;
        } else {
            printf("Invalid response. Please enter 1, 2, or 3.\n");
        }

    } while (1);  // Infinite loop until the correct number is guessed

    return 0;
}
