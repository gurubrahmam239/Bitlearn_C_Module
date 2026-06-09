
/*
Pointer and Function
Goal: Use pointers to pass variables or
 arrays to functions so that the function can modify the original data.
Activity:

Write a function that takes pointers as parameters
 to swap two integer variables.
Log Session a function that modifies the elements 
of an array via a pointer.
Pass a pointer to a function to update the contents of 
a structure or a dynamically allocated memory block
*/

#include<stdio.h>
#include<stdlib.h>
struct Student
{
    char name[50];
    int marks;
};
void Swap(int *a,int *b);
void Modify_Array(int *arr,int size);
void Update_Structure(struct Student *s);
void Print_Array(int *arr,int size);
int main()
{
    int x,y;
    int arr[5];
    struct Student s;
    printf("Enter two numbers:\n");
    scanf("%d%d",&x,&y);
    printf("Before swapping:\n");
    printf("x = %d y = %d\n",x,y);
    Swap(&x,&y);
    printf("After swapping:\n");
    printf("x = %d y = %d\n\n",x,y);
    printf("Enter array elements:\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    Modify_Array(arr,5);
    printf("Modified array:\n");
    Print_Array(arr,5);
    printf("\nEnter student name:\n");
    scanf("%s",s.name);
    printf("Enter student marks:\n");
    scanf("%d",&s.marks);
    Update_Structure(&s);
    printf("Updated student details:\n");
    printf("Name = %s\n",s.name);
    printf("Marks = %d\n",s.marks);   
    return 0;
}
void Swap(int *a,int *b)
{
    int temp;   
    temp = *a;
    *a = *b;
    *b = temp;
}
void Modify_Array(int *arr,int size)
{
    for(int i=0;i<size;i++)
    {
        *(arr + i) = *(arr + i) + 10;
    }
}
void Update_Structure(struct Student *s)
{
    s->marks = s->marks + 5;
}
void Print_Array(int *arr,int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",*(arr + i));
    }   
    printf("\n");
}