#include<stdio.h>

double calculatePower(double base, int exponent) {

     if(exponent==0)
    {
        return 1;
    }
    else{
        return base*calculatePower(base,exponent-1);
    }

}

int main() {
    double base, result;
    int exponent;

    printf("Enter the base: ");
    scanf("%lf", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    result = calculatePower(base, exponent);
    printf("%.2lf raised to the power of %d is: %.2lf\n", base, exponent, result);

    return 0;
}

