// Palindrome Checker: Write a C program that checks if a given word or phrase is a palindrome (reads the same forwards and backwards). Use conditional statements to make the determination.

#include<stdio.h>
#include<string.h>
#include<ctype.h>


int main()
{
    char inputString[100];

    int i,j,isPalindrome=1;

    printf("Enter a word or phrase:");
    fgets(inputString,sizeof(inputString),stdin);


    // Convert input to lowercase and remove spaces and punctuation
       for (i = 0, j = 0; inputString[i] != '\0'; i++) {
        if (isalnum(inputString[i])) {
            inputString[j] = tolower(inputString[i]);
            j++;
        }
    }


     for (i = 0; i < j; i++, j--) {
        if (inputString[i] != inputString[j]) {
            isPalindrome = 0;
            break;
        }
    }


    if(isPalindrome)
    {
        printf("%s is a Palindrome\n",inputString);
    }
    else
    {
         printf("%s is not a Palindrome\n",inputString);
    }

    return 0;
}

