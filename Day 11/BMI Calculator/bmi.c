#include <stdio.h>

// Function to calculate BMI using the metric system (weight in kg, height in meters)
float calculateBMIMetric(float weight, float height) {
    return weight / (height * height);
}

// Function to calculate BMI using the imperial system (weight in pounds, height in inches)
float calculateBMIImperial(float weight, float height) {
    return (weight / (height * height)) * 703; // 703 is the conversion factor for the imperial system
}

int main() {
    int choice;
    float weight, height, bmi;

    printf("Choose the system for BMI calculation:\n");
    printf("1. Metric system (kg, meters)\n");
    printf("2. Imperial system (pounds, inches)\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    printf("Enter weight: ");
    scanf("%f", &weight);

    printf("Enter height: ");
    scanf("%f", &height);

    switch (choice) {
        case 1:
            bmi = calculateBMIMetric(weight, height);
            printf("Your BMI in the metric system is: %.2f\n", bmi);
            break;

        case 2:
            bmi = calculateBMIImperial(weight, height);
            printf("Your BMI in the imperial system is: %.2f\n", bmi);
            break;

        default:
            printf("Invalid choice. Please choose 1 or 2.\n");
            return 1;
    }


    if (bmi < 18.5) {
        printf("You are underweight.\n");
    } else if (bmi >= 18.5 && bmi < 25) {
        printf("Your weight is normal.\n");
    } else if (bmi >= 25 && bmi < 30) {
        printf("You are overweight.\n");
    } else {
        printf("You are obese.\n");
    }

    return 0;
}

