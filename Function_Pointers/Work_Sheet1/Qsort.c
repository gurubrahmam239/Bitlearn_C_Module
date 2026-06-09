
/*
Passing Function Pointers to Standard Algorithms
Define a structure representing a record (e.g., struct Person
 { char name[30]; int age; }).
Implement multiple comparison functions for sorting 
(e.g., by name, by age).
Use the C standard library function qsort, passing these
 comparison functions as function pointers to sort an array of
  records in different ways.
  */
 #include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Person
{
    char name[30];
    int age;
};
int Compare_By_Name(const void *a,const void *b);
int Compare_By_Age(const void *a,const void *b);
void Print_Array(struct Person p[],int n);
int main()
{
    struct Person p[100];
    int n,choice;
    printf("Enter number of persons:\n");
    scanf("%d",&n);
    printf("Enter person details:\n");
    for(int i=0;i<n;i++)
    {
        printf("Enter name:\n");
        scanf("%s",p[i].name);   
        printf("Enter age:\n");
        scanf("%d",&p[i].age);
    }
    printf("1.Sort By Name\n");
    printf("2.Sort By Age\n");
    printf("Enter your choice:\n");
    scanf("%d",&choice);
    if(choice==1)
    {
        qsort(p,n,sizeof(struct Person),Compare_By_Name);
    }
    else if(choice==2)
    {
        qsort(p,n,sizeof(struct Person),Compare_By_Age);
    }
    else
    {
        printf("Invalid choice");
        return 0;
    }
    printf("Sorted records are:\n");
    Print_Array(p,n);   
    return 0;
}
int Compare_By_Name(const void *a,const void *b)
{
    struct Person *p1 = (struct Person *)a;
    struct Person *p2 = (struct Person *)b;   
    return strcmp(p1->name,p2->name);
}
int Compare_By_Age(const void *a,const void *b)
{
    struct Person *p1 = (struct Person *)a;
    struct Person *p2 = (struct Person *)b;   
    return p1->age - p2->age;
}
void Print_Array(struct Person p[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Name: %s\n",p[i].name);
        printf("Age: %d\n",p[i].age);
    }
}