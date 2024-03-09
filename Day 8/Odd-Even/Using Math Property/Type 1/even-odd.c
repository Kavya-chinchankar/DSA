//Using Mathematical Property and Absolute Function

#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Using a mathematical property
    printf("%d is %s.\n", num, (num / 2) * 2 == num ? "even" : "odd");

     // Using mathematical property and absolute function
    printf("%d is %s.\n", num, abs(num % 2) == 0 ? "even" : "odd");

    return 0;
}
