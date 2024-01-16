// push.c
#include <stdio.h>
#include "stack.h"

int main(void)
{
    int element;

    printf("Enter the element to be inserted:");
    scanf("%d", &element);
    push(element);

    return 0;
}

void push(int element)
{
    if (top == LIMIT - 1)
    {
        printf("Stack is full\n");
    }
    else
    {
        top++;
        stack[top] = element;
    }
}
