
/*
Exercise 12: Track Frequency of Elements
Goal: Use calloc for zero-initialized counting.
Activity:
Allocate an integer array of size 100 using calloc.
Accept n numbers between 0 and 99.
Increment the value at each index to count frequency.
Display the frequencies.
Free the memory
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *freq;
    int n,num;
    freq=(int *)calloc(100,sizeof(int));
    if(freq==NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }
    printf("Enter number of elements:\n");
    scanf("%d",&n);
    printf("Enter the elements between 0 and 99:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num);   
        freq[num]++;
    }
    printf("Frequencies are:\n");
    for(int i=0;i<100;i++)
    {
        if(freq[i] != 0)
        {
            printf("%d -> %d\n",i,freq[i]);
        }
    }
    free(freq);
    freq = NULL;    
    return 0;
}
