
/*
NULL Pointer Safety
Goal: Learn to avoid dereferencing NULL pointers.
Activity:
Declare: int *p = NULL;
Use a condition if (p != NULL) before dereferencing.
Later, assign p = &a; and access safely.
*/
#include<stdio.h>
int main()
{
    int *p = NULL;
    int a = 10;
    if(p != NULL)
    {
        printf("Value = %d\n",*p);
    }
    else
    {
        printf("Pointer is NULL\n");
    }
    p = &a;
    if(p != NULL)
    {
        printf("Value after assignment = %d",*p);
    }    
    return 0;
}
