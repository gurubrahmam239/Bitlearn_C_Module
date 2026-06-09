/*
15. Block Reversal Variants
Question:
Write a C program to reverse nodes in blocks of size k.

Sample data:
List: 1 2 3 4 5 6
k = 3

Expected output:
Reversed: 3 2 1 6 5 4*/

#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node* CreateNode(int data);
void InsertEnd(struct Node **head,int data);
void ReverseInBlocks(struct Node *head,int k);
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
    ReverseInBlocks(head,3);
    printf("Reversed List: ");
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
void ReverseInBlocks(struct Node *head,int k)
{
    int arr[100];
    int count = 0;
    int i,j,temp;
    struct Node *ptr = head;
    while(ptr != NULL)
    {
        arr[count++] = ptr->data;
        ptr = ptr->next;
    }
    for(i = 0; i < count; i += k)
    {
        int start = i;
        int end = i + k - 1;
        if(end >= count)
        {
            end = count - 1;
        }
        while(start < end)
        {
            temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;

            start++;
            end--;
        }
    }
    ptr = head;
    for(i = 0; i < count; i++)
    {
        ptr->data = arr[i];
        ptr = ptr->next;
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