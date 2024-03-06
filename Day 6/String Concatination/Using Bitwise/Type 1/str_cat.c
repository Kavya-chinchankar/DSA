#include <stdio.h>
#include <string.h>

void concatStrings(char *str1, char *str2);

int main() {
    char str1[50] = "Hello, ";
    char str2[] = "world!";

    concatStrings(str1, str2);

    printf("Concatenated string: %s\n", str1);

    return 0;
}

void concatStrings(char *str1, char *str2) {
    while (*str1) {
        str1++; // Move to the end of str1
    }

    while (*str2) {
        *str1++ = *str2++; // Copy characters from str2 to str1
    }

    *str1 = '\0'; // Add null terminator to complete the concatenation
}
