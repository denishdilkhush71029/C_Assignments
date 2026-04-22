#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a node at the beginning
void insertAtBeginning(struct Node** head, int newData) {
    // 1. Allocate memory for the new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    
    // Check for memory allocation failure
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        return;
    }

    // 2. Assign data to the new node
    newNode->data = newData;

    // 3. Make the new node point to the current head
    newNode->next = *head;

    // 4. Update the head to point to the new node
    *head = newNode;
    
    printf("Node inserted with data: %d\n", newData);
}

// Function to print the linked list
void printList(struct Node* head) {
    struct Node* temp = head;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL; // Initialize head as NULL

    // Insert nodes at the beginning
    insertAtBeginning(&head, 10);
    insertAtBeginning(&head, 20);
    insertAtBeginning(&head, 30);

    // Display the list
    printList(head);

    return 0;
}   
