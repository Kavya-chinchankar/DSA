#include <stdio.h>
#include <stdbool.h>

void printPrimesInRange(int start, int end) {
    // Create an array to track prime numbers
    bool isPrime[end + 1];
    for (int i = 2; i <= end; i++) {
        isPrime[i] = true;
    }

    // Apply Sieve of Eratosthenes algorithm
    for (int p = 2; p * p <= end; p++) {
        if (isPrime[p]) {
            for (int i = p * p; i <= end; i += p) {
                isPrime[i] = false;
            }
        }
    }

    // Print prime numbers in the given range
    printf("Prime numbers in the range %d to %d are:\n", start, end);
    for (int i = (start < 2) ? 2 : start; i <= end; i++) {
        if (isPrime[i]) {
            printf("%d\n", i);
        }
    }
}

int main() {
    int start, end;

    // Get user input for range
    printf("Enter the starting point of the range: ");
    scanf("%d", &start);

    printf("Enter the ending point of the range: ");
    scanf("%d", &end);

    // Validate input
    if (start < 2) {
        printf("Starting point must be 2 or greater.\n");
        return 1;
    }

    if (start > end) {
        printf("Invalid range. Starting point should be less than or equal to the ending point.\n");
        return 1;
    }

    // Call the function to print prime numbers in the given range
    printPrimesInRange(start, end);

    return 0;
}

