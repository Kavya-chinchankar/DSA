#include<stdio.h>


int findMax(int a,int b,int c)
{
    int max=a;

    if(b>max){
        max=b;
    }
    if(c>max){
        max=c;
    }

    return max;

}

int main()
{
    int num1,num2,num3;

    printf("Enter Three numbers:");
    scanf("%d %d %d",&num1,&num2,&num3);

    int result=findMax(num1,num2,num3);

    printf("The maximum value in given number is %d",result);

    return 0;
}
