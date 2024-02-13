#include <stdio.h>

int main() {
    int originalNumber, reversedNumber = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &originalNumber);

    int number = originalNumber; // Store the original number for comparison later

    while (number != 0){
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number = number / 10;
    }

    if(originalNumber == reversedNumber) {
        printf("%d is a Palindrome\n", originalNumber);
    } else {
        printf("%d is not a Palindrome\n", originalNumber);
    }

    printf("Reversed Number: %d\n", reversedNumber);

    return 0;
}
