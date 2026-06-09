/*
18. Alternate Node Merging Challenges
Question:
Write a C program to merge alternate nodes of two linked lists.

Sample data:
List1: 9 7 5
List2: 10 8 6

Expected output:
Merged list: 9 10 7 8 5 6*/

#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node* CreateNode(int data);
void InsertEnd(struct Node **head,int data);
struct Node* MergeAlternate(struct Node *head1,struct Node *head2);
void Display(struct Node *head);
int main()
{
    struct Node *head1 = NULL;
    struct Node *head2 = NULL;
    struct Node *merged = NULL;
    InsertEnd(&head1,9);
    InsertEnd(&head1,7);
    InsertEnd(&head1,5);
    InsertEnd(&head2,10);
    InsertEnd(&head2,8);
    InsertEnd(&head2,6);
    merged = MergeAlternate(head1,head2);
    printf("Merged List: ");
    Display(merged);
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
struct Node* MergeAlternate(struct Node *head1,struct Node *head2)
{
    struct Node *head = NULL;
    struct Node *tail = NULL;
    struct Node *temp;
    while(head1 != NULL || head2 != NULL)
    {
        if(head1 != NULL)
        {
            temp = head1;
            head1 = head1->next;
            if(head == NULL)
            {
                head = temp;
                tail = temp;
            }
            else
            {
                tail->next = temp;
                tail = temp;
            }
        }
        if(head2 != NULL)
        {
            temp = head2;
            head2 = head2->next;

            tail->next = temp;
            tail = temp;
        }
    }
    tail->next = NULL;
    return head;
}
void Display(struct Node *head)
{
    while(head != NULL)
    {
        printf("%d ",head->data);
        head = head->next;
    }
}