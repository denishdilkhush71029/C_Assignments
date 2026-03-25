#include<stdio.h>
int main()
{
    int arr[100];
    int i,n,sum=0;
    printf("Enter the size of Array:");
    scanf("%d",&n);
    printf("Enter the element in the Array:");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++){
        sum=sum+arr[i];
    }
    printf("sum of the Array=%d\n",sum);
    return 0;
}