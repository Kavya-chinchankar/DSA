#include <stdio.h>

void concatStrings(char *result, const char *str1, const char *str2);

int main() {
    char str1[50] = "Hello, ";
    char str2[] = "world!";
    char concatenatedString[100];  // Make sure this buffer is large enough

    concatStrings(concatenatedString, str1, str2);

    printf("Concatenated string: %s\n", concatenatedString);

    return 0;
}

void concatStrings(char *result, const char *str1, const char *str2) {
    while (*str1) {
        *result = *str1;
        result++;
        str1++;
    }

    while (*str2) {
        *result = *str2;
        result++;
        str2++;
    }

    *result = '\0';  // Add null terminator to complete the concatenation
}
