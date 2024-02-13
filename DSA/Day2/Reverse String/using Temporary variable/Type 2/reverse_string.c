#include<stdio.h>
#include<string.h>

void reverseString(char *str)
{
    int length = strlen(str);
    int i,j;
    char temp;

       for ( i = 0, j = length - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main()
{
    char inputString[100];

    //When using %s in scanf, it stops reading input when it encounters a whitespace character. To read an entire line including spaces, you should use the %[^\n] format specifier.
    printf("Enter a string:");
    scanf("%[^\n]", inputString);

    reverseString(inputString);

    printf("Reversed String: %s\n", inputString);

    return 0;
}
