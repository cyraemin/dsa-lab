#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *start = NULL;

void insert(int value)
{
    struct Node *newNode, *temp;

    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (start == NULL)
    {
        start = newNode;
    }
    else
    {
        temp = start;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newNode;
    }
}

void display()
{
    struct Node *temp = start;

    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

void reverse()
{
    struct Node *prev, *curr, *next;

    prev = NULL;
    curr = start;

    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    start = prev;
}

int main()
{
    insert(10);
    insert(20);
    insert(30);
    insert(40);

    printf("Original Linked List: ");
    display();

    reverse();

    printf("Reversed Linked List: ");
    display();

    return 0;
}