
/*
Unions in Structures
Log Session a structure Student with a union inside 
it that can hold either an int roll_number or a char id[10].
Add a member char type to indicate which member is active.
Write functions to initialize and display the data for
 both types of students.
 */
 #include<stdio.h>
#include<string.h>
struct Student
{
    char type;
    
    union
    {
        int roll_number;
        char id[10];
        
    }data;
};
void Initialize_Roll(struct Student *s,int roll);
void Initialize_Id(struct Student *s,char id[]);
void Display(struct Student s);
int main()
{
    struct Student s1,s2;
    Initialize_Roll(&s1,101);
    Initialize_Id(&s2,"GURU");
    Display(s1);
    Display(s2);   
    return 0;
}
void Initialize_Roll(struct Student *s,int roll)
{
    s->type='R';
    s->data.roll_number=roll;
}
void Initialize_Id(struct Student *s,char id[])
{
    s->type='I';
    strcpy(s->data.id,id);
}
void Display(struct Student s)
{
    if(s.type=='R')
    {
        printf("Roll Number: %d\n",s.data.roll_number);
    }
    else if(s.type=='I')
    {
        printf("ID: %s\n",s.data.id);
    }
}