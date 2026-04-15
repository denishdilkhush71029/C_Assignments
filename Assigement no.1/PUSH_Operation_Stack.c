#include <stdio.h>
#define MAX 5 // Maximum size of the stack

int stack[MAX];
int top = -1; // Initialize top to -1 indicating empty stack

void push(int value) {
    if (top == MAX - 1) {
        printf("Stack Overflow: Cannot push %d, stack is full.\n", value);
    } else {
        top++;
        stack[top] = value;
        printf("Successfully pushed %d onto the stack.\n", value);
    }
}

int main() {
    push(10);
    push(20);
    push(30);
    
    return 0;
}