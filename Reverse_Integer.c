#include<stdio.h>
int main()
{
    int n,temp,m,sum=0;
    scanf("%d",&n);
    temp=n;
    if(n<0)
    {
        n=n*(-1);
    }
    while(n>0)
    {
        m=n%10;
        sum=(sum*10)+m;
        n/=10;
    }
    if(temp<0)
    {
        sum=sum*(-1);
    }
    printf("%d",sum);
    return 0;
}