
#include <stdio.h>
#include <ctype.h>

int isAlphabetic(const char *str) {
    while (*str) {
        if (!isalpha(*str)) {
            return 0;
        str++;
    }
    return 1;

int main() {
    char name[50];

    do {
        printf("Enter your name: ");
        scanf("%s", name);

        if (!isAlphabetic(name)) {
            printf("Invalid input! Your name should contain only alphabetical characters.\n");
        }
    } while (!isAlphabetic(name));

    printf("Hello, %s!\n", name);

    return 0;
}
