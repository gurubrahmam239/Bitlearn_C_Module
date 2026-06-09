
/*
Function Returning Pointer to Fixed-Size Array
Goal: Implement a function that returns a pointer to a fixed-size calibration data array.
Activity:
Use typedef to declare a pointer to an array of 10 integers:
typedef int (*CalibArrayPtr)[10];
Log Session a function that returns a pointer to a static array of calibration values:
CalibArrayPtr get_calibration_data(void);
From the calling function, access calibration data via the returned pointer.
*/
#include<stdio.h>
typedef int (*CalibArrayPtr)[10];
CalibArrayPtr Get_Calibration_Data(void);
int main()
{
    CalibArrayPtr ptr;
    ptr = Get_Calibration_Data();
    printf("Calibration values are:\n");
    for(int i=0;i<10;i++)
    {
        printf("%d ",(*ptr)[i]);
    }   
    return 0;
}
CalibArrayPtr Get_Calibration_Data(void)
{
    static int calib_data[10] =
    {
        10,20,30,40,50,
        60,70,80,90,100
    };
    return &calib_data;
}