#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    int i,j,a[m][n],sum,r_max=0,c_max=0;
    for(i=0;i<m;i++)
    {
        sum=0;
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            sum+=a[i][j];
        }
        if(r_max<sum)
        {
            r_max=sum;
        }
    }
    for(j=0;j<n;j++)
    {
        sum=0;
        for(i=0;i<m;i++)
        {
            sum+=a[i][j];
        }
        if(c_max<sum)
        {
            c_max=sum;
        }
    }
    if(r_max<c_max)
    {
        printf("%d",c_max);
    }
    else
    {
        printf("%d",r_max);
    }
}