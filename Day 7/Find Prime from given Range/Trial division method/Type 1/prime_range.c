#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }

    // Check divisibility up to the square root of the number
    int sqrtNum = sqrt(num);
    for (int i = 2; i <= sqrtNum; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

// Function to print prime numbers in the given range
void printPrimesInRange(int start, int end) {
    printf("Prime numbers in the range %d to %d are:\n", start, end);

    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
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

