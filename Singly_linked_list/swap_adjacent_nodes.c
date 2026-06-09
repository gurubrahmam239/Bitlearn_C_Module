/*
20. Adjacent Node Swapping Variants
Question:
Write a C program to swap every two adjacent nodes.

Sample data:
List: 1 2 3 4 5

Expected output:
Swapped list: 2 1 4 3 5*/

#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node* CreateNode(int data);
void InsertEnd(struct Node **head,int data);
void SwapAdjacentNodes(struct Node *head);
void Display(struct Node *head);
int main()
{
    struct Node *head = NULL;
    InsertEnd(&head,1);
    InsertEnd(&head,2);
    InsertEnd(&head,3);
    InsertEnd(&head,4);
    InsertEnd(&head,5);
    SwapAdjacentNodes(head);
    printf("Swapped List: ");
    Display(head);
    return 0;
}
struct Node* CreateNode(int data)
{
    struct Node *newnode;
    newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}
void InsertEnd(struct Node **head,int data)
{
    struct Node *temp;
    struct Node *newnode;
    newnode = CreateNode(data);
    if(*head == NULL)
    {
        *head = newnode;
        return;
    }
    temp = *head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}
void SwapAdjacentNodes(struct Node *head)
{
    struct Node *first;
    struct Node *second;
    int temp;
    first = head;
    while(first != NULL && first->next != NULL)
    {
        second = first->next;

        temp = first->data;
        first->data = second->data;
        second->data = temp;

        first = second->next;
    }
}
void Display(struct Node *head)
{
    while(head != NULL)
    {
        printf("%d ",head->data);
        head = head->next;
    }
}