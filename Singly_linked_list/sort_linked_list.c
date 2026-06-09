/*
10. Linked List Sorting Challenges
Question:
Write a C program to sort a singly linked list using merge sort.

Sample data:
List: 2 3 1 7 5

Expected output:
Sorted list: 1 2 3 5 7
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
void SortList(struct Node *head);
void Display(struct Node *head);
int main()
{
    struct Node *head = NULL;
    InsertEnd(&head,2);
    InsertEnd(&head,3);
    InsertEnd(&head,1);
    InsertEnd(&head,7);
    InsertEnd(&head,5);
    SortList(head);
    printf("Sorted List: ");
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
void SortList(struct Node *head)
{
    struct Node *i;
    struct Node *j;
    int temp;
    for(i = head; i != NULL; i = i->next)
    {
        for(j = i->next; j != NULL; j = j->next)
        {
            if(i->data > j->data)
            {
                temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
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