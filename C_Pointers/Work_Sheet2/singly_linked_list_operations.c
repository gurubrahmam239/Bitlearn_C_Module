
/*
Pointer and Linked List
Goal: Implement a singly linked list using pointers for node
 management and dynamic memory allocation.

Activity:

Define a node structure with data and next pointer.
Log Session functions to add nodes at the beginning, end, or
 middle of the list using pointers.
Traverse the list using pointers to access and print data.
Delete nodes and free memory dynamically.
*/

#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void Insert_Beginning(struct Node **head,int data);
void Insert_End(struct Node **head,int data);
void Insert_Position(struct Node **head,int data,int position);
void Delete_Node(struct Node **head,int key);
void Print_List(struct Node *head);
void Free_List(struct Node *head);
int main()
{
    struct Node *head = NULL;
    Insert_Beginning(&head,10);
    Insert_Beginning(&head,5);
    Insert_End(&head,20);
    Insert_End(&head,30);
    Insert_Position(&head,15,3);
    printf("Linked List:\n");
    Print_List(head);
    Delete_Node(&head,20);
    printf("\nAfter deleting node:\n");
    Print_List(head);
    Free_List(head);
    return 0;
}

void Insert_Beginning(struct Node **head,int data)
{
    struct Node *newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    if(newNode == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

void Insert_End(struct Node **head,int data)
{
    struct Node *newNode,*temp;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    if(newNode == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }
    newNode->data = data;
    newNode->next = NULL;
    if(*head == NULL)
    {
        *head = newNode;
        return;
    }
    temp = *head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void Insert_Position(struct Node **head,int data,int position)
{
    struct Node *newNode,*temp;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    if(newNode == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }
    newNode->data = data;
    temp = *head;
    for(int i=1;i<position-1 && temp!=NULL;i++)
    {
        temp = temp->next;
    }
    if(temp == NULL)
    {
        printf("Invalid position\n");
        free(newNode);
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void Delete_Node(struct Node **head,int key)
{
    struct Node *temp = *head;
    struct Node *prev = NULL;
    if(temp != NULL && temp->data == key)
    {
        *head = temp->next;
        free(temp);
        return;
    }
    while(temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }
    if(temp == NULL)
    {
        printf("Node not found\n");
        return;
    }
    prev->next = temp->next;   
    free(temp);
}
void Print_List(struct Node *head)
{
    while(head != NULL)
    {
        printf("%d ",head->data);
        head = head->next;
    }   
    printf("\n");
}
void Free_List(struct Node *head)
{
    struct Node *temp;
    while(head != NULL)
    {
        temp = head;
        head = head->next;        
        free(temp);
    }
}
