#include<stdio.h>
int main()
{
    int arr1[]={10,5,3,4,2};
    int arr2[]={15,20,25,30};
    int t1=sizeof(arr1)/sizeof(arr[0]);
    int t2=sizeof(arr2)/sizeof(arr[0]);

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
    printf("After merge:\n");
    for(int i=0; i<total; i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
    


}