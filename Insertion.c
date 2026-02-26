#include<stdio.h>
int main()
{
    int arr[]={10,5,2,15,12},i,j;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(i=1; i<n; i++)
    {
        int key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
    printf("\n sorted array");
    for(i=0; i<n; i++)
    {
        printf("\n %d",arr[i]);
    }
    return 0;
}