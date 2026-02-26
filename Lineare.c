#include<stdio.h>
int main()
{
    int arr[5],i,n;
    int value=n;
    printf("Enter the number of array element:");
    scanf("%d",&n);
    {
    for(i=0; i<n; i++)
    if(arr[i]==value)
    {
        for(i=0; i<n; i++)
        printf("\n Enter found at index %d",i);
        return 0;
    }
        
    }
    printf("\n Element not found");
    return 0;
} 