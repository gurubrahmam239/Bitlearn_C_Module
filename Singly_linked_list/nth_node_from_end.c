
/*
11. Nth Node from End Variants
Question:
Write a C program to retrieve the nth node from the end.

Sample data:
List: 1 3 5 11
n = 3

Expected output:
Result: 3
*/

#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node* CreateNode(int data);
void InsertEnd(struct Node **head,int data);
int NthNodeFromEnd(struct Node *head,int n);
int main()
{
    struct Node *head = NULL;
    InsertEnd(&head,1);
    InsertEnd(&head,3);
    InsertEnd(&head,5);
    InsertEnd(&head,11);
    printf("Result: %d",NthNodeFromEnd(head,3));
    return 0;
}
struct Node* CreateNode(int data)
{
    struct Node *newnode;
    newnode = (struct Node *)malloc(sizeof(struct Node));
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
int NthNodeFromEnd(struct Node *head,int n)
{
    struct Node *temp;
    int count = 0;
    int i;
    temp = head;
    while(temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    temp = head;
    for(i = 1; i < count - n + 1; i++)
    {
        temp = temp->next;
    }
    return temp->data;
}