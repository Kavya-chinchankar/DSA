//6k +/- 1" rule

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// Function to check if a number is prime using 6k +/- 1 rule
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    if (num <= 3) {
        return true;
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return false;
    }

    // Check divisibility for numbers of the form 6k +/- 1
    int sqrtNum = sqrt(num);
    for (int i = 5; i <= sqrtNum; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }

    return true;
}

// Function to print prime numbers in the given range
void printPrimesInRange(int start, int end) {
    printf("Prime numbers in the range %d to %d are:\n", start, end);

    // Handle special cases (2 and 3)
    if (start <= 2) {
        printf("2\n");
    }
    if (start <= 3) {
        printf("3\n");
    }

    // Start from the next number that satisfies 6k +/- 1 rule
    int current = (start <= 5) ? 5 : (start % 6 == 0) ? start + 1 : start + (6 - (start % 6));

    for (; current <= end; current += 6) {
        if (isPrime(current)) {
            printf("%d\n", current);
        }
        if (current + 2 <= end && isPrime(current + 2)) {
            printf("%d\n", current + 2);
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

