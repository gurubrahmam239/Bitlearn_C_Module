
/*
5. Intersection Finder Variants
Question:
Write a C program to find the intersection point of two singly linked lists.

Sample data:
List A: 1 2 → 3 4
List B: 5 → 3 4

Expected output:
Intersection found at node with data: 3
*/
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node* CreateNode(int data);
void Display(struct Node *head);
struct Node* FindIntersection(struct Node *head1,struct Node *head2);
int main()
{
    struct Node *head1;
    struct Node *head2;
    struct Node *common1;
    struct Node *common2;
    struct Node *result;
    head1 = CreateNode(1);
    head1->next = CreateNode(2);
    common1 = CreateNode(3);
    common2 = CreateNode(4);
    head1->next->next = common1;
    common1->next = common2;
    head2 = CreateNode(5);
    head2->next = common1;
    result = FindIntersection(head1,head2);
    if(result != NULL)
    {
        printf("Intersection found at node with data: %d",result->data);
    }
    else
    {
        printf("No intersection found");
    }
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
struct Node* FindIntersection(struct Node *head1,struct Node *head2)
{
    struct Node *temp1;
    struct Node *temp2;
    temp1 = head1;
    while(temp1 != NULL)
    {
        temp2 = head2;
        while(temp2 != NULL)
        {
            if(temp1 == temp2)
            {
                return temp1;
            }
            temp2 = temp2->next;
        }
        temp1 = temp1->next;
    }
    return NULL;
}