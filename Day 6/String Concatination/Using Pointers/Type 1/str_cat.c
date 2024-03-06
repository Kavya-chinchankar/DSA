#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello, ";
    char str2[] = "world!";

    char *ptr1 = str1 + strlen(str1);
    char *ptr2 = str2;

    while (*ptr2 != '\0') {
        *ptr1 = *ptr2;
        ptr1++;
        ptr2++;
    }

    *ptr1 = '\0';

    printf("Concatenated string: %s\n", str1);

    return 0;
}
