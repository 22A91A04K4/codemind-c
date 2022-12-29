#include<stdio.h>
int main()
{
    int n,r,m;
    scanf("%d",&n);
        m=n;
        r=0;
        while(m>0)
        {
            r=r*10+m%10;
            m/=10;
        }
        if(r==n)
        {
            printf("True");
        }
        else
        {
            printf("False");
        }
    
}