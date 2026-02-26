#include<stdio.h>
int main(){
    int arr[]={10,2,5,15,19},i,n,j;
    n=sizeof(arr[0]);
    for(i=0; i<n-1; i++)
    {
        int main=i;
        for(j=i+1; j<n; j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        int temp=arr[min];
        arr[min]=arr[i];
        aar[i]=temp;
    }
    printf("\n sorted array:");
    for(i=0; i<n; i++){
        printf("\n %d",arr[i]);
    }
    return 0;
}

