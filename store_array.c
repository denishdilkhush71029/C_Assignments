#include<stdio.h>
int main()
{
    int arr[5],i;
    printf("Enter the elements:");
    for(i=0; i<=5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The entered element are: \n");
    for(i=0; i<=5; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;

}
