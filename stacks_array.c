#include <stdio.h>
#include <stdlib.h>
#define LIMIT 100 // Specifying the maximum limit of the stack

/* Global declaration of variables */
int stack[LIMIT]; 
int top;
int i;
int choice;
void push();
void pop();
void display();

int main()
{
    
    printf("ARRAY IMPLEMENTATION USING STACKS\n\n");
    top = -1;
    do
    {
        printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n\n");
        printf("Enter your choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Sorry, invalid choice!\n");
            break;
        }
    } while (choice != 4);
    return 0;
}
void push()
{
    int element;
    if (top == LIMIT - 1)
    {
        printf("Stack underflow\n");
    }
    else
    {
        printf("Enter the element to be inserted:");
        scanf("%d", &element);
        top++;
        stack[top] = element;
    }
}
void pop()
{
    int element;
    if (top == -1)
    {
        printf("Stack underflow\n");
    }
    else
    {
        element = stack[top];
        printf("The deleted item is %d\n", stack[top]);
        top--; // The element below the topmost element is deleted
    }
}
void display()
{
    if (top == -1)
    {
        printf("Stack underflow\n"); // Stack is empty
    }
    else if (top > 0)
    {
        printf("The elements of the stack are:\n");
        for (i = top; i >= 0; i--) // top to bottom traversal
        {
            printf("%d\n", stack[i]);
        }
    }
}