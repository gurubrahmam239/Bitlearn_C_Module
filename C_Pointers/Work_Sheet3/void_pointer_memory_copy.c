
/*
Void Pointers and Memory Copying
Goal: Use void pointers to create a generic memory copying utility function for embedded data types.
Activity:
Declare a function mem_copy(void *dest, const void *src, size_t n) that copies n bytes from src to dest:
void mem_copy(void *dest, const void *src, size_t n);
Within the function, use char * pointers to copy data byte-by-byte.
Test the function by copying an array of integers and an array of floats.
*/
#include<stdio.h>
#include<stddef.h>
void Mem_Copy(void *dest,const void *src,size_t n);
void Print_Int_Array(int arr[],int size);
void Print_Float_Array(float arr[],int size);
int main()
{
    int src_int[] = {10,20,30,40};
    int dest_int[4];
    float src_float[] = {1.1,2.2,3.3,4.4};
    float dest_float[4];
    Mem_Copy(dest_int,src_int,sizeof(src_int));
    Mem_Copy(dest_float,src_float,sizeof(src_float));
    printf("Copied Integer Array:\n");
    Print_Int_Array(dest_int,4);
    printf("\nCopied Float Array:\n");
    Print_Float_Array(dest_float,4);   
    return 0;
}
void Mem_Copy(void *dest,const void *src,size_t n)
{
    char *d =(char *)dest;
    const char *s = (const char *)src;   
    for(size_t i=0;i<n;i++)
    {
        *(d+i)=*(s+i);
    }
}
void Print_Int_Array(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }   
    printf("\n");
}
void Print_Float_Array(float arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%.1f ",arr[i]);
    }   
    printf("\n");
}

