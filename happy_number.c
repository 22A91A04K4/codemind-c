#include<stdio.h>
int main()
{
    int n,r,p,s=0;
    scanf("%d",&n);
    start:
    s=0;
    while(n>0)
    {
        r=n%10;
        n/=10;
        p=r*r;
        s+=p;
    }
    n=s;
    if(n==1 || n==7)
    {
        printf("True");
    }
    else if(n<10)
    {
        printf("False");
    }
    else
    {
        goto start;
    }
}