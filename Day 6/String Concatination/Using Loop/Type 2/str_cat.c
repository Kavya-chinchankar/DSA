
#include <stdio.h>

int main() {
    char str1[50] = "Hello, ";
    char str2[] = "world!";

    int i, j;

    // Move to the end of str1
    for (i = 0; str1[i] != '\0'; i++);

    // Concatenate str2 to str1
    for (j = 0; str2[j] != '\0'; j++) {
        str1[i + j] = str2[j];
    }

    // Add null terminator
    str1[i + j] = '\0';

    printf("Concatenated string: %s\n", str1);

    return 0;
}
