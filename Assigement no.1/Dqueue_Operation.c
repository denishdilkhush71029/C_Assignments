#include <stdio.h>
#define SIZE 5

int queue[SIZE], front = -1, rear = -1;

// Function to add elements to the queue
void enqueue(int value) {
    if (rear == SIZE - 1) {
        printf("Queue is Full (Overflow)!\n");
    } else {
        if (front == -1) front = 0;
        rear++;
        queue[rear] = value;
        printf("Inserted: %d\n", value);
    }
}

// Function to remove elements from the queue
void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue is Empty (Underflow)!\n");
    } else {
        printf("Dequeued element: %d\n", queue[front]);
        front++;
        
        // Optional: Reset front and rear when queue becomes empty
        if (front > rear) {
            front = rear = -1;
        }
    }
}

// Function to display the current state of the queue
void display() {
    if (front == -1) {
        printf("Queue is Empty\n");
    } else {
        printf("Current Queue: ");
        for (int i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();

    dequeue(); // Removes 10
    display();

    return 0;
}
