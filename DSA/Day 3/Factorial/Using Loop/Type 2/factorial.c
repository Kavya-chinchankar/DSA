#include <stdio.h>

int calculateFactorial(int n) {
    int result=1;

    for(int i=2; i <= n; i++){
            result *= i;
    }

    return result;
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);


    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is: %d\n", number, calculateFactorial(number));
    }

    return 0;
}

