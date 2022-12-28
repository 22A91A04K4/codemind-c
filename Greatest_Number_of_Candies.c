#include<stdio.h>
int main()
{
    int n,e,max;
    scanf("%d",&n);
    int i,arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&e);
    max=arr[0];
    for(i=1;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]+e>=max)
        {
            printf("True ");
        }
        else
        {
            printf("False ");
        }
    }
}    