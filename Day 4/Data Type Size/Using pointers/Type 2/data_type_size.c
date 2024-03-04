#include <stdio.h>

int main() {
    int integer_var = 42;
    float float_var = 3.14;
    char char_var = 'A';

    char *int_ptr = (char*)&integer_var;
    char *float_ptr = (char*)&float_var;
    char *char_ptr = (char*)&char_var;

    // Calculate and print the sizes of the pointed data types
    printf("Size of data pointed by int_ptr: %d bytes\n", int_ptr + 1 - int_ptr);
    printf("Size of data pointed by float_ptr: %d bytes\n", float_ptr + 1 - float_ptr);
    printf("Size of data pointed by char_ptr: %d bytes\n", char_ptr + 1 - char_ptr);

    return 0;
}
