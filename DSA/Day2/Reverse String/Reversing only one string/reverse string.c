#include<stdio.h>
#include<string.h>

int main()
{
    char inputString[100];

    printf("Enter a string:");
    gets(inputString);

    int length=strlen(inputString);

    printf("Reversed String:");

    for(int i=length-1; i>=0; i--)
    {
        printf("%c",inputString[i]);
    }
    printf("\n");

    return 0;
}
