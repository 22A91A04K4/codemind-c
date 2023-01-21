#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d",&n);
    int a[n],count=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    int b[m];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(int i=0;i<n;i++)
    {
        int c=0;
        for(int j=0;j<m;j++)
        {
            if(a[i]==b[j])
            {
                c++;
            }
        }
        if(c>=1)
        {
            count++;
        }
    }
    if(count==n && count==m)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}