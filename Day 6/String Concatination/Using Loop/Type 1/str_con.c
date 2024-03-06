//USING LOOP
#include<stdio.h>

int main()
{
    char str1[50] = "Hello,";
    char str2[] = "World!!";

    int i,j;

     // Find the end of the first string
    for(i=0; str1[i] != '\0'; ++i);

    // Concatenate the second string to the first
    for(j=0; str2[j] != '\0'; ++j, ++i)
    {
        str1[i] =str2[j];
    }

    str1[i] = '\0';  // Null-terminate the result

    printf("Concatenated String : %s\n", str1);

    return 0;
}

