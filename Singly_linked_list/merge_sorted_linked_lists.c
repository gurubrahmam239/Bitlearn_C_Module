
/*
1. Merge Sorted Lists Challenges
Question:
Write a C program to merge two sorted singly linked lists into a single sorted linked list.

Sample data:
List 1: 1 3 5 7
List 2: 2 4 6

Expected output:
Merged list: 1 2 3 4 5 6 
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
struct Node* Merge_Lists(struct Node *list1,struct Node *list2);
void Display(struct Node *head);
int main()
{
    struct Node *list1 = NULL;
    struct Node *list2 = NULL;
    struct Node *merged = NULL;
    Insert_End(&list1,1);
    Insert_End(&list1,3);
    Insert_End(&list1,5);
    Insert_End(&list1,7);
    Insert_End(&list2,2);
    Insert_End(&list2,4);
    Insert_End(&list2,6);
    merged = Merge_Lists(list1,list2);
    printf("Merged List: ");
    Display(merged);
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
    struct Node *newnode;
    struct Node *temp;
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
struct Node* Merge_Lists(struct Node *list1,struct Node *list2)
{
    struct Node *merged = NULL;
    struct Node *tail = NULL;
    struct Node *temp;
    while(list1 != NULL && list2 != NULL)
    {
        if(list1->data < list2->data)
        {
            temp = list1;
            list1 = list1->next;
        }
        else
        {
            temp = list2;
            list2 = list2->next;
        }
        if(merged == NULL)
        {
            merged = temp;
            tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
    }
    if(list1 != NULL)
    {
        tail->next = list1;
    }
    if(list2 != NULL)
    {
        tail->next = list2;
    }
    return merged;
}
void Display(struct Node *head)
{
    while(head != NULL)
    {
        printf("%d ",head->data);
        head = head->next;
    }
}