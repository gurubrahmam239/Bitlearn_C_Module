
/*
2. Loop Detection Challenges
Question:
Write a C program to detect and remove a loop in a singly linked list.

Sample data:
List: 1 → 2 → 3 → 4 → 5 → (loop to 2)

Expected output:
Loop detected and removed.
List after removal: 1 2 3 4 5
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
int Detect_And_Remove_Loop(struct Node *head);
void Display(struct Node *head);
int main()
{
    struct Node *head = NULL;
    Insert_End(&head,1);
    Insert_End(&head,2);
    Insert_End(&head,3);
    Insert_End(&head,4);
    Insert_End(&head,5);
    /* Creating loop: 5 -> 2 */
    head->next->next->next->next->next = head->next;
    if(Detect_And_Remove_Loop(head))
    {
        printf("Loop detected and removed.\n");
    }
    else
    {
        printf("No loop found.\n");
    }
    printf("List after removal: ");
    Display(head);
    return 0;
}
struct Node* Create_Node(int data)
{
    struct Node *newnode;
    newnode = (struct Node*)malloc(sizeof(struct Node));
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
int Detect_And_Remove_Loop(struct Node *head)
{
    struct Node *slow = head;
    struct Node *fast = head;
    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
        {
            slow = head;
            while(slow->next != fast->next)
            {
                slow = slow->next;
                fast = fast->next;
            }
            fast->next = NULL;
            return 1;
        }
    }
    return 0;
}
void Display(struct Node *head)
{
    while(head != NULL)
    {
        printf("%d ",head->data);
        head = head->next;
    }
}