// USING TRIAL DIVISION
//  6k +/- 1 RULE

#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime using optimized trial division
bool isPrime(int num) {
    if (num <= 1) {
        return false; // Not a prime number
    }

    if (num == 2 || num == 3) {
        return true; // 2 and 3 are prime
    }

    if (num % 2 == 0 || num % 3 == 0) {
        return false; // Multiples of 2 and 3 are not prime
    }

    // Check divisors of the form 6k +/- 1, up to the square root of the number
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
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

