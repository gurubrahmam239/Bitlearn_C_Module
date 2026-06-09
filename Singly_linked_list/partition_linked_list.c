/*
6. Partitioning with Dual Pivots
Question:
Write a C program to partition a linked list around a value x.

Sample data:
List: 3 5 7 5 9 2 1
x = 5

Expected output:
Reordered list: 3 2 1 5 7 5 9
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
struct Node* PartitionList(struct Node *head,int x);
void Display(struct Node *head);
int main()
{
    struct Node *head = NULL;
    InsertEnd(&head,3);
    InsertEnd(&head,5);
    InsertEnd(&head,7);
    InsertEnd(&head,5);
    InsertEnd(&head,9);
    InsertEnd(&head,2);
    InsertEnd(&head,1);
    head = PartitionList(head,5);
    printf("Reordered List: ");
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
struct Node* PartitionList(struct Node *head,int x)
{
    struct Node *small = NULL;
    struct Node *large = NULL;
    struct Node *smallTail = NULL;
    struct Node *largeTail = NULL;
    struct Node *temp = head;
    while(temp != NULL)
    {
        if(temp->data < x)
        {
            if(small == NULL)
            {
                small = temp;
                smallTail = temp;
            }
            else
            {
                smallTail->next = temp;
                smallTail = temp;
            }
        }
        else
        {
            if(large == NULL)
            {
                large = temp;
                largeTail = temp;
            }
            else
            {
                largeTail->next = temp;
                largeTail = temp;
            }
        }
        temp = temp->next;
    }
    if(largeTail != NULL)
    {
        largeTail->next = NULL;
    }
    if(small == NULL)
    {
        return large;
    }
    smallTail->next = large;
    return small;
}
void Display(struct Node *head)
{
    while(head != NULL)
    {
        printf("%d ",head->data);
        head = head->next;
    }
}