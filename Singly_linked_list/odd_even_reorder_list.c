
/*
13. Reordering by Parity Challenges
Question:
Write a C program to place all even-numbered nodes after odd-numbered nodes.
Sample data:
List: 1 2 3 4 5 6
Expected output:
Reordered list: 1 3 5 2 4 6*/

#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node* CreateNode(int data);
void InsertEnd(struct Node **head,int data);
struct Node* RearrangeList(struct Node *head);
void Display(struct Node *head);
int main()
{
    struct Node *head = NULL;
    InsertEnd(&head,1);
    InsertEnd(&head,2);
    InsertEnd(&head,3);
    InsertEnd(&head,4);
    InsertEnd(&head,5);
    InsertEnd(&head,6);
    head = RearrangeList(head);
    printf("Reordered List: ");
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
struct Node* RearrangeList(struct Node *head)
{
    struct Node *oddHead = NULL;
    struct Node *oddTail = NULL;
    struct Node *evenHead = NULL;
    struct Node *evenTail = NULL;
    struct Node *temp = head;
    while(temp != NULL)
    {
        if(temp->data % 2 != 0)
        {
            if(oddHead == NULL)
            {
                oddHead = temp;
                oddTail = temp;
            }
            else
            {
                oddTail->next = temp;
                oddTail = temp;
            }
        }
        else
        {
            if(evenHead == NULL)
            {
                evenHead = temp;
                evenTail = temp;
            }
            else
            {
                evenTail->next = temp;
                evenTail = temp;
            }
        }
        temp = temp->next;
    }
    if(evenTail != NULL)
    {
        evenTail->next = NULL;
    }
    if(oddTail != NULL)
    {
        oddTail->next = evenHead;
    }
    return oddHead;
}
void Display(struct Node *head)
{
    while(head != NULL)
    {
        printf("%d ",head->data);
        head = head->next;
    }
}