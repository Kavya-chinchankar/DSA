#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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

// Function to find prime numbers within a given range using dynamic memory allocation
int* findPrimesInRange(int start, int end, int* count) {
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

int main() {
    int start, end, count;
    int* primeArray;

    // Input from the user
    printf("Enter the starting range: ");
    scanf("%d", &start);

    printf("Enter the ending range: ");
    scanf("%d", &end);

    // Find and allocate memory for prime numbers in the given range
    primeArray = findPrimesInRange(start, end, &count);

    // Display the prime numbers
    printf("Prime numbers in the range %d to %d are:\n", start, end);
    for (int i = 0; i < count; i++) {
        printf("%d ", primeArray[i]);
    }
    printf("\n");

    // Free dynamically allocated memory
    free(primeArray);

    return 0;
}
