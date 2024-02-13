#include<stdio.h>

unsigned long long factorialRecurssion( int n){

    unsigned long long result=1;

    if(n == 0 || n == 1){
        return 1;
    }
    else{
        return n*factorialRecurssion(n-1);
    }

}


int main()
{
    int num;

    printf("Enter a number:");
    scanf("%d",&num);

    unsigned long long factorial =factorialRecurssion(num);

    if(num<0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else{
        printf("The factorial of %d is :%llu\n",num,factorial);
    }
}
