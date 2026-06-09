
/*
Structure Inside a Union
Define a union that contains a structure 
(for example, struct { int x, y; }) and an int.
Write a program to set and access the structure members
 through the union.
 */
#include<stdio.h>
union Data
{
    struct
    {
        int x;
        int y;
    }point;  
    int num;
};
void Set_Values(union Data *d);
void Print_Values(union Data d);
int main()
{
    union Data d;
    Set_Values(&d);
    Print_Values(d);   
    return 0;
}
void Set_Values(union Data *d)
{
    d->point.x = 10;
    d->point.y = 20;
}
void Print_Values(union Data d)
{
    printf("x = %d\n",d.point.x);
    printf("y = %d\n",d.point.y);
}
