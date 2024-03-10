
#include <stdio.h>
#include <string.h>

int main() {
    char correctPassword[] = "secure123";
    char enteredPassword[50];

    printf("Enter the password: ");
    scanf("%s", enteredPassword);

    if (strcmp(enteredPassword, correctPassword) == 0) {
        printf("Password is correct. Access granted!\n");
    } else {
        printf("Incorrect password. Access denied.\n");
    }

    return 0;
}
