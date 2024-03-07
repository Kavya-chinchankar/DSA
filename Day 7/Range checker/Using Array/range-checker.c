
#include <stdio.h>

// Define a struct to represent a range
struct Range {
    int lowerLimit;
    int upperLimit;
    const char* description;
};

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // Define an array of Range structs
    struct Range ranges[] = {
        {1, 10, "1 to 10"},
        {11, 50, "11 to 50"},
        {51, 100, "51 to 100"}
        // Add more ranges as needed
    };

    int numRanges = sizeof(ranges) / sizeof(ranges[0]);

    // Check if the number is within any of the specified ranges
    int i;
    for (i = 0; i < numRanges; ++i) {
        if (number >= ranges[i].lowerLimit && number <= ranges[i].upperLimit) {
            printf("The number is in the range %s.\n", ranges[i].description);
            return 0; // Exit the program after finding the range
        }
    }

    printf("The number is outside the specified ranges.\n");

    return 0;
}
