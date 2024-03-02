#include<stdio.h>
#include<string.h>
#include<stdbool.h>


int main()
{
    char inputString[100];

    bool isPalindrome=true;

    printf("Enter a word or phrase:");
    gets(inputString);

    int length = strlen(inputString);


     for (int i = 0; i < length/2; i++) {
        if (inputString[i] != inputString[length-i-1]) {
            isPalindrome = false;
            break;
        }
    }


    if(isPalindrome)
    {
        printf("%s is a Palindrome\n",inputString);N
    }
    else
    {
         printf("%s is not a Palindrome\n",inputString);
    }

    return 0;
}

