#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *start = NULL;
void insert(int value)
{
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;

    if (start == NULL)
    {
        start = newNode;
    }
    else
    {
        Node *temp = start;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newNode;
    }
}

void display()
{
    Node *temp = start;

    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

void reverse()
{
    Node *prev = NULL;
    Node *curr = start;
    Node *next = NULL;

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
    cout << "Original Linked List: ";
    display();

    reverse();

    cout << "Reversed Linked List: ";
    display();

    return 0;
}