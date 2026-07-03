#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

typedef struct {
    int items[SIZE];
    int front;
    int rear;
} CircularQueue;

CircularQueue* createQueue() {
    CircularQueue* queue = (CircularQueue*)malloc(sizeof(CircularQueue));
    queue->front = -1;
    queue->rear = -1;
    return queue;
}
int enqueue(CircularQueue* queue, int value) {
   if (queue->front == -1 && queue->rear ==  -1)
   {
        queue->front = 0;
        queue->rear = 0;
        queue->items[queue->rear] = value;
        return 0;
   }
   else if ((queue->rear + 1) % SIZE == queue->front) {
        printf("Queue is full\n");
        return -1;
    } else {
        queue->rear = (queue->rear + 1) % SIZE;
        queue->items[queue->rear] = value;
        return 0;
    }
   }

int dequeue(CircularQueue* queue)
 {
    if (queue->front == -1 && queue->rear ==  -1)
    {
        printf("Queue is empty\n");
        return -1;
    }
    else if(queue->front == queue->rear)
     {
        int value = queue->items[queue->front];
        queue->front = -1;
        queue->rear = -1;
        return value;
    } 
    else {
        int value = queue->items[queue->front];
        queue->front = (queue->front + 1) % SIZE;
        return value;
    }
}
int peek(CircularQueue* queue) {
    if (queue->front == -1) {
        printf("Queue is empty\n");
        return -1;
    }
    return queue->items[queue->front];
}
int display(CircularQueue* queue) {
    if (queue->front == -1) {
        printf("Queue is empty\n");
        return -1;
    }
    printf("Queue elements: ");
    for (int i = queue->front; i != queue->rear; i = (i + 1) % SIZE) {
        printf("%d ", queue->items[i]);
    }
    printf("\n");
    return 0;
}
int deleteQueue(CircularQueue* queue) {
    if (queue == NULL) {
        return -1;
    }
    free(queue);
    return 0;
}
int main() {
    CircularQueue* queue = createQueue();
    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);
    enqueue(queue, 40);
    enqueue(queue, 50);
    display(queue);
    printf("Dequeued: %d\n", dequeue(queue));
    display(queue);
    printf("Peek: %d\n", peek(queue));
    enqueue(queue, 60);
    display(queue);
    deleteQueue(queue);
    return 0;
}