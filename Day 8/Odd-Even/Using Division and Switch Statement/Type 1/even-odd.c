//Using Switch Statement
#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Using division and switch statement
    switch (num % 2) {
        case 0:
            printf("%d is even.\n", num);
            break;
        case 1:
        case -1:
            printf("%d is odd.\n", num);
            break;
    }

    return 0;
}
