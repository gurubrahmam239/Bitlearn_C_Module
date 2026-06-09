/*
 Introduction to Structures in C
Goal
Grasp the basic concept of structures in C, including their need, syntax, and difference from arrays and unions.

Activity
Define a simple structure with multiple data types.
Compare it with an array and a union with similar members.
Initialize the structure in different ways and print values.
Analyze why structures are preferred in peripheral register grouping.
Tip: Structures allow logically grouping different data types under one name.
*/
#include<stdio.h>
#include<string.h>
struct Student
{
    int id;
    char name[20];
    float marks;
};
union Data
{
    int id;
    char name[20];
    float marks;
};
void Print_Structure(struct Student s);
void Print_Union(union Data u);
int main()
{
    struct Student s1 = {1,"Rahul",85.5};
    struct Student s2;
    int arr[3] = {10,20,30};
    union Data u;
    s2.id = 2;
    strcpy(s2.name,"Kiran");
    s2.marks = 90.0;
    printf("Structure 1 Values:\n");
    Print_Structure(s1);
    printf("\nStructure 2 Values:\n");
    Print_Structure(s2);
    printf("\nArray Values:\n");
    for(int i=0;i<3;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    u.id = 100;
    printf("\nUnion After Integer Assignment:\n");
    Print_Union(u);
    u.marks = 45.5;
    printf("\nUnion After Float Assignment:\n");
    Print_Union(u);
    printf("\nStructures group different data types\n");
    printf("under one name and store all members separately\n");
    printf("\nStructures are useful in embedded systems\n");
    printf("for grouping peripheral registers together\n");
    return 0;
}

void Print_Structure(struct Student s)
{
    printf("ID = %d\n",s.id);
    printf("Name = %s\n",s.name);   
    printf("Marks = %.2f\n",s.marks);
}
void Print_Union(union Data u)
{
    printf("ID = %d\n",u.id);   
    printf("Marks = %.2f\n",u.marks);
}