#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,t=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            if(i%2==0)
            {
                t=1;
                break;
            }
        }
    }
    if(t==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}