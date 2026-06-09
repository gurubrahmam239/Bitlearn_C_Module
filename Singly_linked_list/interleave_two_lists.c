/*
19. Alternate Interleaving Challenges
Question:
Write a C program to interleave two lists alternatively.

Sample data:
List1: 1 3 5
List2: 2 4 6

Expected output:
Result: 1 2 3 4 5 6*/

#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node* CreateNode(int data);
void InsertEnd(struct Node **head,int data);
struct Node* InterleaveLists(struct Node *head1,struct Node *head2);
void Display(struct Node *head);
int main()
{
    struct Node *head1 = NULL;
    struct Node *head2 = NULL;
    struct Node *result = NULL;
    InsertEnd(&head1,1);
    InsertEnd(&head1,3);
    InsertEnd(&head1,5);
    InsertEnd(&head2,2);
    InsertEnd(&head2,4);
    InsertEnd(&head2,6);
    result = InterleaveLists(head1,head2);
    printf("Result: ");
    Display(result);
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
struct Node* InterleaveLists(struct Node *head1,struct Node *head2)
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