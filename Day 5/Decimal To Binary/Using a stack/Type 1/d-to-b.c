//STACK

#include <stdio.h>
#include <stdlib.h>

// Structure to represent a stack
struct Stack {
    int* array;
    int top;
    unsigned capacity;
};

// Function to initialize a stack
struct Stack* createStack(unsigned capacity) {
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int*)malloc(stack->capacity * sizeof(int));
    return stack;
}

// Function to check if the stack is full
int isFull(struct Stack* stack) {
    return stack->top == stack->capacity - 1;
}

// Function to check if the stack is empty
int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

// Function to push an item onto the stack
void push(struct Stack* stack, int item) {
    if (isFull(stack)) {
        return;
    }
    stack->array[++stack->top] = item;
}

// Function to pop an item from the stack
int pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        return -1;  // Stack underflow
    }
    return stack->array[stack->top--];
}

// Function to convert decimal to binary using the stack
void decimalToBinary(int n) {
    struct Stack* stack = createStack(32);  // Assuming a 32-bit binary representation

    while (n > 0) {
        push(stack, n % 2);
        n = n / 2;
    }

    printf("Binary representation: ");

    if (isEmpty(stack)) {
        printf("0");
    } else {
        while (!isEmpty(stack)) {
            printf("%d", pop(stack));
        }
    }

    printf("\n");

    free(stack->array);
    free(stack);
}

int main() {
    int decimalNumber;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    decimalToBinary(decimalNumber);

    return 0;
}
