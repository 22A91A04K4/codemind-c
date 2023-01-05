#include<stdio.h>
int main()
{
    int n,m,sq,sum=0;
    scanf("%d",&n);
    sq=n*n;
    while(sq>0)
    {
        m=sq%10;
        sum+=m;
        sq/=10;
    }
    if(sum==n)
    {
        printf("Neon Number");
    }else{
        printf("Not Neon Number");
    }
}