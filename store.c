#include<stdio.h>
int main()
{
    int arr[5],i;
    printf("Enter the array element:");
    for(i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The reteved element are:");
    for(i=0; i<5; i++)
    {
        printf("\n%d",arr[i]);
    }
    return 0;
}