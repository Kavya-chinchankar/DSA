#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numberToGuess, userGuess, attempts = 0;

    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate a random number between 1 and 100
    numberToGuess = rand() % 100 + 1;

    // Open input and output files
    FILE *outputFile = fopen("output.txt", "w");
    FILE *inputFile = fopen("input.txt", "r");


    if (inputFile == NULL || outputFile == NULL) {
        perror("File opening failed");
        return 1;
    }

    // Read numbers from the input file and play the game
    while (fscanf(inputFile, "%d", &userGuess) != EOF) {
        attempts = 0;

        do {
            attempts++;

            if (userGuess < numberToGuess) {
                printf("Guess is too low. Try again: ");
                scanf("%d", &userGuess);
            } else if (userGuess > numberToGuess) {
                printf("Guess is too high. Try again: ");
                scanf("%d", &userGuess);
            }
        } while (userGuess != numberToGuess);

        // Write results to the output file
        fprintf(outputFile, "Number %d: Guessed correctly in %d attempts.\n", numberToGuess, attempts);
    }

    // Close the files
    fclose(inputFile);
    fclose(outputFile);

    printf("Results have been written to 'output.txt'.\n");

    return 0;
}
