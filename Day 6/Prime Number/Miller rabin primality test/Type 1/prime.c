#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

// Function to calculate (a^b) % m
long long power(long long a, long long b, long long m) {
    long long result = 1;
    a = a % m;

    while (b > 0) {
        if (b % 2 == 1) {
            result = (result * a) % m;
        }
        b = b / 2;
        a = (a * a) % m;
    }

    return result;
}

// Function to perform Miller-Rabin primality test
bool millerRabinTest(long long d, long long n) {
    long long a = 2 + rand() % (n - 4);
    long long x = power(a, d, n);

    if (x == 1 || x == n - 1) {
        return true;
    }

    while (d != n - 1) {
        x = (x * x) % n;
        d *= 2;

        if (x == 1) {
            return false;
        }

        if (x == n - 1) {
            return true;
        }
    }

    return false;
}

// Function to check if a number is prime using the Miller-Rabin test
bool isPrime(long long n, int k) {
    if (n <= 1 || n == 4) {
        return false;
    }
    if (n <= 3) {
        return true;
    }

    long long d = n - 1;
    while (d % 2 == 0) {
        d /= 2;
    }

    for (int i = 0; i < k; i++) {
        if (!millerRabinTest(d, n)) {
            return false;
        }
    }

    return true;
}

int main() {
    long long n;
    int k = 5; // Number of iterations for Miller-Rabin test

    // Input from the user
    printf("Enter a number: ");
    scanf("%lld", &n);

    // Check if the number is prime
    if (isPrime(n, k)) {
        printf("%lld is a prime number.\n", n);
    } else {
        printf("%lld is not a prime number.\n", n);
    }

    return 0;
}

