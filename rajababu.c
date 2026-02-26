#include<stdio.h>
int main()
{
    int i, first, last, middle, n, search, arr[100];

    printf("Enter the number of elements\n");
    scanf("%d",&n);

    printf("Enter all %d integers in sorted array\n",n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter value to find\n");
    scanf("%d",&search);

    first=0;
    last=n-1;

    while(first<=last)
    {
        middle=(first+last)/2;

        if(arr[middle]==search)
        {
            printf("Value found at position %d\n", middle+1);
            break;
        }
        else if(arr[middle]<search)
        {
            first=middle+1;
        }
        else
        {
            last=middle-1;
        }
    }

    if(first>last)
    {
        printf("Value not found\n");
    }

    return 0;
}
