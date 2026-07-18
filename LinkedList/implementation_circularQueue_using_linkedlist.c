#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *front = 0;
struct node *rear = 0;
void enqueue(int x)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = 0;
    if (rear == 0)
    {
        front = newnode;
        rear = newnode;
        rear->next = front;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
        rear->next = front;
    }
}
void dequeue()
{
    struct node *temp;
    temp = front;
    if (front == 0 && rear == 0)
    {
        printf("\nthe Queue is empty!");
    }
    else if (front == rear)
    {
        front = 0;
        rear = 0;
        free(temp);
    }
    else
    {
        printf("\nThe deleted element is %d", front->data);
        front = front->next;

        rear->next = front;
        free(temp);
    }
}
void peak()
{
    if (front == 0 && rear == 0)
    {
        printf("\nThe queue is empty!");
    }
    else
    {
        printf("\nThe peak element is %d", front->data);
    }
}
void display()
{
    struct node *temp;
    temp = front;
    if (front == 0 && rear == 0)
    {
        printf("\nThe queue is empty!");
    }
    else
    {
        printf("\nTHE QUEUE ELEMENTS ARE: ");
        while (temp->next != front)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("%d", temp->data);
    }
}
int main()
{
    enqueue(3);
    enqueue(4);
    enqueue(3);
    enqueue(6);
    display();
    dequeue();
    peak();
    display();

    return 0;
}