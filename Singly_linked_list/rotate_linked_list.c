
/*
8. List Rotation Challenges
Question:
Write a C program to rotate a linked list to the right by k places.

Sample data:
List: 1 3 4 7 9
k = 2

Expected output:
Rotated list: 4 7 9 1 3
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
struct Node* RotateRight(struct Node *head,int k);
void Display(struct Node *head);
int main()
{
    struct Node *head = NULL;
    InsertEnd(&head,1);
    InsertEnd(&head,3);
    InsertEnd(&head,4);
    InsertEnd(&head,7);
    InsertEnd(&head,9);
    head = RotateRight(head,2);
    printf("Rotated List: ");
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
struct Node* RotateRight(struct Node *head,int k)
{
    struct Node *temp;
    struct Node *newTail;
    struct Node *newHead;
    int length = 1;
    int i;
    if(head == NULL)
    {
        return NULL;
    }
    temp = head;
    while(temp->next != NULL)
    {
        length++;
        temp = temp->next;
    }
    k = k % length;
    if(k == 0)
    {
        return head;
    }
    temp->next = head;
    newTail = head;
    for(i = 1; i < length - k; i++)
    {
        newTail = newTail->next;
    }
    newHead = newTail->next;
    newTail->next = NULL;
    return newHead;
}
void Display(struct Node *head)
{
    while(head != NULL)
    {
        printf("%d ",head->data);
        head = head->next;
    }
}