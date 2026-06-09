
/*
Accessing Multi-Dimensional Arrays with Pointers
Goal: Implement pointer arithmetic to traverse a 2D sensor data array efficiently without nested loops.
Activity:
Define a 3x3 integer matrix representing sensor readings:
int sensors[3][3] = {
  {100, 101, 102},
  {110, 111, 112},
  {120, 121, 122}
};
Assign a pointer to the first element of the matrix:
int *p = &sensors[0][0];
Use a single loop and pointer arithmetic to iterate over the matrix elements.
Print each sensor value accessed via the pointer.
*/
#include<stdio.h>
void Print_Sensor_Data(int *p,int rows,int cols);
int main()
{
    int sensors[3][3] =
    {
        {100,101,102},
        {110,111,112},
        {120,121,122}
    };
    int *p = &sensors[0][0];
    Print_Sensor_Data(p,3,3);   
    return 0;
}
void Print_Sensor_Data(int *p,int rows,int cols)
{
    for(int i=0;i<rows*cols;i++)
    {
        printf("%d ",*(p+i));
    }
}