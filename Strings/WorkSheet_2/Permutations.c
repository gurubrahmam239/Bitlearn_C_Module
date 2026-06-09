
/*
Print all permutations of a given string. All possible arrangements of characters should be printed.
Input: "ABC"
Output: "ABC", "ACB", "BAC", "BCA", "CAB", "CBA"
*/

#include<stdio.h>
#include<string.h>
// Function to swap characters
void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}
// Recursive function to generate permutations
void permutations(char str[], int start, int end)
{
    if(start == end)
    {
        printf("%s\n", str);
        return;
    }
    for(int i = start; i <= end; i++)
    {
        // Swap characters
        swap(&str[start], &str[i]);
        // Recursive call
        permutations(str, start + 1, end);
       // Backtrack
        swap(&str[start], &str[i]);
    }
}
int main()
{
    char str[100];
    printf("Enter the string:\n");
    scanf("%s", str);
    int len = strlen(str);
    printf("Permutations are:\n");
    permutations(str, 0, len - 1);
    return 0;
}
