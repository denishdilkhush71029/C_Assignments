#include<stdio.h>
int mian()
{
    int i, middle,first,last,n,search,arr[100];
    printf("Enter the number of elements \n");
    for(i=0; i<n; i++){
    scanf("%d",&n);
    }
    printf("Enter value to find\n");
    scanf("%d",&search);
    first=0;
    last=n-1;
    middle=(first+last)/2;
    while(first<=last)
    {
      if(arr[middle]<search)
      first=middle+1;
      else
      if(arr[middle]==search)
      {
        printf("%d found at location %d\n",search,middle+1);
        break;
      }
      else
      last=middle-1;
      middle=(first+last)/2;
    }
    if(first>last)
    printf("%d is not find in the array\n",search);
    return 0;


    
}