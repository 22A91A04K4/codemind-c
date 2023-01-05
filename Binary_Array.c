#include<stdio.h>
int main()
{
    int n,i,count=0,arr[2000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]==1 || arr[i]==0)
        {
            count++;
        }
    }
    if(count==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}