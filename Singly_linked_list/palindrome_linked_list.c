
/*
3. Palindrome Check Variants
Question:
Write a C program to check if a singly linked list is a palindrome.

Sample data:
List: 1 2 2 1

Expected output:
Linked list is a palindrome.
*/
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node* Create_Node(int data);
void Insert_End(struct Node **head,int data);
int Is_Palindrome(struct Node *head);
int main()
{
    struct Node *head = NULL;
    Insert_End(&head,1);
    Insert_End(&head,2);
    Insert_End(&head,2);
    Insert_End(&head,1);
    if(Is_Palindrome(head))
    {
        printf("Linked list is a palindrome.");
    }
    else
    {
        printf("Linked list is not a palindrome.");
    }
    return 0;
}
struct Node* Create_Node(int data)
{
    struct Node *newnode;
    newnode = (struct Node *)malloc(sizeof(struct Node));
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}
void Insert_End(struct Node **head,int data)
{
    struct Node *temp;
    struct Node *newnode;
    newnode = Create_Node(data);
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
int Is_Palindrome(struct Node *head)
{
    int arr[100];
    int count = 0;
    int i;
    struct Node *temp = head;
    while(temp != NULL)
    {
        arr[count] = temp->data;
        count++;
        temp = temp->next;
    }
    for(i = 0; i < count/2; i++)
    {
        if(arr[i] != arr[count-1-i])
        {
            return 0;
        }
    }
    return 1;
}