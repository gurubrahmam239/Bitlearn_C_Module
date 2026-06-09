
/*
Exercise 17: Struct Array with Dynamic Allocation
Goal: Allocate memory for array of structs.

Activity:

Define a struct (e.g., name and age).
Ask user how many entries to store.
Allocate memory using malloc.
Accept values and display them.
Free the memory.
*/
#include<stdio.h>
#include<stdlib.h>
struct Student
{
    char name[50];
    int age;
};
int main()
{
    struct Student *ptr;
    int n;
    printf("Enter number of students:\n");
    scanf("%d",&n);
    ptr=(struct Student *)malloc(n*sizeof(struct Student));
    if(ptr==NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }
    printf("Enter student details:\n");
    for(int i=0;i<n;i++)
    {
        printf("Enter name:\n");
        scanf("%s",ptr[i].name);   
        printf("Enter age:\n");
        scanf("%d",&ptr[i].age);
    }
    printf("Student details are:\n");
    for(int i=0;i<n;i++)
    {
        printf("Name: %s\n",ptr[i].name);
        printf("Age: %d\n",ptr[i].age);
    }
    free(ptr);
    ptr = NULL;    
    return 0;
}
