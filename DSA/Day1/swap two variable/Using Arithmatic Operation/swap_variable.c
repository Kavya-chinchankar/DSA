#include<stdio.h>

int main()
{
    int num1,num2;

    printf("Enter the first variable:\n");
    scanf("%d",&num1);

    printf("Enter the second variable:\n");
    scanf("%d",&num2);

    printf("Before swapping num1=%d and num2=%d",num1,num2);

    //SWAP THYE VARIABLES

    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;

    printf("\nAfter swapping num1=%d and num2=%d",num1,num2);


}
