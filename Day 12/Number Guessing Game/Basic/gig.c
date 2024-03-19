#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));

    int secretNumber = rand() % 100 + 1;

    int guess, attempts = 0;

    printf("Welcome to the Number Guessing Game!\n");
    printf("Guess the number between 1 and 100\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess == secretNumber) {
            printf("Congratulations! You guessed the correct number in %d attempts.\n", attempts);
            break;
        } else if (guess < secretNumber) {
            printf("Try again with a higher number.\n");
        } else {
            printf("Try again with a lower number.\n");
        }

    } while (1);
    return 0;
}

