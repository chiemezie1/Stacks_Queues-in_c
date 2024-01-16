// pop.c
#include <stdio.h>
#include "stack.h"

int main(void)
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        pop();
    }

    return 0;
}

void pop()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Popped element: %d\n", stack[top]);
        top--;
    }
}
