/*
Store employee details in a file and update them as needed.
Input: Add new employee: Name: John, Age: 25
Output: Employee added (info saved in file)
*/
#include<stdio.h>   
struct Employee
{
    char name[50];
    int age;
};
void Add_Employee(char filename[]);
int main()
{
    char filename[] = "employees.txt";
    Add_Employee(filename);   
    return 0;
}
void Add_Employee(char filename[])
{
    FILE *fp;
    struct Employee emp;
    fp = fopen(filename,"a");
    if(fp == NULL)
    {
        printf("File opening failed");
        return;
    }
    printf("Enter employee name:\n");
    scanf("%s",emp.name);
    printf("Enter employee age:\n");
    scanf("%d",&emp.age);
    fprintf(fp,"Name: %s Age: %d\n",emp.name,emp.age);

    fclose(fp);   
    printf("Employee added and saved in file");
}