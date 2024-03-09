
#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Using logical AND operator
    printf("%d is %s.\n", num, num && 1 ? "odd" : "even");

    return 0;
}
