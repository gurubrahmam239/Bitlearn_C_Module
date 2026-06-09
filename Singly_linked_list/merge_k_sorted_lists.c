/*
12. Merging K Sorted Lists Challenges
Question:
Write a C program to merge K sorted linked lists.

Sample data:
List-1: 10 20 50
List-2: 30 40 60
List-3: 10 70 100

Expected output:
Merged list: 10 10 20 30 40 50 60 70 100
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
    /* List 1 */
    InsertEnd(&head,10);
    InsertEnd(&head,20);
    InsertEnd(&head,50);
    /* List 2 */
    InsertEnd(&head,30);
    InsertEnd(&head,40);
    InsertEnd(&head,60);
    /* List 3 */
    InsertEnd(&head,10);
    InsertEnd(&head,70);
    InsertEnd(&head,100);
    SortList(head);
    printf("Merged List: ");
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