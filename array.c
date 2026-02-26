#include<stdio.h>
int main()
{
    int i, first, last, middle, n, search, arr[100];

    printf("Enter the number of elements\n");
    scanf("%d",&n);

    printf("Enter all %d integers in sorted array\n",n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);   // correct
    }

    printf("Enter value to find\n");  // semicolon added
    scanf("%d",&search);

    first=0;
    last=n-1;
    middle=(first+last)/2;

    printf("%d is at index %d",search,middle);

    // binary search logic continue here

    return 0;
}
