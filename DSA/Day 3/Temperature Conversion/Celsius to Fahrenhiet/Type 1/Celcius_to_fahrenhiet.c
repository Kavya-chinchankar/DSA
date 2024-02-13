#include<stdio.h>

int main()
{
    float celsius,fahrenhiet;

    printf("Enter the temperature in celsius:");
    scanf("%f",&celsius);

    fahrenhiet=(celsius*9/5)+32;

    printf("\n%f Celsius is equal to %f Fahrenheit\n",celsius,fahrenhiet);

    return 0;

}
