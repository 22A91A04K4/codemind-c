#include<stdio.h>
int main()
{
    int a,b,x,y,i,p;
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        x=a;
        y=b;
    }
    else
    {
        x=b;
        y=a;
    }
    for(i=1;i<x*b;i++)
    {
        p=x*i;
        if(p%y==0)
        {
            printf("%d",p);
            break;
        }
    }
}