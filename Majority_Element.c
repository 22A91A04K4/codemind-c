#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],c;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        c=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
            }
        }
        if(c>n/2)
        {
            printf("%d",arr[i]);
            break;
        }
    }
}    