
/*


Question: Find maximum and minimum element
Question description: Write a C program to find the largest and smallest element in the array.
Sample data:
Input: 8 3 15 6 2
Expected output:
Maximum = 15
Minimum = 2
*/
#include <stdio.h>

int main() 
{
    int arr[10],n,min=0,max=0;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    min=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i] > max)
        {
            max=arr[i];
        }
        if(arr[i]< min)
        {
            min=arr[i];
        }
    }
    printf("Maximum:%d\n Minimum:%d\n",max,min);

    return 0;
}