/*
9. Kth Node Swapping Variants
Question:
Write a C program to swap Kth node from beginning and end.

Sample data:
List: 1 2 3 4 5
k = 2
Expected output:
Swapped list: 1 4 3 2 5
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
void SwapKthNode(struct Node *head,int k);
void Display(struct Node *head);
int main()
{
    struct Node *head = NULL;
    InsertEnd(&head,1);
    InsertEnd(&head,2);
    InsertEnd(&head,3);
    InsertEnd(&head,4);
    InsertEnd(&head,5);
    SwapKthNode(head,2);
    printf("Swapped List: ");
    Display(head);
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
void SwapKthNode(struct Node *head,int k)
{
    struct Node *first;
    struct Node *second;
    int count = 0;
    int i;
    int temp;
    first = head;
    while(first != NULL)
    {
        count++;
        first = first->next;
    }
    first = head;
    for(i = 1; i < k; i++)
    {
        first = first->next;
    }
    second = head;
    for(i = 1; i < count-k+1; i++)
    {
        second = second->next;
    }
    temp = first->data;
    first->data = second->data;
    second->data = temp;
}
void Display(struct Node *head)
{
    while(head != NULL)
    {
        printf("%d ",head->data);
        head = head->next;
    }
}