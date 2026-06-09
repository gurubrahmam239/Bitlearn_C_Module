
#include<stdio.h>
int main()
{
    int arr[10],sum=0,n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("The sum of the array elements are:%d\n",sum);
    
}