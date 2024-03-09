
#include <stdio.h>
#include <ctype.h>

int isValidName(const char *name) {
    while (*name) {
        if (!isalpha(*name)) {
            return 0;
        }
        name++;
    }
    return 1;
}

int main() {
    char name[50];

    do {
        printf("Enter your name: ");
        scanf("%s", name);

        if (!isValidName(name)) {
            printf("Invalid input! Your name should contain only alphabetical characters.\n");
        }
    } while (!isValidName(name));

    printf("Hello, %s!\n", name);

    return 0;
}
