
/*
Exercise 15: Dynamic Menu-Driven Array
Goal: Handle operations on a dynamic array with growing size.

Activity:

Start with an empty array.
Provide a menu with options: Add element, Display, Exit.
Use realloc each time user adds an element.
Print array contents.
Free memory on exit
*/
#include<stdio.h>
#include<stdlib.h>
void Add_Element(int **ptr,int *size);
void Display_Array(int *ptr,int size);
int main()
{
    int *ptr = NULL;
    int size = 0;
    int choice;
    while(1)
    {
        printf("\n1.Add Element\n");
        printf("2.Display\n");
        printf("3.Exit\n");
        printf("Enter your choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                Add_Element(&ptr,&size);
                break;
            case 2:
                Display_Array(ptr,size);
                break;
            case 3:
                free(ptr);
                ptr = NULL;
                return 0;               
            default:
                printf("Invalid choice");
        }
    }
}
void Add_Element(int **ptr,int *size)
{
    *size = *size + 1;
    *ptr = (int *)realloc(*ptr,(*size)*sizeof(int));
    if(*ptr==NULL)
    {
        printf("Memory allocation failed");
        exit(0);
    }   
    printf("Enter element:\n");
    scanf("%d",&(*ptr)[*size-1]);
}
void Display_Array(int *ptr,int size)
{
    if(size==0)
    {
        printf("Array is empty");
        return;
    }
    printf("Array elements are:\n");   
    for(int i=0;i<size;i++)
    {
        printf("%d ",ptr[i]);
    }
}