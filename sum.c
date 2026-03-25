#include<stdio.h>
int main()
{
    int arr[5],n,i,sum=0;
    printf("Enter the number of n:");
    scanf("%d/n",&n);
    for(i=0; i<=n; i++)
    {
        sum=sum+i;
        printf("%d/n",i);
    }
    printf("sum=%d/n",sum);
    return 0;

}