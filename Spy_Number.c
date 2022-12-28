#include<stdio.h>
int main()
{
    int n,r,s=0,p=1;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        n/=10;
        s+=r;
        p*=r;
    }
    if(s==p)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}