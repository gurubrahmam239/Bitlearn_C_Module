
/*
Dynamic Allocation of 2D Register Block
Goal: Dynamically allocate and manage a two-dimensional register map for peripheral configuration.
Activity:
Allocate memory for a 4x4 matrix of 32-bit registers using double pointers:
uint32_t **reg_block;
reg_block = malloc(rows * sizeof(uint32_t *));
for (int i = 0; i < rows; i++)
  reg_block[i] = malloc(cols * sizeof(uint32_t));
  Initialize the matrix elements with example register values.
Print the matrix values via pointer dereferencing.
Free all allocated memory properly after use.
*/
#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
void Initialize_Registers(uint32_t **reg_block,int rows,int cols);
void Print_Registers(uint32_t **reg_block,int rows,int cols);
void Free_Registers(uint32_t **reg_block,int rows);
int main()
{
    uint32_t **reg_block;
    int rows = 4;
    int cols = 4;    
    reg_block = (uint32_t **)malloc(rows * sizeof(uint32_t *));
    if(reg_block == NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }
    for(int i=0;i<rows;i++)
    {
        reg_block[i] =(uint32_t *)malloc(cols * sizeof(uint32_t));   
        if(reg_block[i] == NULL)
        {
            printf("Memory allocation failed");
            return 0;
        }
    }
    Initialize_Registers(reg_block,rows,cols);
    printf("Register Block Values:\n");
    Print_Registers(reg_block,rows,cols);
    Free_Registers(reg_block,rows);   
    return 0;
}
void Initialize_Registers(uint32_t **reg_block,int rows,int cols)
{
    uint32_t value = 1000;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            *(*(reg_block+i)+j) = value++;
        }
    }
}
void Print_Registers(uint32_t **reg_block,int rows,int cols)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
           printf("%u ",*(*(reg_block+i)+j));
        }       
        printf("\n");
    }
}
void Free_Registers(uint32_t **reg_block,int rows)
{
    for(int i=0;i<rows;i++)
    {
        free(reg_block[i]);
    }   
    free(reg_block);
}
