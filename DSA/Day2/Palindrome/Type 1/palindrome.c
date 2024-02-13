#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool isPalindrome(char str[])
{
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    while(start < end)
    {
        if(str[start] != str[end])
        {
            return false;
        }

        start++;
        end--;
    }
    return true;
}

int main()
{
    char inputString[100];

    printf("Enter a string:");
    scanf("%s", inputString);

    if(isPalindrome(inputString))
    {
        printf("%s is a Palindrome\n",inputString);
    }
    else
    {
         printf("%s is not a Palindrome\n",inputString);
    }

    return 0;
}

