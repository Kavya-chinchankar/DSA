
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Function to dynamically allocate and initialize an array for prime checking
bool* initializePrimeArray(int end) {
    bool* isPrimeArray = (bool*)malloc((end + 1) * sizeof(bool));

    if (isPrimeArray == NULL) {
        printf("Memory allocation error.\n");
        exit(EXIT_FAILURE);
    }

    // Assume all numbers are prime initially
    for (int i = 0; i <= end; i++) {
        isPrimeArray[i] = true;
    }

    // Mark non-prime numbers
    isPrimeArray[0] = isPrimeArray[1] = false;
    for (int i = 2; i * i <= end; i++) {
        if (isPrimeArray[i]) {
            for (int j = i * i; j <= end; j += i) {
                isPrimeArray[j] = false;
            }
        }
    }

    return isPrimeArray;
}

// Function to display prime numbers based on the dynamically allocated array
void displayPrimes(bool* isPrimeArray, int start, int end) {
    printf("Prime numbers in the range %d to %d are:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (isPrimeArray[i]) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int start, end;

    // Input from the user
    printf("Enter the starting range: ");
    scanf("%d", &start);

    printf("Enter the ending range: ");
    scanf("%d", &end);

    // Dynamically allocate memory and initialize the array for prime checking
    bool* isPrimeArray = initializePrimeArray(end);

    // Display the prime numbers
    displayPrimes(isPrimeArray, start, end);

    // Free dynamically allocated memory
    free(isPrimeArray);

    return 0;
}
