// Using Conditional Statement and Self-executing Block

#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Using conditional operator and logical NOT
    printf("%d is %s.\n", num, (num % 2 == 0) ? "even" : "odd");

       // Using conditional statement and self-executing block
    (num % 2 == 0 ? printf("%d is even.\n", num) : printf("%d is odd.\n", num));

    return 0;
}
