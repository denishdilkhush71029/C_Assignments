#include<stdio.h>
int main()
{
    int arr1[]={10,5,4,8,13};
    int arr2[]={5,8,39,44};
    int t1=sizeof(arr1)/sizeof(arr1[0]);
    int t2=sizeof(arr2)/sizeof(arr2[0]);

    int total=t1+t2;
    int arr[total];
    for(int i=0; i<t1; i++)
    {
        arr[i]=arr1[i];
    }
    for(int i=0; i<t2; i++)
    {
    arr[t1+i]=arr2[i];
    }
    printf("\n After merging");
    for(int i=0; i<total; i++)
    {
        printf("\n %d",arr[i]);
    }
    return 0;

}