#include<stdio.h>

long long calculatePower(int base, int exponent) {

    if(exponent==0)
    {
        return 1;
    }
    else{
        return base*calculatePower(base,exponent-1);
    }


}

int main() {
    int  base;
    int exponent;

    printf("Enter the base: ");
    scanf("%d", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    long long result = calculatePower(base, exponent);
    printf("%d raised to the power of %d is: %.lld\n", base, exponent, result);

    return 0;
}

