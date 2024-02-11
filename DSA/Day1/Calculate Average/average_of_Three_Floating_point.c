//Calculte Avrage of three number

#include<stdio.h>

int main()
{
    float float1=5.9;
    float float2=4.1;
    float float3=5.0;
    float sum=float1 + float2 + float3;
    float avg = sum/3;

    printf("The sum of %.2f and %.2f and %.2f is %.2f",float1, float2, float3, sum);


    printf("\nThe avarage of Three floating point number is %.2f", avg);


    return 0;
}
