
/*
4. Copy with Random Pointers Challenges
Question:
Write a C program to create a deep copy of a singly linked list where each node has a random pointer.

Sample data:
List: 1 2 3 5 7
Random pointers: 1→3, 2→5, 3→7, 5→1, 7→3

Expected output:
New list with same data and random pointers correctly mapped.
*/
#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *random;
};

struct Node* CreateNode(int data);
void InsertEnd(struct Node **head,int data);
struct Node* DeepCopy(struct Node *head);
void Display(struct Node *head);

int main()
{
    struct Node *head = NULL;
    struct Node *copy = NULL;

    InsertEnd(&head,1);
    InsertEnd(&head,2);
    InsertEnd(&head,3);
    InsertEnd(&head,5);
    InsertEnd(&head,7);
    /* Setting random pointers */
    head->random = head->next->next;                    //1->3
    head->next->random = head->next->next->next;       //2->5
    head->next->next->random = head->next->next->next->next; //3->7
    head->next->next->next->random = head;             //5->1
    head->next->next->next->next->random = head->next->next; //7->3
    copy = DeepCopy(head);
    printf("Copied List:\n");
    Display(copy);
    return 0;
}
struct Node* CreateNode(int data)
{
    struct Node *newnode;
    newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = data;
    newnode->next = NULL;
    newnode->random = NULL;
    return newnode;
}
void InsertEnd(struct Node **head,int data)
{
    struct Node *newnode = CreateNode(data);
    struct Node *temp;
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
struct Node* DeepCopy(struct Node *head)
{
    struct Node *original[100];
    struct Node *copied[100];
    struct Node *temp = head;
    struct Node *copyHead = NULL;
    struct Node *copyTail = NULL;
    int count = 0;
    int i,j;
    while(temp != NULL)
    {
        original[count] = temp;
        copied[count] = CreateNode(temp->data);
        if(copyHead == NULL)
        {
            copyHead = copied[count];
            copyTail = copied[count];
        }
        else
        {
            copyTail->next = copied[count];
            copyTail = copied[count];
        }
        count++;
        temp = temp->next;
    }
    for(i=0;i<count;i++)
    {
        for(j=0;j<count;j++)
        {
            if(original[i]->random == original[j])
            {
                copied[i]->random = copied[j];
            }
        }
    }
    return copyHead;
}
void Display(struct Node *head)
{
    while(head != NULL)
    {
        printf("Data = %d  ",head->data);
        if(head->random != NULL)
        {
            printf("Random = %d\n",head->random->data);
        }
        else
        {
            printf("Random = NULL\n");
        }
        head = head->next;
    }
}