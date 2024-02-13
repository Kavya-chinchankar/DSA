#include<stdio.h>
#include<string.h>

int main() {
    char inputString[100];

    printf("Enter a string: ");
    scanf("%s", inputString);

    int length = strlen(inputString);
    printf("Length of the string: %d\n", length);

    return 0;
}

