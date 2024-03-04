#include <stdio.h>
#include <stdlib.h>

#define SIZEOF(type) ((size_t)(&((type *)malloc(1))[1]))

int main() {
    printf("Size of char: %zu bytes\n", SIZEOF(char));
    printf("Size of short: %zu bytes\n", SIZEOF(short));
    printf("Size of int: %zu bytes\n", SIZEOF(int));
    printf("Size of long: %zu bytes\n", SIZEOF(long));
    printf("Size of long long: %zu bytes\n", SIZEOF(long long));
    printf("Size of float: %zu bytes\n", SIZEOF(float));
    printf("Size of double: %zu bytes\n", SIZEOF(double));
    printf("Size of long double: %zu bytes\n", SIZEOF(long double));

    return 0;
}

