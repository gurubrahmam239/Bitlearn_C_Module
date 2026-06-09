
/*
 Pointer and Recursion
Goal: Use pointers within recursive functions to manipulate 
data structures or strings.

Activity:

Write a recursive function to reverse a string using pointers.
Implement a recursive traversal of a linked list using pointers.
Use recursion to perform operations such as summing elements of
 an array via pointer traversal
 */
#include<stdio.h>
#include<string.h>
struct Node
{
    int data;
    struct Node *next;
};
void Reverse_String(char *str);
void Recursive_List_Traversal(struct Node *head);
int Sum_Array(int *ptr,int size);
int main()
{
    char str[100];
    int arr[] = {10,20,30,40,50};
    struct Node n1,n2,n3;
    n1.data = 1;
    n1.next = &n2;
    n2.data = 2;
    n2.next = &n3;
    n3.data = 3;
    n3.next = NULL;
    printf("Enter a string:\n");
    scanf("%s",str);
    printf("Reversed string:\n");
    Reverse_String(str);
    printf("\n\nLinked list traversal:\n");
    Recursive_List_Traversal(&n1);
    printf("\n\nSum of array elements = %d",Sum_Array(arr,5));
    return 0;
}

void Reverse_String(char *str)
{
    if(*str == '\0')
    {
        return;
    }
    Reverse_String(str + 1);   
    printf("%c",*str);
}
void Recursive_List_Traversal(struct Node *head)
{
    if(head == NULL)
    {
        return;
    }
    printf("%d ",head->data);
    Recursive_List_Traversal(head->next);
}

int Sum_Array(int *ptr,int size)
{
    if(size == 0)
    {
        return 0;
    }   
    return *ptr + Sum_Array(ptr + 1,size - 1);
}