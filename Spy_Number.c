#include<stdio.h>
int main()
{
    int temp,n,m,sum=0,pro=1;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        m=n%10;
        sum+=m;
        pro*=m;
        n/=10;
    }
    if(sum==pro)
    {
        printf("Spy Number");
    }else{
        printf("Not Spy Number");
    }
    return 0;
}