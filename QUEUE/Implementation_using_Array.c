#include <stdio.h>
#include <stdlib.h>

typedef struct Queue {
    int front, rear;
    unsigned capacity;
    int* arr;
} Queue;

Queue* createQueue(unsigned capacity) {
    Queue* queue = (Queue*)malloc(sizeof(Queue));
    queue->capacity = capacity;
    queue->front = -1;
    queue->rear =- 1;
    queue->arr = (int*)malloc(queue->capacity * sizeof(int));
    return queue;
}

int enqueue(Queue* queue, int item) {
    if (queue->rear == queue->capacity - 1) {
        printf("Queue is full!");
        return -1;
    }
    else if(queue->front == -1 && queue->rear == -1) {
        queue->front = 0;
        queue->rear = 0;
        queue->arr[queue->rear] = item;
    }
    else {
        queue->rear++;
        queue->arr[queue->rear] = item;
    }
    return 0; 
}
int dequeue(Queue* queue) {
    if (queue->front == -1 && queue->rear == -1) {
        printf("Queue is empty!");
        return -1;
    }
    else if (queue->front == queue->rear) {
        int item = queue->arr[queue->front];
        queue->front = -1;
        queue->rear = -1;
        return item;
    }
    else {
        int item = queue->arr[queue->front];
        queue->front++;
        return item;
    }
}
int peek(Queue* queue) {
    if (queue->front == -1 && queue->rear == -1) {
        printf("Queue is empty!");
        return -1;
    }
    else {
        return queue->arr[queue->front];
    }
}
int capacity(Queue* queue) {
    return queue->capacity;
}
int display(Queue* queue) {
    if (queue->front == -1 && queue->rear == -1) {
        printf("Queue is empty!");
        return -1;
    }
    else {
        printf("Queue elements are: ");
        for (int i = queue->front; i <= queue->rear; i++) {
            printf("%d ", queue->arr[i]);
        }
        printf("\n");
        return 0;
    }
}
int deleteQueue(Queue* queue) {
    free(queue->arr);
    free(queue);
    return 0;
}
int main() {
    Queue* queue = createQueue(10);
    enqueue(queue, 1);
    enqueue(queue, 2);
    enqueue(queue, 3);
    enqueue(queue, 4);

    printf("The top element of the queue is: %d\n", peek(queue));
    printf("The capacity of the queue is: %d\n", capacity(queue));

    printf("The dequeued element is %d\n", dequeue(queue));
    display(queue);
    deleteQueue(queue);
    return 0;
}