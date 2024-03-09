
#include <stdio.h>

// Recursive function to check if a number is even
int isEven(int num) {
    if (num == 0)
        return 1; // 0 is even
    else if (num == 1)
        return 0; // 1 is odd
    else
        return isEven(num - 2);
}

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (isEven(num)) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }

    return 0;
}
