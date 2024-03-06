#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* concatStrings(const char *str1, const char *str2);

int main() {
    const char *str1 = "Hello, ";
    const char *str2 = "world!";

    char *concatenatedString = concatStrings(str1, str2);

    printf("Concatenated string: %s\n", concatenatedString);

    // Remember to free the dynamically allocated memory
    free(concatenatedString);

    return 0;
}

char* concatStrings(const char *str1, const char *str2) {
    // Calculate the length of the concatenated string
    size_t len1 = strlen(str1);
    size_t len2 = strlen(str2);
    size_t totalLength = len1 + len2 + 1; // 1 for the null terminator

    // Allocate memory for the concatenated string
    char *result = (char*)malloc(totalLength);

    if (result != NULL) {
        // Copy the contents of str1 and str2 to the allocated memory
        strcpy(result, str1);
        strcat(result, str2);
    }

    return result;
}
