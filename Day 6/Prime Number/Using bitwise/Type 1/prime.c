
#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime using bitwise operations
bool isPrimeBitwise(int num) {
    if (num <= 1) {
        return false; // Not a prime number
    }

    // Check if the least significant bit (LSB) is set
    if ((num & 1) == 0 && num != 2) {
        return false; // Even numbers greater than 2 are not prime
    }

    // Iterate over odd divisors starting from 3
    for (int i = 3; i * i <= num; i += 2) {
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

    // Check if the number is prime using bitwise operations
    if (isPrimeBitwise(n)) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}
