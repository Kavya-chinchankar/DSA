//Using Bitwise AND and Right Shift
#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Using printf format specifier
    printf("%d is %s.\n", num, (num & 1) ? "odd" : "even");

    return 0;
}
