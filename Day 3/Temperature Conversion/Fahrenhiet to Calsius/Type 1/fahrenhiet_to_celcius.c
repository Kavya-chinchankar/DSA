#include<stdio.h>

int main()
{
    float celsius,fahrenhiet;

    printf("Enter the temperature in fahrenhiet:");
    scanf("%f",&fahrenhiet);

    celsius=(fahrenhiet - 32) * 5 / 9;

    printf("%f Fahrenheit is equal to %f Celsius\n",fahrenhiet,celsius);

    return 0;

}
