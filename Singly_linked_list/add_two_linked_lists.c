
/*
7. Linked List Addition Variants
Question:
Write a C program to add two numbers represented by linked lists.

Sample data:
List 1: 8 7 9 2
List 2: 2 1 2 3

Expected output:
Result: 0 9 1 6 (carry handled)
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
struct Node* AddLists(struct Node *head1,struct Node *head2);
void Display(struct Node *head);
int main()
{
    struct Node *head1 = NULL;
    struct Node *head2 = NULL;
    struct Node *result = NULL;
    InsertEnd(&head1,8);
    InsertEnd(&head1,7);
    InsertEnd(&head1,9);
    InsertEnd(&head1,2);
    InsertEnd(&head2,2);
    InsertEnd(&head2,1);
    InsertEnd(&head2,2);
    InsertEnd(&head2,3);
    result = AddLists(head1,head2);
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
struct Node* AddLists(struct Node *head1,struct Node *head2)
{
    struct Node *result = NULL;
    int carry = 0;
    int sum;
    while(head1 != NULL ||head2 != NULL ||carry != 0)
    {
        sum = carry;
        if(head1 != NULL)
        {
            sum += head1->data;
            head1 = head1->next;
        }
        if(head2 != NULL)
        {
            sum += head2->data;
            head2 = head2->next;
        }
        InsertEnd(&result,sum % 10);
        carry = sum / 10;
    }
    return result;
}
void Display(struct Node *head)
{
    while(head != NULL)
    {
        printf("%d ",head->data);
        head = head->next;
    }
}