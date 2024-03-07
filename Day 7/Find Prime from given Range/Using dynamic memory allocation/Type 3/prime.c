#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num);

// Function to dynamically allocate and store prime numbers in a given range
int* findPrimesInRangeDynamic(int start, int end, int* count) {
    int* primes = NULL;
    *count = 0;

    for (int num = start; num <= end; num++) {
        if (isPrime(num)) {
            (*count)++;
            primes = realloc(primes, *count * sizeof(int));

            if (primes == NULL) {
                printf("Memory allocation error.\n");
                exit(EXIT_FAILURE);
            }

            primes[*count - 1] = num;
        }
    }

    return primes;
}

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false; // Not a prime number
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false; // Not a prime number
        }
    }

    return true; // Prime number
}

// Function to display prime numbers
void displayPrimes(int* primes, int count) {
    printf("Prime numbers are:\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", primes[i]);
    }
    printf("\n");
}

int main() {
    int start, end, count;
    int* primeArray;

    // Input from the user
    printf("Enter the starting range: ");
    scanf("%d", &start);

    printf("Enter the ending range: ");
    scanf("%d", &end);

    // Find and allocate memory for prime numbers in the given range
    primeArray = findPrimesInRangeDynamic(start, end, &count);

    // Display the prime numbers
    displayPrimes(primeArray, count);

    // Free dynamically allocated memory
    free(primeArray);

    return 0;
}
