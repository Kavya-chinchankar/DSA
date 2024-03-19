
#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    // Method 14: Using fread and fwrite for binary file operations
    FILE *binaryFile;

    // Method 15: Opening a binary file for writing in binary mode
    binaryFile = fopen("students.dat", "wb");

    if (binaryFile == NULL) {
        printf("Error opening binary file for writing!\n");
        return 1;
    }

    // Method 16: Writing a struct to a binary file using fwrite
    struct Student student1 = {"John Doe", 20, 85.5};
    fwrite(&student1, sizeof(struct Student), 1, binaryFile);

    // Method 17: Closing the binary file
    fclose(binaryFile);

    // Method 18: Opening the binary file for reading in binary mode
    binaryFile = fopen("students.dat", "rb");

    if (binaryFile == NULL) {
        printf("Error opening binary file for reading!\n");
        return 1;
    }

    // Method 19: Reading a struct from a binary file using fread
    struct Student student2;
    fread(&student2, sizeof(struct Student), 1, binaryFile);

    // Method 20: Closing the binary file
    fclose(binaryFile);

    // Method 21: Displaying the read data
    printf("Student Name: %s\n", student2.name);
    printf("Student Age: %d\n", student2.age);
    printf("Student Marks: %.2f\n", student2.marks);

    return 0;
}
