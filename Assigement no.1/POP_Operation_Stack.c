#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
int stack [10], top=-1, element;
int main()
{
    int choice;
    do{
        printf("\n\n1. Insert\n2. Delete\n3. Display\n4. Exit");
        scanf("%d", &choice);
        switch(choice)
        {
            case1: push();
            break;
            case2: pop();
            break;
            case3: display();
            break;
            case4: exit(0);
            default: printf("\n Invalid entery. please try again.");

        }

    }
    while (choice!=4);
    return 0;
}