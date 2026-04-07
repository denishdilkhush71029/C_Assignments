#include <stdio.h>
#include <stdlib.h> // Necessary for exit()

void push();
void pop();
void display();

int stack[10], top = -1, element;

int main() // Changed from void main() to int main() for standard compliance
{
    int ch;
    do {
        printf("\n\n1. Insert\n2. Delete\n3. Display\n4. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &ch); // Added scanf to capture the user's choice

        switch(ch)
        {
            case 1: push(); // Added space between 'case' and the number
                break;
            case 2: pop();
                break;
            case 3: display();
                break;
            case 4: exit(0); // exit() requires an integer argument
                break;
            default: printf("\nInvalid entry. Please try again.\n");
        }
    } while(ch != 4);
    
    return 0;
}

void push()
{
    if(top == 9)
        printf("\nStack Overflow! (Stack is full)");
    else {
        printf("\nEnter element: ");
        scanf("%d", &element);
        top++;
        stack[top] = element;
        printf("\nElement inserted = %d", element);
    }
}

void pop()
{
    if(top == -1)
        printf("\nStack Underflow! (Stack is empty)");
    else {
        element = stack[top];
        top--;
        printf("\nElement deleted = %d", element);
    }
}

void display()
{
    int i;
    if(top == -1)
        printf("\nStack is Empty.");
    else {
        printf("\nCurrent Stack:\n");
        for(i = top; i >= 0; i--)
            printf("%d\n", stack[i]);
    }
}