/*
Dynamic Memory with Structures
Goal
Understand how to allocate and free memory dynamically for structures, including use cases like linked lists and memory pools in embedded systems.

Activity
Use malloc() to allocate a structure dynamically and assign values to members.
Build a simple singly linked list using structure and pointers.
Implement a queue using structure-based nodes.
Write a memory pool manager that uses an array of structures and a free list.
Tip: Always check malloc() return and release memory using free() after usage.
*/
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void Dynamic_Structure(void);
void Linked_List(void);
void Queue_Demo(void);
int main()
{
    Dynamic_Structure();
    printf("\n");
    Linked_List();
    printf("\n");
    Queue_Demo();   
    return 0;
}

void Dynamic_Structure(void)
{
    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    if(ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }
    ptr->data = 100;
    ptr->next = NULL;
    printf("Dynamic Structure Value = %d\n",ptr->data);
    free(ptr);
}

void Linked_List(void)
{
    struct Node *head;
    struct Node *second;
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    if(head == NULL || second == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }
    head->data = 10;
    head->next = second;
    second->data = 20;
    second->next = NULL;
    printf("Linked List Values:\n");
    printf("%d ",head->data);
    printf("%d\n",second->data);   
    free(head);
    free(second);
}
void Queue_Demo(void)
{
    struct Node *front;
    struct Node *rear;
    front = (struct Node *)malloc(sizeof(struct Node));
    rear = (struct Node *)malloc(sizeof(struct Node));
    if(front == NULL || rear == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }
    front->data = 1;
    front->next = rear;
    rear->data = 2;
    rear->next = NULL;
    printf("Queue Values:\n");
    printf("%d ",front->data);
    printf("%d\n",rear->data);   
    free(front);
    free(rear);
}