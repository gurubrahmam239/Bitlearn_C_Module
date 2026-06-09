
/*
Modify Array Elements Using Pointers
Goal: Learn to modify values in an array using pointer operations.
Activity:
Log Session int arr[] = {2, 4, 6};
Use pointer arithmetic to increase each element by 1.
Print modified array.
*/
#include<stdio.h>
void Modify_Array(int *p,int size);
void Print_Array(int *p,int size);
int main()
{
    int arr[] = {2,4,6};
    Modify_Array(arr,3);
    printf("Modified array:\n");
    Print_Array(arr,3);   
    return 0;
}
void Modify_Array(int *p,int size)
{
    for(int i=0;i<size;i++)
    {
        *(p+i)=*(p+i)+1;
    }
}
void Print_Array(int *p,int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",*(p+i));
    }
}