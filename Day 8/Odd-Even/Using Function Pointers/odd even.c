// Using Lookup Table and Function Pointers
// Using Function Pointers

#include <stdio.h>

void printEven(int num) {
    printf("%d is even.\n", num);
}

void printOdd(int num) {
    printf("%d is odd.\n", num);
}

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Array of function pointers
    void (*printFunction[2])(int) = {printEven, printOdd};

    // Using function pointers or // Using a lookup table and function pointers
    printFunction[num % 2](num);

    return 0;
}

