#include <stdio.h>
#include <stdlib.h>

#define LIMIT 100

void push(int stack[], int *top, int element);

int main(void)
{
    int stack[LIMIT];
    int top = -1;
    int element;

    if (top == LIMIT - 1)
    {
        printf("Stack is full");
    }
    else
    {
        printf("Enter the element to be inserted:");
        scanf("%d", &element);
        push(stack, &top, element);
    }

    return 0;
}

void push(int stack[], int *top, int element)
{
    *top = *top + 1;
    stack[*top] = element;
}
