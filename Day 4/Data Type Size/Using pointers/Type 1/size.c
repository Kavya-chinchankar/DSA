#include <stdio.h>

#define SIZEOF(type) ((size_t)(&((type *)0)[1]))

int main() {
    // Declare pointers for various data types
    char *charPtr;
    short *shortPtr;
    int *intPtr;
    long *longPtr;
    long long *longLongPtr;
    float *floatPtr;
    double *doublePtr;
    long double *longDoublePtr;

    // Print the size of each data type using the SIZEOF macro
    printf("Size of char: %zu bytes\n", SIZEOF(charPtr));
    printf("Size of short: %zu bytes\n", SIZEOF(shortPtr));
    printf("Size of int: %zu bytes\n", SIZEOF(intPtr));
    printf("Size of long: %zu bytes\n", SIZEOF(longPtr));
    printf("Size of long long: %zu bytes\n", SIZEOF(longLongPtr));
    printf("Size of float: %zu bytes\n", SIZEOF(floatPtr));
    printf("Size of double: %zu bytes\n", SIZEOF(doublePtr));
    printf("Size of long double: %zu bytes\n", SIZEOF(longDoublePtr));

    return 0;
}
