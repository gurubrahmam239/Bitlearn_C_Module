
/*
Use Case – Variant Data Storage
Design a simple employee record system 
using a structure with a union that can store either salary 
(float) or hourly wage (float), depending on employee type.
Add code to input and print details for a list of employees
*/
#include<stdio.h>
struct Employee
{
    char name[50];
    char type;
    union
    {
        float salary;
        float wage;      
    }pay;
};
void Input_Details(struct Employee *e);
void Print_Details(struct Employee e);
int main()
{
    struct Employee emp[100];
    int n;
    printf("Enter number of employees:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("\nEnter details of employee %d:\n",i+1);   
        Input_Details(&emp[i]);
    }
    printf("\nEmployee details are:\n");
    for(int i=0;i<n;i++)
    {
        Print_Details(emp[i]);
    }   
    return 0;
}
void Input_Details(struct Employee *e)
{
    printf("Enter employee name:\n");
    scanf("%s",e->name);
    printf("Enter employee type (S for Salary / H for Hourly):\n");
    scanf(" %c",&e->type);
    if(e->type=='S')
    {
        printf("Enter salary:\n");
        scanf("%f",&e->pay.salary);
    }
    else if(e->type=='H')
    {
        printf("Enter hourly wage:\n");
        scanf("%f",&e->pay.wage);
    }
}
void Print_Details(struct Employee e)
{
    printf("\nEmployee Name: %s\n",e.name);
    
    if(e.type=='S')
    {
        printf("Employee Type: Salaried\n");
        printf("Salary: %.2f\n",e.pay.salary);
    }
    else if(e.type=='H')
    {
        printf("Employee Type: Hourly\n");
        printf("Hourly Wage: %.2f\n",e.pay.wage);
    }
}
