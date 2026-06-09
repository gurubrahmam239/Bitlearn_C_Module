
/*
Pointer and Multi-Dimensional Arrays
Goal: Access and manipulate elements of multi-dimensional
arrays using pointers and pointer arithmetic.

Activity:
Declare a 2D array.
Use pointers to iterate through rows and columns.
Implement operations such as matrix transpose or addition 
using pointer arithmetic only.
Pass multi-dimensional arrays as pointers to functions and 
manipulate elements.
*/
#include<stdio.h>
void Read_Matrix(int (*ptr)[3],int rows,int cols);
void Print_Matrix(int (*ptr)[3],int rows,int cols);
void Transpose_Matrix(int (*ptr)[3],int rows,int cols);
int main()
{
    int matrix[3][3];
    printf("Enter matrix elements:\n");
    Read_Matrix(matrix,3,3);
    printf("\nOriginal Matrix:\n");
    Print_Matrix(matrix,3,3);
    printf("\nTranspose Matrix:\n");
    Transpose_Matrix(matrix,3,3);   
    return 0;
}
void Read_Matrix(int (*ptr)[3],int rows,int cols)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            scanf("%d",(*(ptr + i) + j));
        }
    }
}
void Print_Matrix(int (*ptr)[3],int rows,int cols)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            printf("%d ",*(*(ptr + i) + j));
        }       
        printf("\n");
    }
}
void Transpose_Matrix(int (*ptr)[3],int rows,int cols)
{
    for(int i=0;i<cols;i++)
    {
        for(int j=0;j<rows;j++)
        {
            printf("%d ",*(*(ptr + j) + i));
        }        
        printf("\n");
    }
}
