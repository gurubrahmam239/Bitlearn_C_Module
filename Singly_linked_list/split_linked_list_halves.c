/*
17. Halving the List Challenges
Question:
Write a C program to split a list into two halves.

Sample data:
List: 1 2 3 4 5 6

Expected output:
First half: 1 2 3
Second half: 4 5 6*/

#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node* CreateNode(int data);
void InsertEnd(struct Node **head,int data);
void SplitList(struct Node *head,struct Node **first,struct Node **second);
void Display(struct Node *head);
int main()
{
    struct Node *head = NULL;
    struct Node *first = NULL;
    struct Node *second = NULL;
    InsertEnd(&head,1);
    InsertEnd(&head,2);
    InsertEnd(&head,3);
    InsertEnd(&head,4);
    InsertEnd(&head,5);
    InsertEnd(&head,6);
    SplitList(head,&first,&second);
    printf("First Half: ");
    Display(first);
    printf("\nSecond Half: ");
    Display(second);
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
void SplitList(struct Node *head,struct Node **first,struct Node **second)
{
    struct Node *slow;
    struct Node *fast;
    slow = head;
    fast = head;
    while(fast->next != NULL &&fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    *first = head;
    *second = slow->next;
    slow->next = NULL;
}
void Display(struct Node *head)
{
    while(head != NULL)
    {
        printf("%d ",head->data);
        head = head->next;
    }
}