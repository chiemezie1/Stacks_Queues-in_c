#include <stdio.h>
#include <stdlib.h>

void push();
void pop();
void display();

struct node
{
    int data;
    struct node *next;
};
struct node *temp;

int main()
{

    int choice;
    printf("LINKED LIST IMPLEMENTATION USING STACKS\n\n");
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
    int data;
    struct node *pointer = (struct node *)malloc(sizeof(struct node));
    if (pointer == NULL)
    {
        printf("Stack overflow");
    }
    else
    {
        printf("Enter the element to be inserted: ");
        scanf("%d", &data);
        if (temp == NULL)
        {
            pointer->data = data;
            pointer->next = NULL;
            temp = pointer;
        }
        else
        {
            pointer->data = data;
            pointer->next = temp;
            temp = pointer;
        }
    }
}

void pop()
{
    int item;
    struct node *pointer;
    if (temp == NULL)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        item = temp->data;
        pointer = temp;
        temp = temp->next;
        free(pointer);
        printf("The deleted item is %d\n", item);
    }
}
void display()
{
    int i;
    struct node *pointer;
    pointer = temp;
    if (pointer == NULL)
    {
        printf("Stack underflow\n");
    }
    else
    {
        printf("The elements of the stack are:\n");
        while (pointer != NULL)
        {
            printf("%d\n", pointer->data);
            pointer = pointer->next;
        }
    }
}