#include <stdio.h>
#include <stdbool.h>

#define MAX 1000000  // Adjust the limit based on your requirements

void sieveOfEratosthenes(bool isPrime[], int limit) {
    for (int i = 2; i * i <= limit; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j <= limit; j += i) {
                isPrime[j] = false;
            }
        }
    }
}

bool isPrimeNumber(int num, bool isPrime[]) {
    return (num >= 2 && num < MAX && isPrime[num]);
}

int main() {
    bool isPrime[MAX];
    for (int i = 0; i < MAX; ++i) {
        isPrime[i] = true;
    }

    sieveOfEratosthenes(isPrime, MAX);

    int num;
    printf("Enter a number to check if it's prime: ");
    scanf("%d", &num);

    if (isPrimeNumber(num, isPrime)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
