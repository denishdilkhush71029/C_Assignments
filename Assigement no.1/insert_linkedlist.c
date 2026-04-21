#include <stdio.h>
#include <stdlib.h>

// Structure definition for a node
struct Node {
    int data;
    struct Node *next;
};

// Function to insert a node at the end of the linked list
void insertAtEnd(struct Node **head, int newData) {
    // 1. Allocate memory for the new node
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    
    // Check for memory allocation failure
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }

    // 2. Assign data to the new node
    newNode->data = newData;
    
    // 3. The new node will be the last, so its next pointer is NULL
    newNode->next = NULL;

    // 4. If the list is empty, make the new node the head
    if (*head == NULL) {
        *head = newNode;
        return;
    }

    // 5. Otherwise, traverse to the last node
    struct Node *temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    // 6. Link the last node to the new node
    temp->next = newNode;
}

// Function to print the linked list
void printList(struct Node *node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node *head = NULL;

    // Insert nodes at the end
    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);

    // Print the resulting list
    printf("Linked List: ");
    printList(head);

    return 0;
}   