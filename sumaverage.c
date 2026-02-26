#include<stdio.h>
int main()
{
    int arr[5],i,sum=0;
    float avg;
    printf("Entre the elements:");
    for(i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
        sum +=arr[i];
    }
    avg=(float)sum/5;
    printf("sum=%d\n",sum);
    printf("average=%.2f\n",avg);
    return 0;

}