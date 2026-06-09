/*
Structures and Functions
Goal
Learn how to pass structures to and return structures from functions and understand the trade-offs between pass-by-value and pass-by-reference.

Activity
Write a function that takes a structure as a value argument and modifies it.
Write a function that takes a pointer to structure and modifies it.
Return a structure from a function and print its values.
Measure memory usage and performance difference between pass-by-value and reference.
Tip: Prefer passing by pointer in embedded systems for performance and memory efficiency.
*/
#include<stdio.h>
#include<string.h>
typedef struct
{
    int id;
    char name[20];
    float marks;
}Student;
void Modify_By_Value(Student s);
void Modify_By_Reference(Student *s);
Student Create_Student(void);
void Print_Student(Student s);
int main()
{
    Student s1;
    Student s2;
    s1.id = 1;
    strcpy(s1.name,"Rahul");
    s1.marks = 75.5;
    printf("Original Structure:\n");
    Print_Student(s1);
    printf("\nPass By Value:\n");
    Modify_By_Value(s1);
    printf("After Pass By Value:\n");
    Print_Student(s1);
    printf("\nPass By Reference:\n");
    Modify_By_Reference(&s1);
    printf("After Pass By Reference:\n");
    Print_Student(s1);
    printf("\nReturned Structure:\n");
    s2 = Create_Student();
    Print_Student(s2);
    printf("\nSize of Structure = %lu Bytes\n",
    sizeof(Student));
    printf("Pass by reference is more efficient\n");
    printf("because only address is passed\n");   
    return 0;
}
void Modify_By_Value(Student s)
{
    s.marks = 90.0;   
    printf("Inside Function = %.2f\n",
    s.marks);
}
void Modify_By_Reference(Student *s)
{
    s->marks = 95.0;
}
Student Create_Student(void)
{
    Student temp;
    temp.id = 2;
    strcpy(temp.name,"Kiran");
    temp.marks = 88.5;   
    return temp;
}
void Print_Student(Student s)
{
    printf("ID = %d\n",s.id);
    printf("Name = %s\n",s.name);    
    printf("Marks = %.2f\n",s.marks);
}
