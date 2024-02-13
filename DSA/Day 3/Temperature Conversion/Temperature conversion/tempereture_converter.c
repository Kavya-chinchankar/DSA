#include<stdio.h>

// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

// Function to convert Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {

    int choice;
    double temperature;

    printf("Temperature Conversion Program\n");

    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");

    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    printf("Enter the temperature: ");
    scanf("%lf", &temperature);

    switch (choice) {
        case 1:
            printf("%.2lf Celsius is equal to %.2lf Fahrenheit\n", temperature, celsiusToFahrenheit(temperature));
            break;
        case 2:
            printf("%.2lf Fahrenheit is equal to %.2lf Celsius\n", temperature, fahrenheitToCelsius(temperature));
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
