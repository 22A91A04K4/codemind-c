#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int avg,a[n],i,s=0,c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s+=a[i];
    }
    avg=s/n;
    for(i=0;i<n;i++)
    {
        if(a[i]<=avg)
        {
            c++;
        }
    }
    printf("%d",c);
}