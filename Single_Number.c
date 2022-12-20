#include<stdio.h>
int main()
{
    int i,n,j,c,a[i];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j] && j!=i)
            {
                c++;
            }
        }
        if(c==0)
        {
            printf("%d",a[i]);
            break;
        }
    }
}