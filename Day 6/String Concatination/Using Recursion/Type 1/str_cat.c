#include <stdio.h>

void concatStrings(char *str1, char *str2);

int main() {
    char str1[50] = "Hello, ";
    char str2[] = "world!";

    concatStrings(str1, str2);

    printf("Concatenated string: %s\n", str1);

    return 0;
}

void concatStrings(char *str1, char *str2) {
    if (*str1 == '\0') {
        while (*str2 != '\0') {
            *str1 = *str2;
            str1++;
            str2++;
        }
        *str1 = '\0'; // Add null terminator
    } else {
        concatStrings(str1 + 1, str2);
    }
}

