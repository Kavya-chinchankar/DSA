
#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Using XOR
    printf("%d is %s.\n", num, (num ^ 1) ? "even" : "odd");

    return 0;
}
