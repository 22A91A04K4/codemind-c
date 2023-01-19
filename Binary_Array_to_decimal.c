#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,s=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    j=0;
    for(i=n-1;i>=0;i--)
    {
        s+=a[i]*pow(2,j++);
    }
    printf("%d",s);
}