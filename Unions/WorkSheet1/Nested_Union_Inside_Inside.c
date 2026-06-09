
/*
Anonymous Union
Declare an anonymous union inside a structure.
Initialize and access its members without using a union name.
Demonstrate how this simplifies access in code.
*/
#include<stdio.h>
struct Data
{
    int id;  
    union
    {
        int num;
        float value;
        char ch;
    };
};
void Print_Int(struct Data d);
void Print_Float(struct Data d);
void Print_Char(struct Data d);
int main()
{
    struct Data d;
    d.id = 1;
    d.num = 100;
    Print_Int(d);
    d.value = 25.5;
    Print_Float(d);
    d.ch = 'A';
    Print_Char(d);   
    return 0;
}
void Print_Int(struct Data d)
{
    printf("ID: %d\n",d.id);
    printf("Integer value: %d\n",d.num);
}
void Print_Float(struct Data d)
{
    printf("ID: %d\n",d.id);
    printf("Float value: %.2f\n",d.value);
}
void Print_Char(struct Data d)
{
    printf("ID: %d\n",d.id);
    printf("Character value: %c\n",d.ch);
}