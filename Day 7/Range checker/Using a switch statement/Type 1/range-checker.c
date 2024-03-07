
#include <stdio.h>

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check the range using a switch statement
    switch (number) {
        case 1 ... 10:
            printf("The number is in the range 1 to 10.\n");
            break;
        case 11 ... 50:
            printf("The number is in the range 11 to 50.\n");
            break;
        case 51 ... 100:
            printf("The number is in the range 51 to 100.\n");
            break;
        default:
            printf("The number is outside the specified ranges.\n");
    }

    return 0;
}
