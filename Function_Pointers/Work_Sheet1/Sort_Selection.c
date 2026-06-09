
/*
Sorting Algorithms Selector
Implement three sorting functions
 (bubbleSort, selectionSort, insertionSort)
  that sort an integer array.
Store pointers to these sorting functions in an 
array of function pointers.
Prompt the user to choose a sorting method, 
and use the selected function pointer to sort a
 user-provided integer array
 */
#include<stdio.h>
void Bubble_Sort(int arr[],int n);
void Selection_Sort(int arr[],int n);
void Insertion_Sort(int arr[],int n);
void Print_Array(int arr[],int n);
int main()
{
    int arr[100],n,choice;
    void (*Sort[3])(int[],int) = 
    {
        Bubble_Sort,
        Selection_Sort,
        Insertion_Sort
    };
    printf("Enter size of array:\n");
    scanf("%d",&n);
    printf("Enter array elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("1.Bubble Sort\n");
    printf("2.Selection Sort\n");
    printf("3.Insertion Sort\n");
    printf("Enter your choice:\n");
    scanf("%d",&choice);
    if(choice>=1 && choice<=3)
    {
        Sort[choice-1](arr,n);
        printf("Sorted array is:\n");   
        Print_Array(arr,n);
    }
    else
    {
        printf("Invalid choice");
    }   
    return 0;
}
void Bubble_Sort(int arr[],int n)
{
    int temp;   
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void Selection_Sort(int arr[],int n)
{
    int min,temp;
    for(int i=0;i<n-1;i++)
    {
        min = i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j] < arr[min])
            {
                min = j;
            }
        }       
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}
void Insertion_Sort(int arr[],int n)
{
    int key,j;
    for(int i=1;i<n;i++)
    {
        key = arr[i];
        j = i - 1;
        while(j>=0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }       
        arr[j+1] = key;
    }
}
void Print_Array(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}