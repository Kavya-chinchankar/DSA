//Using a Lookup Table

#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Using an array of strings or //Using a Lookup Table
    const char* result[] = {"even", "odd"};
    printf("%d is %s.\n", num, result[num % 2]);

    return 0;
}
