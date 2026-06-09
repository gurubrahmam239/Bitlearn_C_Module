
/*
Pointer and Structures
Goal: Use pointers to access and modify structure members
 efficiently, including passing structures to functions.

Activity:

Define a structure and create a pointer to it.
Use the pointer to read and modify structure members.
Pass structure pointers to functions that update structure data.
Dynamically allocate memory for structures and handle them
 via pointers
 */
#include<stdio.h>
#include<stdlib.h>
struct Student
{
    int id;
    char name[50];
    float marks;
};
void Read_Details(struct Student *ptr);
void Update_Details(struct Student *ptr);
void Print_Details(struct Student *ptr);
int main()
{
    struct Student *ptr;
    ptr = (struct Student *)malloc(sizeof(struct Student));
    if(ptr == NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }
    Read_Details(ptr);
    printf("\nStudent details before update:\n");
    Print_Details(ptr);
    Update_Details(ptr);
    printf("\nStudent details after update:\n");
    Print_Details(ptr);
    free(ptr);
    ptr = NULL;   
    return 0;
}
void Read_Details(struct Student *ptr)
{
    printf("Enter student ID:\n");
    scanf("%d",&ptr->id);
    printf("Enter student name:\n");
    scanf("%s",ptr->name);   
    printf("Enter student marks:\n");
    scanf("%f",&ptr->marks);
}
void Update_Details(struct Student *ptr)
{
       ptr->marks = ptr->marks + 5;
}
void Print_Details(struct Student *ptr)
{
    printf("ID = %d\n",ptr->id);
    printf("Name = %s\n",ptr->name);
    printf("Marks = %.2f\n",ptr->marks);
}
