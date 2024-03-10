
#include <stdio.h>

int main() {

    char name[50];
    int age;
    char color[20];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your favorite color: ");
    scanf("%s", color);

    printf("\nHello, %s!\n", name);
    printf("You are %d years old and your favorite color is %s.\n", age, color);

    return 0;
}
