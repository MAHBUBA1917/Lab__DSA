#include <stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *top = 0;

void push(int x)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = top;
    top = newnode;
}
void display()
{
    struct node *temp;
    temp = top;
    if (top == 0)
    {
        printf("There is no element push yet!\n");
    }
    else
    {
        printf("The linkedlist element are: ");
        while (temp != 0)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
}
void peak()
{
    if (top == 0)
    {
        printf("\nThere is no element push yet!\n");
    }
    else
    {
        printf("\nThe top element is %d  \n", top->data);
    }
}
void pop()
{
    struct node *temp;
    temp = top;
    if (top == 0)
    {
        printf("There is no element push yet!\n");
    }
    else
    {
        printf("The poped element is %d \n", top->data);
        top = top->next;
        free(temp);
    }
}
int main()
{
    push(2);
    push(3);
    push(5);
    push(6);
    display();
    peak();
    pop();
    peak();
    display();

    return 0;
}