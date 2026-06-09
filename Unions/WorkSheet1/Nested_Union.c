
/*
Nested Union
Log Session a union called Number which contains an int
 and a nested union with a float and a char.
Write code to assign and access values from both the outer 
and inner union members.
*/

#include<stdio.h>
union Number
{
    int num;
    union Inner
    {
        float value;
        char ch;      
    }data;
};
void Print_Int(union Number *n);
void Print_Float(union Number *n);
void Print_Char(union Number *n);
int main()
{
    union Number n;
    n.num = 100;
    Print_Int(&n);
    n.data.value = 25.5;
    Print_Float(&n);
    n.data.ch = 'A';
    Print_Char(&n);   
    return 0;
}
void Print_Int(union Number *n)
{
    printf("Integer value: %d\n",n->num);
}
void Print_Float(union Number *n)
{
    printf("Float value: %.2f\n",n->data.value);
}
void Print_Char(union Number *n)
{
    printf("Character value: %c\n",n->data.ch);
}
