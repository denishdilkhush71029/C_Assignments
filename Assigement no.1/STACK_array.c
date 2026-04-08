#include <stdio.h>
#include <stdlib.h>

#define MAX 5 // Define the maximum size of the stack

// Global variables
int stack[MAX];
int top = -1; // -1 indicates the stack is empty

// Function prototypes
void push();
void pop();
void peek();
void display();

int main() {
    int choice;

    while (1) {
        printf("\n=== STACK OPERATIONS MENU ===\n");
        printf("1. Push (Add element)\n");
        printf("2. Pop (Remove element)\n");
        printf("3. Peek (View top element)\n");
        printf("4. Display (View all elements)\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: 
                push(); 
                break;
            case 2: 
                pop(); 
                break;
            case 3: 
                peek(); 
                break;
            case 4: 
                display(); 
                break;
            case 5: 
                printf("Exiting program...\n");
                exit(0);
            default: 
                printf("Invalid choice! Please select a valid option.\n");
        }
    }
    return 0;
}

// Function to add an element to the stack
void push() {
    int value;
    // Check for Stack Overflow
    if (top == MAX - 1) {
        printf("Stack Overflow! Cannot push more elements.\n");
    } else {
        printf("Enter the value to push: ");
        scanf("%d", &value);
        top++; // Move top up by 1
        stack[top] = value; // Insert the value
        printf("%d pushed to the stack.\n", value);
    }
}

// Function to remove an element from the stack
void pop() {
    // Check for Stack Underflow
    if (top == -1) {
        printf("Stack Underflow! The stack is already empty.\n");
    } else {
        printf("Popped element: %d\n", stack[top]);
        top--; // Move top down by 1
    }
}

// Function to view the top element without removing it
void peek() {
    if (top == -1) {
        printf("The stack is empty.\n");
    } else {
        printf("Top element is: %d\n", stack[top]);
    }
}

// Function to display all elements in the stack
void display() {
    if (top == -1) {
        printf("The stack is empty.\n");
    } else {
        printf("Stack elements (from top to bottom):\n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}