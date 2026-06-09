
/*
Exercise 9: Log Session a Linked List with 3 Nodes
Goal: Apply dynamic memory to build a simple linked list.

Activity:

Define a struct for a node with data and next.
Use malloc to create 3 nodes dynamically.
Link the nodes manually.
Traverse and print the list.
Free all nodes after traversal.
*/
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *Create_Node(int data);
void Print_List(struct Node *head);
void Free_List(struct Node *head);
int main()
{
    struct Node *head,*second,*third;
    head = Create_Node(10);
    second = Create_Node(20);
    third = Create_Node(30);
    if(head == NULL || second == NULL || third == NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }
    head->next = second;
    second->next = third;
    third->next = NULL;
    Print_List(head);
    Free_List(head);   
    return 0;
}
struct Node *Create_Node(int data)
{
    struct Node *newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    if(newNode == NULL)
    {
        return NULL;
    }
    newNode->data = data;
    newNode->next = NULL;   
    return newNode;
}
void Print_List(struct Node *head)
{
    struct Node *temp = head;
    printf("Linked list elements are:\n");   
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
}
void Free_List(struct Node *head)
{
    struct Node *temp;   
    while(head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
}