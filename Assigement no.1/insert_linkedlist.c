#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void insertEnd(struct Node **head, int data) {
    // 1. Create new node
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    // 2. If list is empty, new node is the head
    if (*head == NULL) {
        *head = newNode;
        return;
    }

    // 3. Traverse to the last node
    struct Node *temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    // 4. Link the last node to the new node
    temp->next = newNode;
}

// Helper to print list
void printList(struct Node *node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node *head = NULL;
    insertEnd(&head, 10);
    insertEnd(&head, 20);
    insertEnd(&head, 30);
    printList(head);
    return 0;
}   