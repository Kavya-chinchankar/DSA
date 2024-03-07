
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <stdint.h>

// Function to calculate (base^exponent) % modulus
uint64_t powerMod(uint64_t base, uint64_t exponent, uint64_t modulus) {
    uint64_t result = 1;
    base = base % modulus;

    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result = (result * base) % modulus;
        }

        exponent = exponent >> 1;
        base = (base * base) % modulus;
    }

    return result;
}

// Function to perform the Miller-Rabin primality test
bool millerRabinTest(uint64_t n, int k) {
    if (n <= 1 || n == 4) {
        return false;
    }
    if (n <= 3) {
        return true;
    }

    // Find d such that n-1 = 2^r * d
    uint64_t d = n - 1;
    while (d % 2 == 0) {
        d /= 2;
    }

    // Witness loop
    for (int i = 0; i < k; i++) {
        uint64_t a = 2 + rand() % (n - 4);
        uint64_t x = powerMod(a, d, n);

        if (x == 1 || x == n - 1) {
            continue;
        }

        // Repeat squaring
        for (uint64_t r = 0; r < d - 1; r++) {
            x = (x * x) % n;
            if (x == 1) {
                return false;
            }
            if (x == n - 1) {
                break;
            }
        }

        if (x != n - 1) {
            return false;
        }
    }

    return true;
}

// Function to print prime numbers in the given range using Miller-Rabin
void printPrimesInRange(int start, int end, int k) {
    printf("Probable prime numbers in the range %d to %d are:\n", start, end);

    for (int num = start; num <= end; num++) {
        if (millerRabinTest(num, k)) {
            printf("%d\n", num);
        }
    }
}

int main() {
    int start, end, k;

    // Get user input for range and number of iterations (k)
    printf("Enter the starting point of the range: ");
    scanf("%d", &start);

    printf("Enter the ending point of the range: ");
    scanf("%d", &end);

    printf("Enter the number of iterations for Miller-Rabin test (k): ");
    scanf("%d", &k);

    // Validate input
    if (start < 2) {
        printf("Starting point must be 2 or greater.\n");
        return 1;
    }

    if (start > end) {
        printf("Invalid range. Starting point should be less than or equal to the ending point.\n");
        return 1;
    }

    if (k <= 0) {
        printf("Number of iterations (k) should be a positive integer.\n");
        return 1;
    }

    // Seed the random number generator
    srand(time(NULL));

    // Call the function to print probable prime numbers in the given range using Miller-Rabin
    printPrimesInRange(start, end, k);

    return 0;
}
