/*
16. Alternate K-Node Reversal Challenges
Question:
Write a C program to reverse alternate k nodes.

Sample data:
List: 1 2 3 4 5 6 7 8
k = 2

Expected output:
Reversed: 2 1 3 4 6 5 7 8*/

#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node* CreateNode(int data);
void InsertEnd(struct Node **head,int data);
void ReverseAlternateK(struct Node *head,int k);
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
    InsertEnd(&head,7);
    InsertEnd(&head,8);
    ReverseAlternateK(head,2);
    printf("Reversed List: ");
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
void ReverseAlternateK(struct Node *head,int k)
{
    int arr[100];
    int count = 0;
    int i,j,temp;
    int reverse = 1;
    struct Node *ptr = head;
    while(ptr != NULL)
    {
        arr[count++] = ptr->data;
        ptr = ptr->next;
    }
    for(i = 0; i < count; i += k)
    {
        if(reverse)
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
        reverse = !reverse;
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