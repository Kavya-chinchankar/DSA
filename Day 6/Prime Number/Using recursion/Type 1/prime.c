
#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime using recursion
bool isPrimeRecursion(int num, int divisor) {
    // Base cases
    if (num <= 1) {
        return false; // Not a prime number
    }
    if (divisor == 1) {
        return true; // 1 is not a prime number
    }

    // Check if the number is divisible by the current divisor
    if (num % divisor == 0) {
        return false; // Not a prime number
    }

    // Recursively check with the next divisor
    return isPrimeRecursion(num, divisor - 1);
}

int main() {
    int n;

    // Input from the user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Check if the number is prime using recursion
    if (isPrimeRecursion(n, n / 2)) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}
