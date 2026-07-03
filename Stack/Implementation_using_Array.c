#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int top;
    int capacity;
    int *arr;
}stack;

stack* createstack(int capacity)
{
    stack *s =  (stack*)malloc(sizeof(stack));
    s->capacity = capacity;
    s->top = -1;
    s->arr = (int *)malloc(capacity * sizeof(int));
    return s;
}
int push(stack *s,int data)
{
   if(s->top == s->capacity - 1)
    {
        printf("Stack Overflow\n");
        return -1;
    }
    s->arr[++s->top] = data;
    return 0;
}
int pop(stack *s)
{
    if(s->top == -1)
    {
        printf("Stack Underflow\n");
        return -1;
    }
    return s->arr[s->top--];
}
int peek(stack *s)
{
    if(s->top == -1)
    {
        printf("Stack is empty\n");
        return -1;
    }
    return s->arr[s->top];
}

int display(stack *s)
{
    if(s->top == -1)
    {
        printf("Stack is empty\n");
        return -1;
    }
    for(int i = s->top; i >= 0; i--)
    {
        printf("%d ", s->arr[i]);
    }
    printf("\n");
    return 0;
}

int size(stack *s)
{
    return s->top + 1;
}
int deleteStack(stack *s)
{
    if(s == NULL)
        return -1;
    free(s->arr);
    free(s);
    return 0;
}

int main()
{
    stack *s = createstack(5);
    push(s, 10);
    push(s, 20);
    push(s, 30);
   
    printf("Top element is %d\n", peek(s));
    printf("Stack size is %d\n", size(s));

    pop(s);
    display(s);
    deleteStack(s);

    return 0;
}