
/*
Exercise 6: Log Session a Dynamic 2D Array
Goal: Learn how to allocate and access a 2D array dynamically.
Activity:
Ask the user for number of rows and columns.
Allocate memory for an array of row pointers.
Allocate each row separately using malloc.
Accept values for each row-column index.
Display the matrix.
Free each row and then the row pointer array
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int **ptr,rows,cols;
    printf("Enter number of rows:\n");
    scanf("%d",&rows);
    printf("Enter number of columns:\n");
    scanf("%d",&cols);
    ptr = (int **)malloc(rows*sizeof(int *));
    if(ptr==NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }
    for(int i=0;i<rows;i++)
    {
        ptr[i]=(int *)malloc(cols * sizeof(int));
        
        if(ptr[i]==NULL)
        {
            printf("Memory allocation failed");
            return 0;
        }
    }
    printf("Enter matrix elements:\n");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            scanf("%d",&ptr[i][j]);
        }
    }
    printf("Matrix elements are:\n");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            printf("%d ",ptr[i][j]);
        }   
        printf("\n");
    }
    for(int i=0;i<rows;i++)
    {
        free(ptr[i]);
    }
    free(ptr);
    ptr = NULL;   
    return 0;
}
