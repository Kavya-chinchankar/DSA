#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime using trial division
bool isPrime(int num) {
    if (num <= 1) {
        return false; // Not a prime number
    }

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return false; // Not a prime number
        }
    }

    return true; // Prime number
}

int main() {
    int n;

    // Input from the user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Check if the number is prime
    if (isPrime(n)) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}

