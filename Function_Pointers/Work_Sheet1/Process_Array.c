
/*
Callback Function Array Processing
Define a function processArray that 
accepts an integer array, its size, and a 
callback function as arguments.
Implement callback functions (increment, doubleValue)
 that modify array elements in different ways.
Demonstrate invoking processArray with different callback 
functions.
*/
#include<stdio.h>
void Process_Array(int arr[],int n,void (*Callback)(int *));
void Increment(int *num);
void Double_Value(int *num);
void Print_Array(int arr[],int n);

int main()
{
    int arr[100],n,choice;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    printf("Enter array elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("1.Increment\n");
    printf("2.Double Value\n");
    printf("Enter your choice:\n");
    scanf("%d",&choice);
    if(choice == 1)
    {
        Process_Array(arr,n,Increment);
    }
    else if(choice == 2)
    {
        Process_Array(arr,n,Double_Value);
    }
    else
    {
        printf("Invalid choice");
        return 0;
    }
    printf("Processed array is:\n");
    Print_Array(arr,n);   
    return 0;
}
void Process_Array(int arr[],int n,void (*Callback)(int *))
{
    for(int i=0;i<n;i++)
    {
        Callback(&arr[i]);
    }
}
void Increment(int *num)
{
    (*num)++;
}
void Double_Value(int *num)
{
    (*num) = (*num) * 2;
}
void Print_Array(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
