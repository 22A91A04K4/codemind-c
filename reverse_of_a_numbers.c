#include<stdio.h>
int main()
{
    int q,r,n,s=0;
    scanf("%d",&n);
    q=n;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        s=s*10+r;
    }
    printf("%d",s);
}