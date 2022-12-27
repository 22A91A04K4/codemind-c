#include<stdio.h>
int main()
{
    int r,n,m,i,s=0,f=1;
    scanf("%d",&n);
    m=n;
    while(m>0)
    {
        r=m%10;
        m=m/10;
        f=1;
        for(r;r>=1;r--)
        {
            f*=r;
        }
        s+=f;
    }
    if(n==s)
    {
        printf("The number %d is a strong number",n);
    }
    else
    {
        printf("The number %d is not a strong number",n);
    }
}