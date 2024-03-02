#include<stdio.h>
#include<string.h>

void reverseString(char *str)
{
    int length = strlen(str);


       for (int i = 0; i < length/2; i++) {
        char temp = str[i];
        str[i] = str[length-i-1];
        str[length-i-1] = temp;
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
