#include <stdio.h>
#include <stdlib.h>

#define MAX 100

// Define Stack structure
struct Stack {
    int top;
    int items[MAX];
};

// Standard Stack Operations
void push(struct Stack* s, int x) {
    if (s->top == MAX - 1) return;
    s->items[++(s->top)] = x;
}

int pop(struct Stack* s) {
    if (s->top == -1) return -1;
    return s->items[(s->top)--];
}

// Queue Implementation using two Stacks
struct Queue {
    struct Stack s1, s2;
};

// Implement Enqueue operation (Costly: O(n))
void enqueue(struct Queue* q, int x) {
    // 1. Move all elements from s1 to s2
    while (q->s1.top != -1) {
        push(&q->s2, pop(&q->s1));
    }

    // 2. Push new item into s1
    push(&q->s1, x);

    // 3. Move everything back to s1
    while (q->s2.top != -1) {
        push(&q->s1, pop(&q->s2));
    }
    printf("Enqueued: %d\n", x);
}

// Simple Dequeue operation (O(1))
int dequeue(struct Queue* q) {
    if (q->s1.top == -1) {
        printf("Queue Empty\n");
        return -1;
    }
    return pop(&q->s1);
}

int main() {
    struct Queue q;
    q.s1.top = -1;
    q.s2.top = -1;

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);

    printf("Dequeued: %d\n", dequeue(&q)); // Should return 10
    printf("Dequeued: %d\n", dequeue(&q)); // Should return 20

    return 0;
}
